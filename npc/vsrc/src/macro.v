`define PC_WIDTH 			32
`define PC_RESET 			32'h80000000	

`define REG_WIDTH 			32
`define REG_ADDR_WIDTH		5
`define CSR_ADDR_WIDTH		12
`define REG_ADDR_ZERO		5'b0
`define REG_NUM				32

`define ZEROWORD 			32'h00000000
`define INST_WIDTH 			32

`define REG_WR_DISABLE		1'b0
`define REG_WR_ENABLE		1'b1


`define U_TYPE_LUI			7'b0110111

`define U_TYPE_AUIPC		7'b0010111

`define J_TYPE_JAL			7'b1101111

`define I_TYPE_JALR			7'b1100111

`define B_TYPE				7'b1100011
`define B_BEQ				3'b000
`define B_BNE				3'b001
`define B_BLT				3'b100
`define B_BGE				3'b101
`define B_BLTU				3'b110
`define B_BGEU				3'b111


`define I_TYPE_LOAD			7'b0000011
`define I_LB				3'b000
`define I_LH				3'b001
`define I_LW				3'b010
`define I_LBU				3'b100
`define I_LHU				3'b101

`define S_TYPE				7'b0100011
`define S_SB				3'b000
`define S_SH				3'b001
`define S_SW				3'b010

`define I_TYPE_GEN			7'b0010011
`define I_ADDI				3'b000
`define I_SLTI				3'b010
`define I_SLTIU				3'b011
`define I_XORI				3'b100
`define I_ORI				3'b110
`define I_ANDI				3'b111
`define I_SLLI				3'b001
`define I_SRLI_SRAI			3'b101
`define I_SRLI				7'b0000000
`define I_SRAI				7'b0100000


`define R_TYPE				7'b0110011
`define R_ADD_SUB 			3'b000
`define R_ADD				7'b0000000
`define R_SUB 				7'b0100000
`define R_SLL				3'b001
`define R_SLT				3'b010
`define R_SLTU				3'b011
`define R_XOR				3'b100
`define R_SRL_SRA			3'b101
`define R_SRL				7'b0000000
`define R_SRA				7'b0100000
`define R_OR				3'b110
`define R_AND				3'b111


`define E_TYPE				7'b1110011
`define E_TYPE_EBREAK 		12'b000000000001
`define E_TYPE_ECALL		12'b000000000000
`define E_TYPE_MRET			12'b001100000010
`define E_TYPE_CSRRW		3'b001
`define E_TYPE_CSRRS		3'b010


// ALU
`define ALU_ADD				4'b0000
`define ALU_SUB				4'b0001
`define ALU_MUL				4'b0010
`define ALU_OR				4'b0011
`define ALU_NOT				4'b0100
`define ALU_AND				4'b0101
`define ALU_XOR				4'b0110
`define ALU_SLL				4'b0111
`define ALU_SRL				4'b1000
`define ALU_SRA				4'b1001

// Control u
`define PC_JUMP_EN			1'b1
`define PC_JUMP_DIS			1'b0
// ResultSrc
`define ALU_RES				2'b01
`define MEM_RES				2'b00
`define ZERO_RES			2'b10
`define ONE_RES				2'b11


// Mem
`define MEM_WR_RD_EN		1'b1
`define MEM_WR_RD_DIS		1'b0
`define MEM_WR_EN			1'b1
`define MEM_WR_DIS			1'b0
// ALU SRC signed or unsigned
`define ALU_SRC_UNSIGNED	1'b0
`define ALU_SRC_SIGNED		1'b1
// ALU_SRCA
`define ALU_A_RD			2'b01
`define ALU_A_ZERO			2'b00
`define ALU_A_PC			2'b10
`define ALU_A_PC_CHANGE		2'b11
// ALU_SRCB
`define ALU_B_RD			2'b01
`define ALU_B_IMM			2'b00
`define ALU_B_FOUR			2'b11
`define ALU_B_CSR			2'b11
// PCTarget
`define PCTargetSrc_J_B		2'b00
`define PCTargetSrc_JALR	2'b01
`define PCTargetSrc_CSR		2'b10
`define PCTargetSrc_ECALL	2'b11

// IMM
`define U_IMM 				3'd0
`define I_IMM 				3'd1
`define B_IMM 				3'd2
`define S_IMM 				3'd3
`define J_IMM 				3'd4
`define R_IMM				3'd5 // zero
`define SHAMT_IMM			3'd6

`define REG_WR_EN			1'b1
`define REG_WR_DIS			1'b0
    
// Jump
`define JUMP_ENABLE			1'b1
`define JUMP_DISABLE		1'b0

// Branch
`define BRANCH_ENABLE		1'b1
`define BRANCH_DISABLE 		1'b0
// Slt
`define SLT_LESS			1'b1
`define SLT_NOTLESS			1'b0
`define RES_ONE				1'b1
`define RES_ZERO			1'b0
`define IS_SLT				1'b1
`define NOT_SLT				1'b0

// which branch
`define BRANCH_EQ			3'b000
`define BRANCH_NEQ			3'b001
`define BRANCH_LESS			3'b010
`define BRANCH_GRE			3'b011
`define BRANCH_LESS_SIGNED	3'b100
`define BRANCH_GRE_SIGNED	3'b101
		
// BitSrc
`define BITSRC_ZERO			3'b000
`define BITSRC_BYTE			3'b001
`define BITSRC_HALF			3'b010
`define BITSRC_WORD			3'b011
`define BITSRC_BYTE_SEXT	3'b100
`define BITSRC_HALF_SEXT	3'b101

// CsrSrc
`define CSRSRC_RS			2'b00
`define CSRSRC_OR			2'b01
`define CSRSRC_ECALL		2'b10
`define CSRSRC_A7			2'b11
// CsrWrite
`define CSR_WR_DISABLE		1'b0
`define CSR_WR_ENABLE		1'b1

`define CSR_ECALL			32'h00000073
`define CSR_MRET			32'h30200073

