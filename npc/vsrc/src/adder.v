module adder1(
	input wire op1_in,
	input wire op2_in,
	input wire cin,
	output wire sum,
	output wire cout
);
	wire xor_1_internal;
	wire nand_1_internal;
	wire nand_2_internal;

	xor(xor_1_internal, op1_in, op2_in);
	xor(sum, xor_1_internal, cin);
	nand(nand_1_internal, xor_1_internal, cin);
	nand(nand_2_internal, op1_in, op2_in);
	nand(cout, nand_1_internal, nand_2_internal);

endmodule

module adder8(
	input wire [7 : 0] op1_in,
	input wire [7 : 0] op2_in,
	input wire cin,
	output wire [7 : 0] sum,
	output wire cout
);
	wire [6 : 0] cout_internal;

	adder1 a1(op1_in[0], op2_in[0], cin	   			, sum[0], cout_internal[0]);
	adder1 a2(op1_in[1], op2_in[1], cout_internal[0], sum[1], cout_internal[1]);
	adder1 a3(op1_in[2], op2_in[2], cout_internal[1], sum[2], cout_internal[2]);
	adder1 a4(op1_in[3], op2_in[3], cout_internal[2], sum[3], cout_internal[3]);
	adder1 a5(op1_in[4], op2_in[4], cout_internal[3], sum[4], cout_internal[4]);
	adder1 a6(op1_in[5], op2_in[5], cout_internal[4], sum[5], cout_internal[5]);
	adder1 a7(op1_in[6], op2_in[6], cout_internal[5], sum[6], cout_internal[6]);
	adder1 a8(op1_in[7], op2_in[7], cout_internal[6], sum[7], cout);

endmodule

module adder32(
	input wire [31 : 0] op1_in,
	input wire [31 : 0] op2_in,
	input wire cin,
	output wire [31 : 0] sum,
	output wire cout
);
	wire [2 : 0] cout_internal;

	adder8 a1(op1_in[7 : 0]	 , op2_in[7 : 0]  , cin	   		    , sum[7 : 0]  , cout_internal[0]);
	adder8 a2(op1_in[15 : 8] , op2_in[15 : 8] , cout_internal[0], sum[15 : 8] , cout_internal[1]);
	adder8 a3(op1_in[23 : 16], op2_in[23 : 16], cout_internal[0], sum[23 : 16], cout_internal[2]);
	adder8 a4(op1_in[31 : 24], op2_in[31 : 24], cout_internal[0], sum[31 : 24], cout);

endmodule

