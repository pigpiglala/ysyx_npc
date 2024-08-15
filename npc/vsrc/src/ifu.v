

`include "macro.v"

module ifu(
	input wire [`INST_WIDTH - 1 : 0] inst_addr_in,	// pc
	input wire [`INST_WIDTH - 1 : 0] inst_data_in,	// inst

	output wire [`INST_WIDTH - 1 : 0] inst_addr_out,	// pc
	output wire [`INST_WIDTH - 1 : 0] inst_data_out	// inst
);
	// get inst form ram
	assign inst_addr_out = inst_addr_in;
	assign inst_data_out = inst_data_in;

endmodule
