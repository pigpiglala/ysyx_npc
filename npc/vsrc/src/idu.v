`include "macro.v"
`include "ctrlu.v"
`include "extend.v"
module idu(
	input wire [`PC_WIDTH - 1 : 0] inst_addr_in,		// pc
	input wire [`INST_WIDTH - 1 : 0] inst_data_in, 		// inst(binary)
	// input wire zero,									// from alu
	input wire [`REG_WIDTH - 1 : 0] rd1_data_in,		// from regs(rs1)
	input wire [`REG_WIDTH - 1 : 0] rd2_data_in,		// from regs(rs2)
	// from csr
	input wire [`REG_WIDTH - 1 : 0] csr_data_in,
	// to csr
	output wire [`CSR_ADDR_WIDTH - 1 : 0] csr_rd_addr_out,

	output wire CsrWrite,
	output wire [`CSR_ADDR_WIDTH - 1 : 0] csr_wr_addr_out_1,
	output wire [`REG_WIDTH - 1 : 0] csr_wr_data_out_1,
	output wire [`CSR_ADDR_WIDTH - 1 : 0] csr_wr_addr_out_2,
	output wire [`REG_WIDTH - 1 : 0] csr_wr_data_out_2,

	// to regs
	output wire [`REG_ADDR_WIDTH - 1 : 0] rd1_addr_out,			// to regs
	output wire [`REG_ADDR_WIDTH - 1 : 0] rd2_addr_out,			// to regs
	output wire [`REG_ADDR_WIDTH - 1 : 0] reg_wr_addr_out,		// to regs

	// control signal
	output wire SLT,
	output wire Jump,				// control PCSrc by jump and branch and zero, notEqual, less, greatEqual
	output wire Branch,
	output wire [2:0] whichBranch,
	// output wire PCSrc,				// to pc
	output wire [1:0] ResultSrc,		// to exu
	output wire MemWriteRead,		// to vmu
	output wire MemWrite,			// to mem

	output wire [3:0] ALUControl,	// to exu(alu)
	output wire RegWrite,			// to regs
	// data signal
	output wire [`REG_WIDTH - 1 : 0] SrcA,		// to exu(alu)
	output wire [`REG_WIDTH - 1 : 0] SrcB,		// to exu(alu)
	// output wire ALU_SRC_SIGNED_OR_NOT,
	output wire [2:0] BitSrc, 					// to vmu
	output wire [`PC_WIDTH - 1 : 0]  PCTarget	// to pc

);
	wire [1:0] ALUSrcA;						// get srcB or imm
	wire [1:0] ALUSrcB;						// get srcB or imm
	wire [2:0] ImmSrc;					// to extend
	wire [`REG_WIDTH - 1 : 0] immExt; 	// extended imm
	wire [1:0] PCTargetSrc;

	wire [11:0] imm;
	wire [6:0] 	opcode;
	wire [4:0] 	rd_addr;
	wire [2:0] 	funct3;
	wire [4:0] 	rs1_addr;
	wire [4:0] 	rs2_addr;
	wire [6:0] 	funct7;
	wire [11:0] csr;

	assign imm 		= inst_data_in[31:20];
	assign opcode 	= inst_data_in[6:0];
	assign rd_addr 	= inst_data_in[11:7];
	assign funct3 	= inst_data_in[14:12];
	assign rs1_addr = inst_data_in[19:15];
	assign rs2_addr = (inst_data_in == `CSR_ECALL) ? 5'd15: inst_data_in[24:20];
	assign funct7 	= inst_data_in[31:25];

	assign csr 		= inst_data_in[31:20];
	assign csr_rd_addr_out = (inst_data_in == `CSR_ECALL) ? 12'h305: (inst_data_in == `CSR_MRET) ? 12'h341 : csr;
	// mepc
	assign csr_wr_addr_out_1 = (inst_data_in == `CSR_ECALL) ? 12'h341 : csr;
	// mcause
	assign csr_wr_addr_out_2 = (inst_data_in == `CSR_ECALL) ? 12'h342 : csr;
	wire [1:0] CsrSrc;

    // idu includes ctrlu and extend
	// we get signal in idu
	ctrlu  ctrlu_inst (
		// input
		.imm(imm),
		.op(opcode),
		.funct3(funct3),
		.funct7(funct7),
	    // output
		.SLT(SLT),
		.Jump(Jump),				// jal or jalr
		.Branch(Branch),			// B type
		.whichBranch(whichBranch), 	// which B type 

		.ResultSrc(ResultSrc),
		.MemWriteRead(MemWriteRead),
		.MemWrite(MemWrite),

		.ALUControl(ALUControl),
		.ALUSrcA(ALUSrcA),
		.ALUSrcB(ALUSrcB),
		.ImmSrc(ImmSrc),
		.RegWrite(RegWrite),
		.BitSrc(BitSrc),
		.PCTargetSrc(PCTargetSrc),

		.CsrWrite(CsrWrite),
		.CsrSrc(CsrSrc)
	);
	// extend module
	extend  extend_inst (
		.inst_data_in(inst_data_in),
		.ImmSrc(ImmSrc),
		.imm(immExt)
	);

	// unsigned
	// wire [`REG_WIDTH - 1 : 0] SrcA_unsigned, SrcB_unsigned;
	// signed
	// wire signed [`REG_WIDTH - 1 : 0] SrcA_signed, SrcB_signed;

	// SRC1 to exu(alu)
	// SrcA_tmp we may need to use unsigned one(self)
	MuxKeyWithDefault #(4, 2, 32) SrcA_mux(SrcA, ALUSrcA, `ZEROWORD, {
		`ALU_A_RD, rd1_data_in,
		`ALU_A_ZERO, `ZEROWORD,
		`ALU_A_PC, inst_addr_in,
		`ALU_A_PC_CHANGE, PCTarget
	}); 

	// SrcB_tmp we may need to use signed one
	wire [31:0] four = 32'h4;
	// SRC2 to exu(alu)
	MuxKeyWithDefault #(4, 2, 32) SrcB_mux(SrcB, ALUSrcB, `ZEROWORD, {
		`ALU_B_RD, rd2_data_in,
		`ALU_B_IMM, immExt,
		`ALU_B_FOUR, four,
		`ALU_B_CSR, csr_data_in

	}); 

	MuxKeyWithDefault #(3, 2, 32) csr_wr_data_out_1_mux(csr_wr_data_out_1, CsrSrc, `ZEROWORD, {
		`CSRSRC_RS,  rd1_data_in,
		`CSRSRC_OR,	 csr_data_in | rd1_data_in,
		`CSRSRC_ECALL, inst_addr_in + 4 // pc + 4

	}); 

	MuxKeyWithDefault #(3, 2, 32) csr_wr_data_out_2_mux(csr_wr_data_out_2, CsrSrc, `ZEROWORD, {
		`CSRSRC_RS,  rd1_data_in,
		`CSRSRC_OR,	 csr_data_in | rd1_data_in,
		`CSRSRC_ECALL, rd2_data_in // a7

	}); 

	// assign SrcA_signed = $signed(SrcA_unsigned);
	// assign SrcB_signed = $signed(SrcB_unsigned);

	// MuxKeyWithDefault #(2, 1, 32) SrcA_mux(SrcA, ALU_SRC_SIGNED_OR_NOT, SrcA_unsigned, {
	// 	`ALU_SRC_UNSIGNED, 	SrcA_unsigned,
	// 	`ALU_SRC_SIGNED,	SrcA_signed
	// });

	// MuxKeyWithDefault #(2, 1, 32) SrcB_mux(SrcB, ALU_SRC_SIGNED_OR_NOT, SrcB_unsigned, {
	// 	`ALU_SRC_UNSIGNED, 	SrcB_unsigned,
	// 	`ALU_SRC_SIGNED,	SrcB_signed
	// });

	// PCTarget
	// different type inst different next_pc
	MuxKeyWithDefault #(4, 2, 32) PCTarget_mux(PCTarget, PCTargetSrc, `ZEROWORD, {
		`PCTargetSrc_J_B, 	immExt + inst_addr_in, 	// pc + imm
		`PCTargetSrc_JALR, 	immExt + rd1_data_in,	// rs1 + imm
		`PCTargetSrc_CSR, 	csr_data_in,
		`PCTargetSrc_ECALL, csr_data_in
	}); 

	// to regs
	assign rd1_addr_out = rs1_addr;
	assign rd2_addr_out = rs2_addr;
	assign reg_wr_addr_out = rd_addr;

	wire [31:0] srcb_signed;
	assign srcb_signed = $signed(SrcB);

	always @(*) begin
		// $display("csr reg:%08x", csr_data_in);
		// $display("rs1 reg:%08x", rd1_data_in);
		// $display("csrSrc:%d", CsrSrc);
		// $display("csrWrite:%d", CsrWrite);
		// $display("csr addr out:%08x", csr_addr_out);
		// $display("csr data out:%08x", csr_data_out);
	end

endmodule
