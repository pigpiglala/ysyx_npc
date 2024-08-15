`include "macro.v"
`include "pc_reg.v"
`include "regs.v"
`include "ifu.v"
`include "idu.v"
`include "exu.v"
`include "lsu.v"
`include "wbu.v"
`include "csrs.v"

module top(
	input wire clk,
	input wire rst_n,

	// ifu <---> mem
	input wire [31:0] if_inst_data_in
);
	
	wire PCSrc;							// from idu(ctrlu)
	wire [`PC_WIDTH - 1 : 0] PCTarget;	// from idu
	wire [`PC_WIDTH - 1 : 0] pc;		// to ifu
	
	
	pc_reg  pc_reg_inst (
		// input 
		.clk(clk),				// clk
		.rst_n(rst_n),			// reset signal
		.PCSrc(PCSrcE),			// which is next_pc
		.PCTarget(PCTarget),	// jump pc address or plus + 4
		// output 
		.pc(pc)					// pc_out
	);

	wire idu_regs_RegWrite;									// from idu
	wire [`REG_ADDR_WIDTH - 1 : 0] idu_regs_reg_wr_addr;	// idu -> regs
	wire [`REG_ADDR_WIDTH - 1 : 0] idu_regs_rd1_addr;		// idu -> regs
	wire [`REG_ADDR_WIDTH - 1 : 0] idu_regs_rd2_addr;		// idu -> regs

	wire [`REG_WIDTH - 1 : 0] regs_idu_reg1_rd_data;		// regs -> idu
	wire [`REG_WIDTH - 1 : 0] regs_idu_reg2_rd_data;		// regs -> idu
	wire [`REG_WIDTH - 1 : 0] wbu_regs_Result;			// exu -> regs

	regs  my_regs (
		// input
		.clk(clk),									// clk
		.rst_n(rst_n),								// reset signal
		// write
		.reg_wr_en_in(idu_regs_RegWrite),			// from idu(ctrlu) 
		.reg_wr_addr_in(idu_regs_reg_wr_addr),		// from idu
		.reg_wr_data_in(wbu_regs_Result),		// from exu

		// read regs val
		.reg1_rd_addr_in(idu_regs_rd1_addr),		// from idu
		.reg2_rd_addr_in(idu_regs_rd2_addr),		// from idu
		// output 
		.reg1_rd_data_out(regs_idu_reg1_rd_data),		// to idu
		.reg2_rd_data_out(regs_idu_reg2_rd_data)		// to idu
	);


	// CSRS
	wire CsrWrite;
	wire [`CSR_ADDR_WIDTH - 1 : 0] csr_rd_addr;
	wire [`REG_WIDTH - 1 : 0] csr_data;
	wire [`REG_WIDTH - 1 : 0] csr_wr_data_in_1;
	wire [`CSR_ADDR_WIDTH - 1 : 0] csr_addr_out_1;
	wire [`REG_WIDTH - 1 : 0] csr_wr_data_in_2;
	wire [`CSR_ADDR_WIDTH - 1 : 0] csr_addr_out_2;

	csrs  csrs_inst (
		.clk(clk),
		.rst_n(rst_n),
		// write
		.csr_wr_en_in(CsrWrite),
		.csr_wr_addr_in_1(csr_addr_out_1),
		.csr_wr_data_in_1(csr_wr_data_in_1),
		.csr_wr_addr_in_2(csr_addr_out_2),
		.csr_wr_data_in_2(csr_wr_data_in_2),
		// read
		.csr_rd_addr_in(csr_rd_addr),
		.csr_rd_data_out(csr_data)
	);

	wire [`PC_WIDTH - 1 : 0]   if_inst_addr_out;
	wire [`INST_WIDTH - 1 : 0] if_inst_data_out;

	reg [31:0] inst;
	import "DPI-C" function int pmem_read_npc(input int raddr);
	always @(pc) begin
		if (rst_n) begin
			inst = pmem_read_npc(pc);
			// $display("%08x", pc);
			// $display("%08x", inst);
		end else
			inst = `ZEROWORD;
	end
	
	ifu  ifu_inst (
		// input
		.inst_addr_in(pc),
		.inst_data_in(inst),
		// output
		.inst_addr_out(if_inst_addr_out),
		.inst_data_out(if_inst_data_out)
	);

	wire [1:0] idu_wbu_ResultSrc;
	wire idu_vmu_MemWriteRead;
	wire idu_vmu_MemWrite;
	wire [3 : 0] idu_exu_ALUControl;
	wire [`REG_WIDTH - 1 : 0] SrcA;
	wire [`REG_WIDTH - 1 : 0] SrcB;
	wire SLTD;
	wire JumpD;
	wire BranchD;
	wire [2:0] whichBranchD;
	wire [2:0] BitSrcD;
	
	idu  idu_inst (
		// input
		.inst_addr_in(if_inst_addr_out),			// from ifu (pc)
		.inst_data_in(if_inst_data_out),			// from ifu	(inst)
		.rd1_data_in(regs_idu_reg1_rd_data),	// from regs (rs1)
		.rd2_data_in(regs_idu_reg2_rd_data),	// from regs (rs2)
		// from csr mepc
		.csr_rd_addr_out(csr_rd_addr),
		.csr_data_in(csr_data),
		// csr
		.CsrWrite(CsrWrite),
		.csr_wr_addr_out_1(csr_addr_out_1),
		.csr_wr_data_out_1(csr_wr_data_in_1),
		.csr_wr_addr_out_2(csr_addr_out_2),
		.csr_wr_data_out_2(csr_wr_data_in_2),

		// output
		.rd1_addr_out(idu_regs_rd1_addr),				// to regs
		.rd2_addr_out(idu_regs_rd2_addr),				// to regs
		.reg_wr_addr_out(idu_regs_reg_wr_addr),			// to regs

		.SLT(SLTD),
		.Jump(JumpD),
		.Branch(BranchD),
		.whichBranch(whichBranchD),

		.ResultSrc(idu_wbu_ResultSrc),				// get alu result or from mem
		.MemWriteRead(idu_vmu_MemWriteRead),
		.MemWrite(idu_vmu_MemWrite),				// write to mem or not

		.ALUControl(idu_exu_ALUControl),			// which operation
		.RegWrite(idu_regs_RegWrite),				// alu result write to regs or not
		.SrcA(SrcA),								// op1 to exu
		.SrcB(SrcB),								// op2 to exu
		.BitSrc(BitSrcD),
		.PCTarget(PCTarget)
	);

	wire [`REG_WIDTH - 1 : 0] exu_vmu_result;
	wire PCSrcE;
	wire SLTSrcE;
	exu  exu_inst (
		//input
		.ALUControl(idu_exu_ALUControl),			// from idu
		.ResultSrc(idu_wbu_ResultSrc),				// from idu
		.op1_in(SrcA),								// from idu
		.op2_in(SrcB),								// from idu
		.Jump(JumpD),
		.Branch(BranchD),
		.whichBranch(whichBranchD),
		// output 
		.SLTSrc(SLTSrcE),
		.ALUResult(exu_vmu_result),
		.PCSrc(PCSrcE)
	);
	wire [`REG_WIDTH - 1 : 0] vmu_wbu_mem_rd_data_out;
	lsu  lsu_inst (
		// input 
		.mem_wr_rd_en_in(idu_vmu_MemWriteRead),
		.mem_wr_en_in(idu_vmu_MemWrite),
		.ALUResultM(exu_vmu_result),
		.mem_wr_data_in(regs_idu_reg2_rd_data),
		.BitSrc(BitSrcD),
		// output 
		.mem_rd_data_out(vmu_wbu_mem_rd_data_out)
	);

	wbu  wbu_inst (
		// input 
		// when it's slt/slti inst, the result is 0/1 
		.SLTSrc(SLTSrcE),
		.SLT(SLTD),
		// 
		.ResultSrc(idu_wbu_ResultSrc),
		.ALUResultM(exu_vmu_result),
		.mem_rd_data_in(vmu_wbu_mem_rd_data_out),
		// output 
		.Result(wbu_regs_Result)
	);
	
endmodule

