#include "macro.h"
#include "dut.h"
#include <time.h>


time_t start_time = 0;

// 在程序启动时调用这个函数来记录当前时间
void initialize_timer() {
    start_time = time(NULL);
}


#define __GUEST_ISA__ NPC

extern "C" void init_disasm(const char *triple);

static void welcome() {
  initialize_timer();
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}


void init_monitor(int argc, char *argv[]) {
  // printf("hehe");
  // difftest_init(44947);
  init_disasm("riscv32-pc-linux-gnu");


  welcome();
}
