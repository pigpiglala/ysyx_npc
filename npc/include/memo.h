#ifndef _MEMORY_H_
#define _MEMORY_H_

#include "common.h"

#define NPC_MEM_SIZE 0x8000000
#define NPC_MEM_BASE 0x80000000

extern uint8_t pmem_npc[NPC_MEM_SIZE];

typedef uint32_t paddr_t;
typedef uint32_t word_t;

// extern static uint8_t pmem_npc[NPC_MEM_SIZE];
extern "C" int pmem_read_npc(int addr);
extern "C" void pmem_write_npc(int addr, int data, char wmask);

void init_pmem();
static inline bool in_pmem(paddr_t addr);
// get .bin for npc_mem
long load_img(char *filename);

uint8_t* npc_guest_to_host(paddr_t paddr);
paddr_t npc_host_to_guest(uint8_t *haddr);
word_t npc_host_read(void *addr, int len);
void npc_host_write(void *addr, int len, word_t data);
// word_t npc_paddr_read(paddr_t addr, int len);
// void npc_paddr_write(paddr_t addr, int len, word_t data);

void show_mem();


#endif
