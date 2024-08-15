`include "macro.v"

module pc_reg(
	input wire clk,
	input wire rst_n,
	input wire PCSrc,
	input wire [`INST_WIDTH - 1: 0] PCTarget,
	output reg [`PC_WIDTH - 1: 0] pc
);

	wire [`PC_WIDTH - 1 : 0] pc_next;

	always @(posedge clk) begin
		if (!rst_n) begin
			pc <= `PC_RESET;
		end else begin
			pc <= pc_next;
		end
	end

	// Mux21
	assign pc_next = PCSrc ? PCTarget: pc + 32'h00000004;

endmodule
