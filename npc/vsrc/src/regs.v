`include "macro.v"
`include "my_ff.v"

module regs(
	input wire clk,
	input wire rst_n,

	input wire reg_wr_en_in,
	input wire [`REG_ADDR_WIDTH - 1 : 0] reg_wr_addr_in,
	input wire [`REG_WIDTH - 1 : 0] reg_wr_data_in,

	input wire [`REG_ADDR_WIDTH - 1 : 0] reg1_rd_addr_in,
	input wire [`REG_ADDR_WIDTH - 1 : 0] reg2_rd_addr_in,

	output wire [`REG_WIDTH - 1 : 0] reg1_rd_data_out,
	output wire [`REG_WIDTH - 1 : 0] reg2_rd_data_out
);

	reg [`REG_WIDTH - 1 : 0] regs [0 : `REG_NUM - 1]/* verilator public_flat */;

	// write data into regs(one cycle)
	always @(posedge clk) begin
		if (reg_wr_en_in) begin
			if (reg_wr_addr_in == 5'b0) begin
				regs[reg_wr_addr_in] <= `ZEROWORD;
			end else begin
				regs[reg_wr_addr_in] <= reg_wr_data_in;
			end
		end
	end

	// read data from regs
	assign reg1_rd_data_out = rst_n ? regs[reg1_rd_addr_in] : `ZEROWORD;
	assign reg2_rd_data_out = rst_n ? regs[reg2_rd_addr_in] : `ZEROWORD;

	// always @(*) begin
	// 	$display("rs1:%x", reg1_rd_data_out);
	// 	$display("rs2:%x", reg2_rd_data_out);
	// end
endmodule
