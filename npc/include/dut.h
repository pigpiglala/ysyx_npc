#ifndef _DUT_H_
#define _DUT_H_

#include <Vtop.h>
#include "Vtop__Dpi.h"
#include "Vtop___024root.h"
#include <verilated_vcd_c.h>


extern time_t start_time;  // 记录程序开始运行的时间
extern FILE *fp;
extern Vtop *dut;
extern int halt;
extern int cur_inst;
extern VerilatedContext *contextp;
extern VerilatedVcdC *m_trace;

void initialize_timer();
void single_cycle();
void reset(int n);
void get_Inst(FILE *fp);
void step(FILE *fp);
void npc_halt();
void print_pc_inst_info();


#endif
