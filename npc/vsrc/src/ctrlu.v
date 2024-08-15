import "DPI-C" function void halt_ret();
// lbu 
// core dumped slli xori
`include "macro.v"
module ctrlu(
	input wire [11:0] imm,
	input wire [6:0] op,
	input wire [2:0] funct3,
	input wire [6:0] funct7,

	output reg SLT,
	output reg Jump,
	output reg Branch,
	output reg [2:0] whichBranch,		// beq,    bne,    blt, 	bge
										// zero, notEqual, less, greatEqual
	output reg [1:0] ResultSrc,
	output reg RegWrite,
	output reg MemWriteRead,
	output reg MemWrite,

	output reg [3:0] ALUControl,
	output reg [1:0] ALUSrcA,
	output reg [1:0] ALUSrcB,
	output reg [2:0] ImmSrc,

	output reg [2:0] BitSrc,

	output reg [1:0] PCTargetSrc,

	output reg CsrWrite,
	output reg [1:0] CsrSrc
);

	always @(*) begin
		case (op)
		`U_TYPE_LUI: begin
			SLT = `NOT_SLT;				// not SLT
			Jump = `JUMP_DISABLE;		// no jump
			Branch = `BRANCH_DISABLE;	// no branch
			whichBranch = `BRANCH_EQ;	// dont care

			ResultSrc = `ALU_RES;		// use aluresult
			MemWriteRead = `MEM_WR_RD_DIS;	// no mem
			MemWrite = `MEM_WR_DIS;			// no write mem

			ALUControl = `ALU_ADD;		// we dont need here x[rd] = 0 + U_IMM 
			ALUSrcA = `ALU_A_ZERO;		// 0
			ALUSrcB = `ALU_B_IMM;		// U_IMM
			ImmSrc = `U_IMM;			// get U_IMM
			RegWrite = `REG_WR_EN;		// write data into regs
			BitSrc = `BITSRC_WORD;		// one word
			PCTargetSrc = `PCTargetSrc_J_B; // dont care

			CsrSrc = `CSRSRC_RS;
			CsrWrite = `CSR_WR_DISABLE;
		end
		// auipc
		`U_TYPE_AUIPC: begin
			SLT = `NOT_SLT;
			Jump = `JUMP_DISABLE;
			Branch = `BRANCH_DISABLE;		// not branch
			whichBranch = `BRANCH_EQ;	// dont care

			ResultSrc = `ALU_RES;
			MemWriteRead = `MEM_WR_RD_DIS;	// no mem
			MemWrite = `MEM_WR_DIS;

			ALUControl = `ALU_ADD;
			ALUSrcA = `ALU_A_PC;		// x[rd] = pc + u_imm
			ALUSrcB = `ALU_B_IMM;
			ImmSrc = `U_IMM;

			RegWrite = `REG_WR_EN;
			BitSrc = `BITSRC_WORD;		// default we use a word
			PCTargetSrc = `PCTargetSrc_J_B;
			CsrSrc = `CSRSRC_RS;
			CsrWrite = `CSR_WR_DISABLE;
		end
		// pass
		`J_TYPE_JAL: begin
			SLT = `NOT_SLT;
			Jump = `JUMP_ENABLE;
			Branch = `BRANCH_DISABLE;		// not branch
			whichBranch = `BRANCH_EQ;	// dont care
			ResultSrc = `ALU_RES;
			MemWriteRead = `MEM_WR_RD_DIS;	// no mem
			MemWrite = `MEM_WR_DIS;
			ALUControl = `ALU_ADD;
			ALUSrcA = `ALU_A_PC;		// x[rd] = pc + 4
			ALUSrcB = `ALU_B_FOUR;
			ImmSrc = `J_IMM;
			RegWrite = `REG_WR_EN;
			BitSrc = `BITSRC_WORD;		// default we use a word
			PCTargetSrc = `PCTargetSrc_J_B;
			CsrSrc = `CSRSRC_RS;
			CsrWrite = `CSR_WR_DISABLE;
		end
		// jalr I type !!!
		`I_TYPE_JALR: begin
			SLT = `NOT_SLT;
			Jump = `JUMP_ENABLE;
			Branch = `BRANCH_DISABLE;		// not branch
			whichBranch = `BRANCH_EQ;	// dont care
			ResultSrc = `ALU_RES;
			MemWriteRead = `MEM_WR_RD_DIS;	// no mem
			MemWrite = `MEM_WR_DIS;
			ALUControl = `ALU_ADD;
			ALUSrcA = `ALU_A_PC;		// x[rd] = pc + 4
			ALUSrcB = `ALU_B_FOUR;
			ImmSrc = `I_IMM;
			RegWrite = `REG_WR_EN;
			BitSrc = `BITSRC_WORD;		// default we use a word
			PCTargetSrc = `PCTargetSrc_JALR;
			CsrSrc = `CSRSRC_RS;
			CsrWrite = `CSR_WR_DISABLE;
		end
		`B_TYPE: begin
			case (funct3)
				`B_BEQ: begin
					// $display("beq");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_EQ;	// beq
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 == rs2 ?
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				`B_BNE: begin
					// $display("bne");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_NEQ;	// beq
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 != rs2
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				`B_BLT: begin
					// didnt use signed
					// $display("blt");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_LESS_SIGNED;	// beq
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 != rs2
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				`B_BGE: begin
					// didnt use signed
					// $display("bge");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_GRE_SIGNED;	// beq
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 != rs2
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				`B_BLTU: begin
					// $display("bltu");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_LESS;	// beq

					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem

					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 != rs2
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				`B_BGEU: begin
					// $display("bgeu");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// We may jump
					Branch = `BRANCH_ENABLE;	// branch
					whichBranch = `BRANCH_GRE;	// beq
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_ADD;		// no
					ALUSrcA = `ALU_A_RD;		// rs1 != rs2
					ALUSrcB = `ALU_B_RD;		// 
					ImmSrc = `B_IMM;			// IMM = B_IMM
					RegWrite = `REG_WR_DIS;		// NO reg write
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// pc = pc + B_IMM
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				default: begin

				end
			endcase
		end
		`I_TYPE_LOAD: begin
			case (funct3) 
				// lb
				`I_LB: begin
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `MEM_RES;		// get data from mem
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_DIS;		// not write data to mem, just load data from mem into reg

					ALUControl = `ALU_ADD;		// rs1 + imm = addr
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_IMM;		// imm
					ImmSrc = `I_IMM;			// I_IMM
					RegWrite = `REG_WR_EN;		// write data into regs
					BitSrc = `BITSRC_BYTE_SEXT;			// lbu get one byte
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// lh
				`I_LH: begin
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `MEM_RES;		// get data from mem
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_DIS;		// not write data to mem, just load data from mem into reg
					ALUControl = `ALU_ADD;		// rs1 + imm = addr
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_IMM;		// imm
					ImmSrc = `I_IMM;			// I_IMM
					RegWrite = `REG_WR_EN;		// write data into regs
					BitSrc = `BITSRC_HALF_SEXT;			// lbu get one half
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// lbu not sext
				`I_LBU: begin
					// $display("It's LBU");
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// not jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `MEM_RES;		// get data from mem
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_DIS;		// dont write data into mem
					ALUControl = `ALU_ADD;		// rs1 + I_IMM = addr 
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_IMM;		// I_IMM
					ImmSrc = `I_IMM;			// I_IMM
					RegWrite = `REG_WR_EN;		// write data into reg
					BitSrc = `BITSRC_BYTE;		// load a word to regs
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// lh
				`I_LHU: begin
					// $display("It's LHU");
					SLT = `NOT_SLT;				// not slr
					Jump = `JUMP_DISABLE;		// not jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `MEM_RES;		// get data from mem
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_DIS;		// not write data to mem
					ALUControl = `ALU_ADD;		// mem's addr is rs1 + I_IMM
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_IMM;		// I_IMM
					ImmSrc = `I_IMM;			// I_IMM
					RegWrite = `REG_WR_EN;		// write data into regs
					BitSrc = `BITSRC_HALF;		// lbu get half word
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// lw
				`I_LW: begin
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// not jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `MEM_RES;		// get data from mem
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_DIS;		// dont write data into mem
					ALUControl = `ALU_ADD;		// rs1 + I_IMM = addr 
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_IMM;		// I_IMM
					ImmSrc = `I_IMM;			// I_IMM
					RegWrite = `REG_WR_EN;		// write data into reg
					BitSrc = `BITSRC_WORD;		// load a word to regs
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				default: begin
					
				end
			endcase
		end
		`S_TYPE: begin
			case (funct3)
				// sh
				`S_SB: begin
					// $display("It is sb");
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// aluresult is the addr
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_EN;		// write data into mem
					ALUControl = `ALU_ADD;		// rs1 + S_IMM
					ALUSrcA = `ALU_A_RD; 		// rs1
					ALUSrcB = `ALU_B_IMM; 		// S_IMM
					ImmSrc = `S_IMM;			// get S_IMM
					RegWrite = `REG_WR_DIS;		// not write into regs
					BitSrc = `BITSRC_BYTE;		// just half word
					PCTargetSrc = `PCTargetSrc_J_B;	// dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// sh
				`S_SH: begin
					// $display("It is sh");
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// aluresult is the addr
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_EN;		// write data into mem
					ALUControl = `ALU_ADD;		// rs1 + S_IMM
					ALUSrcA = `ALU_A_RD; 		// rs1
					ALUSrcB = `ALU_B_IMM; 		// S_IMM
					ImmSrc = `S_IMM;			// get S_IMM
					RegWrite = `REG_WR_DIS;		// not write into regs
					BitSrc = `BITSRC_HALF;		// just half word
					PCTargetSrc = `PCTargetSrc_J_B;	// dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// sw
				`S_SW: begin
					// $display("It is sw");
					SLT = `NOT_SLT;
					Jump = `JUMP_DISABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_EN;	// use mem
					MemWrite = `MEM_WR_EN;
					ALUControl = `ALU_ADD;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_IMM;
					ImmSrc = `S_IMM;
					RegWrite = `REG_WR_DIS;
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				default: begin

				end
			endcase
		end
		`I_TYPE_GEN: begin
			case (funct3)
				// addi
				`I_ADDI: begin
					SLT = `NOT_SLT;
					Jump = `JUMP_DISABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;
					ALUControl = `ALU_ADD;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_IMM;
					ImmSrc = `I_IMM;
					RegWrite = `REG_WR_EN;
					BitSrc = `BITSRC_WORD;			// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// slti
				`I_SLTI: begin
					SLT = `IS_SLT;
					Jump = `JUMP_DISABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_LESS_SIGNED;		
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;
					ALUControl = `ALU_SUB;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_IMM;
					ImmSrc = `I_IMM;
					RegWrite = `REG_WR_EN;
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// sltiu
				`I_SLTIU: begin
					SLT = `IS_SLT;
					Jump = `JUMP_DISABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_LESS;		
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;
					ALUControl = `ALU_SUB;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_IMM;
					ImmSrc = `I_IMM;
					RegWrite = `REG_WR_EN;
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// xori
				`I_XORI: begin
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_XOR;		// x[rd] = x[rs1] ^ I_IMM
					ALUSrcA = `ALU_A_RD;		// x[rs1]
					ALUSrcB = `ALU_B_IMM;		// I_IMM
					ImmSrc = `I_IMM;			// get I_IMM
					RegWrite = `REG_WR_EN;		// write data into reg
					BitSrc = `BITSRC_WORD;		// one word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// andi
				`I_ANDI: begin
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_AND;		// x[rd] = x[rs1] & I_IMM
					ALUSrcA = `ALU_A_RD;		// x[rs1]
					ALUSrcB = `ALU_B_IMM;		// I_IMM
					ImmSrc = `I_IMM;			// get I_IMM
					RegWrite = `REG_WR_EN;		// write data into reg
					BitSrc = `BITSRC_WORD;		// one word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// slli
				`I_SLLI: begin
					// $display("It is SLLI");
					SLT = `NOT_SLT;				// not SLT
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no write to mem
					ALUControl = `ALU_SLL;		// x[rd] = x[rs1] << SHAMT_IMM
					ALUSrcA = `ALU_A_RD;		// x[rs1]
					ALUSrcB = `ALU_B_IMM;		// SHAMT_IMM
					ImmSrc = `SHAMT_IMM;		// get SHAMT_IMM
					// $display("imm:", ALUSrcB);
					RegWrite = `REG_WR_EN;		// write data into reg
					BitSrc = `BITSRC_WORD;		// one word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end

				// srli and srai
				`I_SRLI_SRAI : begin
					case (funct7)
						// srai
						`I_SRAI: begin
							SLT = `NOT_SLT;				// not slt
							Jump = `JUMP_DISABLE;		// no jump
							Branch = `BRANCH_DISABLE;	// no branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;		// x[rd] = x[rs1] >> shamt
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;		// no write to mem
							ALUControl = `ALU_SRA;		// shift right arth
							ALUSrcA = `ALU_A_RD;		// rs1
							ALUSrcB = `ALU_B_IMM;		// shamt
							ImmSrc = `SHAMT_IMM;		// SHAMT_IMM
							RegWrite = `REG_WR_EN;		// write into rd
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end 
						// srli
						`I_SRLI: begin
							SLT = `NOT_SLT;				// not slt
							Jump = `JUMP_DISABLE;		// no jump
							Branch = `BRANCH_DISABLE;	// no branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;		// x[rd] = x[rs1] >> shamt
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;		// no write to mem
							ALUControl = `ALU_SRL;		// shift right arth
							ALUSrcA = `ALU_A_RD;		// rs1
							ALUSrcB = `ALU_B_IMM;		// shamt
							ImmSrc = `SHAMT_IMM;		// SHAMT_IMM
							RegWrite = `REG_WR_EN;		// write into rd
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end 
						default: begin
							
						end
					endcase
				end
				default: begin

				end
			endcase
		end
		// R type
		`R_TYPE: begin
			case (funct3) 
				`R_ADD_SUB: begin
					case (funct7)
						// add
						`R_ADD: begin
							// $display("It is add");
							SLT = `NOT_SLT;
							Jump = `JUMP_DISABLE;
							Branch = `BRANCH_DISABLE;		// not branch 
							whichBranch = `BRANCH_EQ;	// if not branch we dont care
							ResultSrc = `ALU_RES;
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;
							ALUControl = `ALU_ADD;
							ALUSrcA = `ALU_A_RD;
							ALUSrcB = `ALU_B_RD;
							ImmSrc = `R_IMM;	// dont need imm
							RegWrite = `REG_WR_EN;
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end
						// sub
						`R_SUB: begin
							// $display("It is SUB");
							SLT = `NOT_SLT;
							Jump = `JUMP_DISABLE;
							Branch = `BRANCH_DISABLE;		// not branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;
							ALUControl = `ALU_SUB;
							ALUSrcA = `ALU_A_RD;
							ALUSrcB = `ALU_B_RD;
							ImmSrc = `R_IMM;		// dont need imm
							RegWrite = `REG_WR_EN;
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end
						default: begin
							SLT = `NOT_SLT;
							Jump = `JUMP_DISABLE;
							Branch = `BRANCH_DISABLE;		// not branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;
							ALUControl = `ALU_SUB;
							ALUSrcA = `ALU_A_RD;
							ALUSrcB = `ALU_B_RD;
							ImmSrc = `R_IMM;				// dont need imm
							RegWrite = `REG_WR_DIS;
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end
					endcase
				end
				// sll
				`R_SLL: begin
					SLT = `NOT_SLT;				// not slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ; 	// dont care
					ResultSrc = `ALU_RES;		// use alu to shift left logic
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_SLL;		// x[rd] = x[rs1] << x[rs2] shift left logic
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_RD;		// rs2
					ImmSrc = `R_IMM;			// dont need imm
					RegWrite = `REG_WR_EN;		// write data into reg 
					BitSrc = `BITSRC_WORD;		// one word
					PCTargetSrc = `PCTargetSrc_J_B;	
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end	
				// slt
				`R_SLT: begin
					// $display("It is slt");
					SLT = `IS_SLT;				// is slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_LESS_SIGNED; 	// but we need less_signed
					ResultSrc = `ALU_RES;				// use alu res
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;				// no mem
					ALUControl = `ALU_SUB;				// rs1 < rs2 signed
					ALUSrcA = `ALU_A_RD;				// rs1
					ALUSrcB = `ALU_B_RD;				// rs2
					ImmSrc = `R_IMM;					// no imm
					RegWrite = `REG_WR_EN;				// write 1 or 2
					BitSrc = `BITSRC_WORD;				// one word
					PCTargetSrc = `PCTargetSrc_J_B;	// no jump
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// sltu
				`R_SLTU: begin
					SLT = `IS_SLT;				// sltu
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// not branch
					whichBranch = `BRANCH_LESS;	// less signed
					ResultSrc = `ALU_RES;		// dont care
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_SUB;		// actualy no need
					ALUSrcA = `ALU_A_RD;		// rs1 < rs2 unsigned
					ALUSrcB = `ALU_B_RD;		
					ImmSrc = `R_IMM;			// no imm	
					RegWrite = `REG_WR_EN;		// write 1 or 0 to rd
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B;	// dont care
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// xor
				`R_XOR: begin
					SLT = `NOT_SLT;				// no slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_XOR;		// alu xor
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_RD;		// rs2
					ImmSrc = `R_IMM;			// no imm
					RegWrite = `REG_WR_EN;		// write into reg
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care now
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// and 
				`R_AND: begin
					SLT = `NOT_SLT;				// no slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_AND;		// alu and
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_RD;		// rs2
					ImmSrc = `R_IMM;			// no imm
					RegWrite = `REG_WR_EN;		// write into reg
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care now
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// or 
				`R_OR: begin
					SLT = `NOT_SLT;				// no slt
					Jump = `JUMP_DISABLE;		// no jump
					Branch = `BRANCH_DISABLE;	// no branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;		// use ALUResult
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;		// no mem
					ALUControl = `ALU_OR;		// alu or
					ALUSrcA = `ALU_A_RD;		// rs1
					ALUSrcB = `ALU_B_RD;		// rs2
					ImmSrc = `R_IMM;			// no imm
					RegWrite = `REG_WR_EN;		// write into reg
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_J_B; // dont care now
					CsrSrc = `CSRSRC_RS;
					CsrWrite = `CSR_WR_DISABLE;
				end
				// srl sra
				`R_SRL_SRA: begin
					case (funct7)
						`R_SRL: begin
							SLT = `NOT_SLT;				// no slt
							Jump = `JUMP_DISABLE;		// no jump
							Branch = `BRANCH_DISABLE;	// no branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;		// use ALUResult
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;		// no mem
							ALUControl = `ALU_SRL;		// alu srl
							ALUSrcA = `ALU_A_RD;		// rs1
							ALUSrcB = `ALU_B_RD;		// rs2
							ImmSrc = `R_IMM;			// no imm
							RegWrite = `REG_WR_EN;		// write into reg
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B; // dont care now
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end
						`R_SRA: begin
							SLT = `NOT_SLT;				// no slt
							Jump = `JUMP_DISABLE;		// no jump
							Branch = `BRANCH_DISABLE;	// no branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;		// use ALUResult
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;		// no mem
							ALUControl = `ALU_SRA;		// alu sra
							ALUSrcA = `ALU_A_RD;		// rs1
							ALUSrcB = `ALU_B_RD;		// rs2
							ImmSrc = `R_IMM;			// no imm
							RegWrite = `REG_WR_EN;		// write into reg
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B; // dont care now
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_DISABLE;
						end
						default: begin
							
						end
					endcase
				end
				default: begin
					
				end
			endcase
		end
		`E_TYPE: begin
			case (imm)
				`E_TYPE_EBREAK: begin
					halt_ret();
				end	
				`E_TYPE_ECALL: begin
					// $display("ecall");
					SLT = `NOT_SLT;
					Jump = `JUMP_ENABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;
					ALUControl = `ALU_ADD;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_RD;
					ImmSrc = `R_IMM;
					RegWrite = `REG_WR_DIS;
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_ECALL;
					CsrSrc = `CSRSRC_ECALL;
					CsrWrite = `CSR_WR_ENABLE;
				end
				`E_TYPE_MRET: begin
					SLT = `NOT_SLT;
					Jump = `JUMP_ENABLE;
					Branch = `BRANCH_DISABLE;		// not branch
					whichBranch = `BRANCH_EQ;	// dont care
					ResultSrc = `ALU_RES;
					MemWriteRead = `MEM_WR_RD_DIS;	// no mem
					MemWrite = `MEM_WR_DIS;
					ALUControl = `ALU_ADD;
					ALUSrcA = `ALU_A_RD;
					ALUSrcB = `ALU_B_RD;
					ImmSrc = `R_IMM;
					RegWrite = `REG_WR_DIS;
					BitSrc = `BITSRC_WORD;		// default we use a word
					PCTargetSrc = `PCTargetSrc_CSR;
					CsrSrc = `CSRSRC_ECALL;
					CsrWrite = `CSR_WR_DISABLE;
				end
				default: begin
					case (funct3)
						`E_TYPE_CSRRW: begin
							// $display("csrrw");
							SLT = `NOT_SLT;
							Jump = `JUMP_DISABLE;
							Branch = `BRANCH_DISABLE;		// not branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;
							ALUControl = `ALU_ADD;
							ALUSrcA = `ALU_A_ZERO;
							ALUSrcB = `ALU_B_CSR;
							ImmSrc = `R_IMM;
							RegWrite = `REG_WR_EN;
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_RS;
							CsrWrite = `CSR_WR_ENABLE;
						end
						`E_TYPE_CSRRS: begin
							// $display("csrrs");
							SLT = `NOT_SLT;
							Jump = `JUMP_DISABLE;
							Branch = `BRANCH_DISABLE;		// not branch
							whichBranch = `BRANCH_EQ;	// dont care
							ResultSrc = `ALU_RES;
							MemWriteRead = `MEM_WR_RD_DIS;	// no mem
							MemWrite = `MEM_WR_DIS;
							ALUControl = `ALU_ADD;
							ALUSrcA = `ALU_A_ZERO;
							ALUSrcB = `ALU_B_CSR;
							ImmSrc = `R_IMM;
							RegWrite = `REG_WR_EN;
							BitSrc = `BITSRC_WORD;		// default we use a word
							PCTargetSrc = `PCTargetSrc_J_B;
							CsrSrc = `CSRSRC_OR;
							CsrWrite = `CSR_WR_ENABLE;
						end
						default: begin
							
						end
					endcase
				end
			endcase				
		end
		default: begin
			SLT = `NOT_SLT;
			Jump = `JUMP_DISABLE;
			Branch = `BRANCH_DISABLE;		// not branch
			whichBranch = `BRANCH_EQ;	// dont care
			ResultSrc = `ALU_RES;
			MemWriteRead = `MEM_WR_RD_DIS;	// no mem
			MemWrite = `MEM_WR_DIS;
			ALUControl = `ALU_ADD;
			ALUSrcA = `ALU_A_RD;
			ALUSrcB = `ALU_B_RD;
			ImmSrc = `I_IMM;
			RegWrite = `REG_WR_DIS;
			BitSrc = `BITSRC_WORD;		// default we use a word
			PCTargetSrc = `PCTargetSrc_J_B;
		end
		endcase
	end



endmodule
