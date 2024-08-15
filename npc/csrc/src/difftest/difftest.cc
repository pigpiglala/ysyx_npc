// difftest needs to compare the pc, regs and mem between dut(npc) and ref(nemu)
// so we need to copy the code about cpu(pc), regsa and memory

/*
	首先我们要初始化我们的内存，寄存器和pc等，因为difftest主要是对比这些的状态
	有两部分数据，一部分是npc的内存，寄存器和pc,这里npc暂时没有内存，因此主要是寄存器和pc
	而这两部分都在CPU_state中，因此我们要为ref(nemu)初始化这些
	创建一个CPU_state nemu,用来存储这些数据，

*/


#include <cstdio>
#include <dlfcn.h>
#include <assert.h>
#include "difftest.h"
#include "mem.h"
#include "cpu.h"
#include "dut.h"
#include "reg.h"
#include "memo.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

// static bool is_skip_ref = false;
// static int skip_dut_nr_inst = 0;

CPU_state nemu;
CPU_state npc;
// uint8_t pmem[MEM_SIZE];


void update_npc() { // get npc's reg and pc
	npc.pc = dut->rootp->top__DOT__pc;
	for (int i = 0; i < 32; i++) {
		npc.gpr[i] = dut->rootp->top__DOT__my_regs__DOT__regs[i];
	}
}

const char *regs_[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void reg_display() {
	printf("nemu regs\n");
  for (int i = 0; i < 32; i ++) {
    printf("%-8s  0x%08x     %u\n", regs_[i], nemu.gpr[i], nemu.gpr[i]);
  }
}

/*目前不需要这些跳过的，首先实现最基本的功能先，再逐渐完善*/
// void difftest_skip_ref() {
//   	is_skip_ref = true;
//   	skip_dut_nr_inst = 0;
// }

// void difftest_skip_dut(int nr_ref, int nr_dut) {
// 	skip_dut_nr_inst += nr_dut;
// 	while (nr_ref-- > 0) {
// 		ref_difftest_exec(1);
// 	}
// }

void init_difftest(char *ref_so_file, long img_size, int port) {
	// open the so_file 
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);
	// assign a value to the function pointer
	ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
	assert(ref_difftest_init);
	// call these function to init
	ref_difftest_init(1); // init nemu cpu_state
	// cpu.pc = 0x80000000, cpu.gpr[0] = 0
	ref_difftest_memcpy(RESET_VECTOR, (void *)pmem, img_size, DIFFTEST_TO_REF); // load img into memory
	// load img(test.bin) in into pmem
	ref_difftest_regcpy(&nemu, DIFFTEST_TO_DUT); // get cpu's reg and pc, then load nemu's reg and pc
	// when we run cpu_exec(), the cpu will update, then we need to copy it to nemu
	update_npc();
	printf("Difftests Init pc:%x\n", nemu.pc);
}

bool isa_difftest_checkregs() {
	bool success = (nemu.pc == npc.pc);
	if (!success) {
		printf("\33[1;31mpc dump(nemu.pc != npc.pc)\33[1;31m\n");
	}
	for (int i = 0; i < 32; i++) {
		if (nemu.gpr[i] != npc.gpr[i]) {
			success = false;
		// printf("nemu.gpr[%d]: %x, npc.gpr[%d]: %x\n", i, nemu.gpr[i], i, npc.gpr[i]);
		}
	}
	if (!success) {
		Log("npc: %x, nemu->pc: %x\n", npc.pc, nemu.pc);
	}
	return success;
}


static inline bool in_pmem(paddr_t addr) {
  return addr - MEM_BASE < MEM_SIZE;
}

bool checkmem() {
	bool success = true;
	// printf("checkmem\n");
	for (uint32_t i = MEM_BASE; i < MEM_BASE + MEM_SIZE; i += 4) {
		// printf("check mem\n");
		if (in_pmem(i)) {
			if (pmem_read(i, 4) != pmem_read_npc(i)) {
			printf("nemu pmem[0x%08x]: 0x%08x, npc pmem[0x%08x]: 0x%08x\n", i, pmem[i], i, pmem_npc[i]);
			success = false;
		}
		}
	}
	return success;
}
static void checkregs(){
	isa_difftest_checkregs();
}

void difftest_step() {
	ref_difftest_exec(1);
	ref_difftest_regcpy(&nemu, DIFFTEST_TO_DUT);
	printf("difftest memcpy\n");
	ref_difftest_memcpy(RESET_VECTOR, (void *)pmem, MEM_SIZE, DIFFTEST_TO_DUT);
	update_npc();
	// reg_display();

	// display_mem();
	// printf("check mem\n");
	// bool mem_success = checkmem();
	bool reg_success = isa_difftest_checkregs();
	// if (!mem_success || !reg_success) { 
	if (!reg_success) { 
		// printf("nemu regs\n");
		reg_display();
		printf("npc regs\n"); 
		isa_reg_display();
		printf("difftest find something wrong\n");
		exit(1);
	}
	reg_display();
}

