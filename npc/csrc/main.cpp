#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include <common.h>
#include "macro.h"
#include "dut.h"
// nemu(ref) difftest mem
#include "src/difftest/mem.h"
// npc memory
#include "memo.h"


void init_monitor(int argc, char *argv[]);
void engine_start();
IFDEF(CONFIG_DIFFTEST, void init_difftest(char *ref_so_file, long img_size, int port));
long load_image(char *filename);

int main(int argc, char** argv, char** env){
	initialize_timer();
	// init_waveform();
	#ifdef CONFIG_VCD
		Verilated::commandArgs(argc, argv);
		Verilated::traceEverOn(true);
		contextp = new VerilatedContext;
		m_trace = new VerilatedVcdC;
		dut->trace(m_trace, 99);
		m_trace->open("build/waveform.vcd");
	#endif 
	
	// open file
	fp = fopen("./constr/test.bin", "rb");
	if (fp == NULL) {
		printf("open file failed\n");
		exit(EXIT_FAILURE);
	}

	init_pmem();

	// init difftest
	
	static char img[128];
	sprintf(img, "./constr/test.bin");
	static long img_size = load_img(img);
	static long image_size = load_image(img);

	static char nemu_str[128]; 
	sprintf(nemu_str, "../nemu/build/riscv32-nemu-interpreter-so");
	static char *diff_so_file = nemu_str;
	IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, image_size, 1024));

	
	// reset
	reset(3);

	/***********start***********/
	init_monitor(argc, argv);
  	engine_start();


	/***********end***********/
	fclose(fp);
	delete dut;

	#ifdef CONFIG_VCD
		if (m_trace) {
			m_trace->close();
			delete m_trace;
			m_trace = nullptr;
		}
		if (contextp) {
			delete contextp;
			contextp = nullptr;
		}
	#endif

	return 0;
	// exit(EXIT_SUCCESS);
}


