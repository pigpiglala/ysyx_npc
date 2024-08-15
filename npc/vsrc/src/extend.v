`include "macro.v"
`include "mux.v"

module extend(
	input wire [`INST_WIDTH - 1 : 0] inst_data_in,
	input wire [ 2 : 0 ] ImmSrc, // what type imm, they are different
	output wire [`INST_WIDTH - 1 : 0] imm
);

	// 5 is how many type imm
	// 3 means 3 bits choice(ImmSrc)
	// 32bits result imm
	MuxKeyWithDefault #(7, 3, 32) imm_mux(imm, ImmSrc, `ZEROWORD, {
		`U_IMM, {{inst_data_in[31:12]}, 12'b0},
		`I_IMM, {{20{inst_data_in[31]}},inst_data_in[31:20]},
		`B_IMM, {{20{inst_data_in[31]}}, inst_data_in[7], inst_data_in[30:25], inst_data_in[11:8], 1'b0},
		`S_IMM, {{20{inst_data_in[31]}},inst_data_in[31:25],inst_data_in[11:7]},
		`J_IMM, {{12{inst_data_in[31]}},inst_data_in[19:12], inst_data_in[20], inst_data_in[30:21], 1'b0},
		`SHAMT_IMM, {27'b0, {inst_data_in[24:20]}},
		`R_IMM, `ZEROWORD
	}); 


endmodule
