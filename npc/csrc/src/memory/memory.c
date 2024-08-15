#include "dut.h"
#include "memo.h"
#include "common.h"
#include "device.h"
#include <stdio.h>
#include <time.h>

uint8_t pmem_npc[NPC_MEM_SIZE] PG_ALIGN = {};

time_t rawtime;
struct tm *timeinfo;

long load_img(char *filename) {
  if (filename == NULL) {
    return 4096;
  }
  FILE *fp = fopen(filename, "rb");
  assert("Can not open");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem_npc, size, 1, fp);
  printf("npc_pmem load_img:%s %d MB\n", filename, NPC_MEM_SIZE / 1024 / 1024);
  fclose(fp);   
  return size;
}



void init_pmem() {
  memset(pmem_npc, 0, NPC_MEM_SIZE);
}


void show_mem() {
   	for (int i = 0; i < 50; i++) {
    	printf("%02x ", pmem_npc[i]);
  	}
    printf("\n");
}

static inline bool in_pmem_npc(paddr_t addr) {
  return addr - NPC_MEM_BASE < NPC_MEM_SIZE;
}

static char buffer[80];
static char previousBuffer[80];

static inline void printTime() {
  if (strcmp(buffer, previousBuffer) != 0) {
    printf("%s\n", buffer);
    strncpy(previousBuffer, buffer, sizeof(previousBuffer) - 1);
    previousBuffer[sizeof(previousBuffer) - 1] = '\0'; // 确保字符串以 '\0' 结尾
  }
}

time_t get_current_time_in_seconds() {
    // 获取当前时间（从1970年1月1日至此时经历的秒数）
    time_t current_time = time(NULL);
    return current_time;
}

int time_counter = 0;
extern "C" int pmem_read_npc(int addr) {
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer, sizeof(buffer), "Now it's %Y-%m-%d %H:%M:%S", timeinfo);
	if (addr == RTC_ADDR) {
    // printTime();
    // printf("%s\n", buffer);
    float seconds = (get_current_time_in_seconds() - start_time) * 1000000;
    // printf("sec: %f\n", seconds);
    return seconds;
	}

  if (likely(in_pmem_npc(addr))){
    // printf("pmem_read\n");
    int raddr = addr & ~0x3u;
    int temp = addr - raddr;
    // printf("temp: %d\n", temp);
    word_t ret = npc_host_read(npc_guest_to_host(raddr + temp), 4);
    return ret;
  }
  return 0;
}

extern "C" void pmem_write_npc(int addr, int data, char wmask) {
  int aligned_addr = addr & ~0x3u; // Align address to 4 bytes
  int temp = addr - aligned_addr;

  if (aligned_addr == SERIAL_PORT) {
      // Extract and output bytes based on the mask
      for (int i = 0; i < 4; i++) {
          if (wmask & (1 << i)) {
              char byte_to_output = (data >> (i * 8)) & 0xFF;
              putchar(byte_to_output);
          }
      }
  }

  if (likely(in_pmem_npc(addr))) {
    int len = 0;
    int real_len = 0;
    if (wmask == 0xF) {
      len = 4;
    } else if (wmask == 0x3) {
      len = 2;
    } else {
      len = 1;
    }
    if (temp + len > 4) {
      real_len = temp + len - 4;
    } else {
      real_len = len;
    }
    npc_host_write(npc_guest_to_host(aligned_addr + temp), real_len, data);
  }
}

uint8_t* npc_guest_to_host(paddr_t paddr) { 
  return pmem_npc + paddr - NPC_MEM_BASE; 
}

paddr_t npc_host_to_guest(uint8_t *haddr) { 
  return haddr - pmem_npc + NPC_MEM_BASE; 
}

word_t npc_host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
  }
  return 0;
}

void npc_host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
  }
}


