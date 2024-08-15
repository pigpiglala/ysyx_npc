#include "reg.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "dut.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

int find_reg_index(const char *reg){
  for (int i = 0; i < REGNUM; i ++) {
    if (!strcmp(reg, regs[i])) {
      return i;
    }
  }
  return -1;
}

void isa_reg_display() {
  for (int i = 0; i < REGNUM; i ++) {
    printf("%-8s  0x%08x     %u\n", regs[i], dut->rootp->top__DOT__my_regs__DOT__regs[i], (uint32_t)dut->rootp->top__DOT__my_regs__DOT__regs[i]);
  }
  printf("csr reg\n");
  printf("mstatus: 0x%08x\n", dut->rootp->top__DOT__csrs_inst__DOT__csrs[768]);
  printf("mtvec: 0x%08x\n", dut->rootp->top__DOT__csrs_inst__DOT__csrs[773]);
  // printf("mtvec: 0x%08x\n", dut->rootp->top__DOT__csrs_inst__DOT__csrs[305]);
  printf("mepc: 0x%08x\n", dut->rootp->top__DOT__csrs_inst__DOT__csrs[833]);
  printf("mcause: 0x%08x\n", dut->rootp->top__DOT__csrs_inst__DOT__csrs[834]);
}