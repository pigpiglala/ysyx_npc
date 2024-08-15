`include "macro.v"

module csrs(
	input wire clk,
	input wire rst_n,

	input wire csr_wr_en_in,
	input wire [`CSR_ADDR_WIDTH - 1 : 0] csr_wr_addr_in_1,
	input wire [`REG_WIDTH - 1 : 0] csr_wr_data_in_1,
	input wire [`CSR_ADDR_WIDTH - 1 : 0] csr_wr_addr_in_2,
	input wire [`REG_WIDTH - 1 : 0] csr_wr_data_in_2,

	input wire [`CSR_ADDR_WIDTH - 1 : 0] csr_rd_addr_in,
	output wire [`REG_WIDTH - 1 : 0] csr_rd_data_out

);
	// 0: mstatus 	0x300
	// 1: mtvec		0x305
	// 2: mepc		0x341
	// 3: mcause	0x342
	reg [`REG_WIDTH - 1 : 0] csrs [0 : 2**`CSR_ADDR_WIDTH - 1];

	always @(posedge clk) begin
		// $display("ready write into csr");
		if (csr_wr_en_in) begin
			csrs[csr_wr_addr_in_1] <= csr_wr_data_in_1;
			csrs[csr_wr_addr_in_2] <= csr_wr_data_in_2;
			// $display("write into csr");
		end
	end

	assign csr_rd_data_out = rst_n ? csrs[csr_rd_addr_in] : `ZEROWORD;

	always @(csr_rd_addr_in) begin
		if (csr_wr_en_in) begin
			// $display("---csrWrite:%d", csr_wr_en_in);
			// $display("csr rd addr in:%08x", csr_rd_addr_in);
			// $display("csr rd data out:%08x", csr_rd_data_out);
		end
	end

endmodule
