// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/vastz/ysyx-workbench/npc/vsrc/src/ctrlu.v:1:30
    extern void halt_ret();
    // DPI import at /home/vastz/ysyx-workbench/npc/vsrc/top.v:88:30
    extern int pmem_read_npc(int raddr);
    // DPI import at /home/vastz/ysyx-workbench/npc/vsrc/src/lsu.v:14:31
    extern void pmem_write_npc(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
