#include "dut.h"
#include "../src/difftest/difftest.h"
#include "../src/difftest/cpu.h"
#include <stdint.h>
#include <verilated_vcd_c.h>
// it includes the header file we need
#include "common.h"
#include "memory.h"

// init some values
CPU_state cpureg;
Vtop *dut = new Vtop;
int halt = 0;
FILE *fp;
int cur_inst = 0;

VerilatedContext *contextp = nullptr;
VerilatedVcdC *m_trace = nullptr;

// init difftest function
void difftest_step();

// npc halt
extern "C" void halt_ret() {
	halt = 1;
}

// get inst
extern "C" void get_cur_inst(int *inst) {
	cur_inst = *inst;
}

// pmem_read

// disassemble
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


//print some info
void print_some_info() {
	uint32_t pc = dut->rootp->top__DOT__pc;
	// printf("----npc----\n");
	printf("hex code: %08x\t", dut->rootp->top__DOT__inst);
	char buf[128];
	disassemble(buf, sizeof(buf), dut->rootp->top__DOT__inst, (uint8_t *)&(dut->rootp->top__DOT__inst), 4);
	printf("PC: 0x%08x\t", pc);printf("\t%s\n", buf);
}



// one single cycle
void single_cycle() {
	// dut->clk = 0; 
	// printf("eval1\n");
	// dut->eval();
	// printf("eval2\n");
	// #ifdef CONFIG_VCD
	// 	if (m_trace && contextp) {
	// 		m_trace->dump(contextp->time());
	// 		contextp->timeInc(1);  // Increment time
	// 	}
	// #endif

	// dut->clk = 1; 
	// printf("eval3\n");
	// dut->eval();
	// printf("eval4\n");
	// #ifdef CONFIG_VCD
	// 	if (m_trace && contextp) {
	// 		m_trace->dump(contextp->time());
	// 		contextp->timeInc(1);  // Increment time
	// 	}
	// #endif

	dut->clk = 0; 
	// printf("eval1\n");
	dut->eval();
	// printf("eval2\n");
	#ifdef CONFIG_VCD
		if (m_trace && contextp) {
			m_trace->dump(contextp->time());
			contextp->timeInc(1);  // Increment time
		}
	#endif
	
	dut->clk = 1; 
	// printf("eval3\n");
	dut->eval();
	// printf("eval4\n");
	#ifdef CONFIG_VCD
		if (m_trace && contextp) {
			m_trace->dump(contextp->time());
			contextp->timeInc(1);  // Increment time
		}
	#endif
}

// reset npc
void reset(int n) {
  	dut->rst_n = 0;
  	while (n -- > 0) { single_cycle();}
  	dut->rst_n = 1;
}

// get one instruction
void get_Inst(FILE *fp) {
    uint32_t pc = dut->rootp->top__DOT__pc;
    const uint32_t base_address = 0x80000000;
    uint32_t offset = pc - base_address;
    if (fseek(fp, offset, SEEK_SET) != 0) {
        printf("fseek failed\n");
        return;
    }
    if (fread(&dut->if_inst_data_in, 1, 4, fp) == 4) {
		print_some_info();
    } else {
        printf("read inst failed\n");
    }
	// putchar('\n');
}

// uint32_t inst[] = {
// 	0x00100093,  // addi x1, x0, 1
//   	0x0ff00413,  // addi x8, x0, ff
// 	0x00200113,  // addi x2, x0, 2 
// 	0x00300113,  // addi x3, x0, 3
// 	0x00000117,  // auipc x1, 0x00000000
// 	0x00012023,
// 	0x008101a3,  // sw x8, 0(x1)
// 	0x00012223,  // sw x0, 0(sp)
// 	0x00110023,  // sb x1, 0(sp)
// 	0x000012b7,
// 	0x005110a3,
// 	0x00511023,
// 	0x00512123,
// 	0x005121a3,
//  	0x00112303,


//   0x00100073,  // ebreak (used as nemu_trap)
//   0xdeadbeef,  // some data
// };
// static int current_inst = 0;
// void get_inst() {
// 	// uint32_t pc = dut->rootp->top__DOT__pc;
// 	dut->if_inst_data_in = inst[current_inst];
// 	print_some_info();
// 	current_inst++;
// }

// npc halt
void npc_halt() {
	if (halt) {
		delete dut;
		printf("npc_halt\n");
		exit(EXIT_SUCCESS);
	}
	return;
}

// npc execute one step
void step(FILE *fp) {	
	// show_mem();
	// get_Inst(fp);
	// get_inst();
	// print_some_info();
	single_cycle();	
	// print_some_info();
	npc_halt();
	IFDEF(CONFIG_DIFFTEST, difftest_step());
}

