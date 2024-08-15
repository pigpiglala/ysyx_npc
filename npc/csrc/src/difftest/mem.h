#ifndef _MEM_H_
#define _MEM_H_

#include "common.h"

#define MEM_SIZE 0x8000000
#define MEM_BASE 0x80000000

typedef uint32_t paddr_t;
typedef uint32_t word_t;

extern uint8_t pmem[MEM_SIZE];

// get .bin for nemu(ref)
long load_image(char *filename);

uint8_t* guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);
word_t host_read(void *addr, int len);
void host_write(void *addr, int len, word_t data);
word_t pmem_read(paddr_t addr, int len);
void pmem_write(paddr_t addr, int len, word_t data);
void display_mem();

#endif