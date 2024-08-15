#include "mem.h"

uint8_t pmem[MEM_SIZE] __attribute((aligned(4096)));

static inline bool in_pmem(paddr_t addr) {
  return addr - MEM_BASE < MEM_SIZE;
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MEM_BASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEM_BASE; }

long load_image(char *filename) {
  if (filename == NULL)
  {
    return 4096;
  }
  FILE *fp = fopen(filename, "rb");
  assert("Can not open");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  printf("load_image:%s %d MB\n",filename,MEM_SIZE/1024/1024);

  fclose(fp);   

  return size;
}

void display_mem() {
  for (int i = 0; i < 50; i++) {
    printf("%02x ", pmem[i]);
  }
}

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
  }
  return 0;
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
  }
}

word_t pmem_read(paddr_t addr, int len) {
  // if (addr <= MEM_BASE || addr > 0x8fffffff) return 0;
  // printf("addr: %x\n", addr);
  if (likely(in_pmem(addr))) {
    int raddr = addr & ~0x3u;
    // printf("haha");
    word_t ret = host_read(guest_to_host(raddr), 4);
	  return ret;
  }
	return 0;
}

void pmem_write(paddr_t addr, int len, word_t data) {

  // int waddr = addr & ~0x3u; // 将地址对齐到4字节边界

    // // 读取对齐地址处的当前数据
    // uint32_t current_data = host_read(guest_to_host(waddr), 4);

    // // 更新数据
    // for (int i = 0; i < 4; i++) {
    //     if (len & (1 << i)) {
    //         ((uint8_t*)&current_data)[i] = ((uint8_t*)&data)[i];
    //     }
    // }
  if (likely(in_pmem(addr))) {
    int waddr = addr & ~0x3u; // 将地址对齐到4字节边界
    int temp = addr - waddr;
    word_t new_data = data << (temp * 8);

	  host_write(guest_to_host(waddr), 4, new_data);
  }
}

