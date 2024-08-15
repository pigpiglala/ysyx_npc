`include "macro.v"
module alu(
	input wire [`REG_WIDTH - 1 : 0] op1_in,
	input wire [`REG_WIDTH - 1 : 0] op2_in,
	input wire [3 : 0] alu_op,
	output reg  [`REG_WIDTH - 1 : 0] alu_out,
	output wire equal,
	output wire notEqual,
	output wire less,
	output wire lessSigned,
	output wire greatEqual,
	output wire greatEqualSigned
); 
	
	wire signed [`REG_WIDTH - 1 : 0] op1_in_signed, op2_in_signed;
	
	assign op1_in_signed = $signed(op1_in);
	assign op2_in_signed = $signed(op2_in);

	always@(*) begin		
		case(alu_op)
			`ALU_ADD:
				alu_out = op1_in + op2_in;
			`ALU_SUB:
				alu_out = op1_in - op2_in;
			`ALU_MUL:
				alu_out = op1_in * op2_in;
			`ALU_OR:
				alu_out = op1_in | op2_in;
			`ALU_NOT:
				alu_out = ~op1_in;
			`ALU_AND:
				alu_out = op1_in & op2_in;
			`ALU_XOR:
				alu_out = op1_in ^ op2_in;
			`ALU_SLL:
				alu_out = op1_in << op2_in;
			`ALU_SRL:
				alu_out = op1_in >> op2_in;
			`ALU_SRA:
				alu_out = $signed(op1_in) >>> op2_in;
			default:
				alu_out = 0;
		endcase		
		// $display("zero: %d", zero);
	end
	
	assign equal = (op1_in == op2_in) ? 1: 0;
	assign notEqual = (op1_in != op2_in) ? 1: 0;
	assign less = (op1_in < op2_in) ? 1: 0;
	assign lessSigned = (op1_in_signed < op2_in_signed) ? 1: 0;
	assign greatEqual = (op1_in >= op2_in) ? 1: 0;
	assign greatEqualSigned = (op1_in_signed >= op2_in_signed) ? 1: 0;
	
	always @(*) begin
		// $display("notequal: %x", notEqual);
		// $display("op1: %x", op1_in);
		// $display("op2: %x", op2_in);
		// $display("op2: %x", op2_in);
	end

endmodule
