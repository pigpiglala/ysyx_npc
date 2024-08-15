`include "macro.v"
module exu(
	input wire [3 : 0] ALUControl,				// which operation
	input wire [1:0] ResultSrc,						// which result, we dont have mem now
	input wire [`REG_WIDTH - 1 : 0] op1_in,		// from idu	
	input wire [`REG_WIDTH - 1 : 0] op2_in,		// from idu
	// input wire ALUSrcSignedOrNot,

	input wire Jump,		// decide PCSrc	with equal...
	input wire Branch,		// decide PCSrc
	input wire [2:0] whichBranch, 

	output wire SLTSrc,
	output wire [`REG_WIDTH - 1 : 0] ALUResult,	// output
	output wire PCSrc		// to pc_reg, whether jump or not, decide by Jump, Branch and whichBranch(equal, notEqual...)
	
);
	// exu includes alu
	wire [`REG_WIDTH - 1 : 0] alu_out;
	wire equal;
	wire notEqual;
	wire less;
	wire lessSigned;
	wire greatEqual;
	wire greatEqualSigned;

	wire zero;


	alu alu_inst (
		.op1_in(op1_in),
		.op2_in(op2_in),
		.alu_op(ALUControl),
		.alu_out(alu_out),
		.equal(equal),
		.notEqual(notEqual),
		.less(less),				// rs1 < rs2 or rs1 < imm
		.lessSigned(lessSigned),
		.greatEqual(greatEqual),
		.greatEqualSigned(greatEqualSigned)
	);
	
	MuxKeyWithDefault #(6, 3, 1) Branch_mux(zero, whichBranch, 1'b0, {
		`BRANCH_EQ, equal,
		`BRANCH_NEQ, notEqual,
		`BRANCH_LESS, less,			// sltiu, sltu
		`BRANCH_GRE, greatEqual,
		`BRANCH_LESS_SIGNED, lessSigned,
		`BRANCH_GRE_SIGNED, greatEqualSigned			
	}); 

	wire less_tmp;
	MuxKeyWithDefault #(2, 3, 1) less_tmp_mux(less_tmp, whichBranch, 1'b0, {
		`BRANCH_LESS, less,
		`BRANCH_LESS_SIGNED, lessSigned
	});

	MuxKeyWithDefault #(2, 1, 1) SLTSrc_mux(SLTSrc, less_tmp, 1'b0, {
		`SLT_LESS, `RES_ONE,
		`SLT_NOTLESS, `RES_ZERO
	}); 

	assign PCSrc = Jump | (Branch & zero);

	assign ALUResult = alu_out;

	always @(*) begin
		// $display("op1:%x", op1_in);
		// $display("op2:%x", op2_in);
		// $display("branch:%x", Branch);
		// $display("zero:%x", zero);
	end

endmodule

