#include <SDL2/SDL_stdinc.h>
#include <cstdint>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "reg.h"
#include "dut.h"
#include "memo.h"
#include "../difftest/mem.h"

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

static int cmd_si(char *args) {
  if (args != NULL) {
    int num = 0;
    int addr = 0;
    sscanf(args, "%d %x", &num, &addr);
    for (int i = 0; i < num; i++) {
      step(fp);
    }
    return 0;
  }
  step(fp);
	return 0;
}

static int cmd_c(char *args) {
  while (1) {
    step(fp);
  }
	return 0;
}

static int cmd_q(char *args) {
	return -1;
}

static int cmd_info(char *args) {
  char *arg = strtok(NULL, " ");
  if (arg == NULL) {
    printf("Usage: info [r|w]\n");
  }
  else {
    if (strcmp(arg, "r") == 0) {
      isa_reg_display();
    }
  }
  return 0;
}

static int cmd_x(char *args) {
  int num = 0;
	int addr = 0;
	sscanf(args, "%d %x", &num, &addr);
  printf("nemu pmem\n");
  printf("pmem addr:%p\n", pmem);
	for (int i = 0; i < num; i++) {
    uint32_t align_addr = (addr + i * 4) & ~0x3u;
		printf("0x%08x   0x%08x\n", align_addr, pmem_read(align_addr, 4));
    // printf("pmem[%x] = %x\n", 0x80000000, pmem_read(0x80000000, 4));
    // printf("addr:%x\n", addr);
    // printf("pmem[%x] = %x\n", addr, pmem[addr]);
	}
  printf("npc pmem\n");
	for (int i = 0; i < num; i++) {
    uint32_t align_addr = (addr + i * 4) & ~0x3u;
		printf("0x%08x   0x%08x\n", align_addr, pmem_read_npc(align_addr));
    // printf("addr:%x\n", addr);
    // printf("pmem[%x] = %x\n", addr, pmem_npc[addr]);
	}
	return 0;
}

static int cmd_help(char *args);

static char* rl_gets() {
  static char *line_read = NULL;
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }
  line_read = readline("(npc) ");
  if (line_read && *line_read) {
    add_history(line_read);
  }
  return line_read;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Single step the program", cmd_si },
  { "x", "Scan the memory", cmd_x },
  { "info", "Display the registers information of the program", cmd_info },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop() {
  int is_batch_mode = 0;
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }
    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void engine_start() {
	sdb_mainloop();
}	


