#include "common.h"

void reg_display();

#define RESET_VECTOR 0x80000000

struct CPU_state
{
  uint32_t gpr[32];
  uint32_t pc;

  uint32_t mepc;
  uint32_t mstatus;
  uint32_t mcause;
  uint32_t mtvec;
}; 

extern CPU_state nemu; // ref 
extern CPU_state npc;  // dut

extern const char *regs_[];
