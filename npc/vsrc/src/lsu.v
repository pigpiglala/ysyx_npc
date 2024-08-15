`include "macro"

module lsu(
	input wire mem_wr_rd_en_in,
	input wire mem_wr_en_in,
	input wire [`REG_WIDTH - 1 : 0] ALUResultM, // it may be mem_rd_addr
	input wire [`REG_WIDTH - 1 : 0] mem_wr_data_in,
	input wire [2:0] BitSrc,

	output reg [`REG_WIDTH - 1 : 0] mem_rd_data_out
);

	import "DPI-C" function int pmem_read_npc(input int raddr);
	import "DPI-C" function void pmem_write_npc(
  		input int waddr, input int wdata, input byte wmask);
		
	// load lb lh lw mem_rd_data_out
	MuxKeyWithDefault #(6, 3, 32) mem_rd_data_out_mux(mem_rd_data_out, BitSrc, `ZEROWORD, {
		`BITSRC_ZERO, `ZEROWORD,
		`BITSRC_BYTE, {24'b0, mem_rd_data_out_tmp[7:0]},
		`BITSRC_HALF, {16'b0, mem_rd_data_out_tmp[15:0]},
		`BITSRC_WORD, mem_rd_data_out_tmp,
		`BITSRC_BYTE_SEXT, {{24{mem_rd_data_out_tmp[7]}}, mem_rd_data_out_tmp[7:0]},
		`BITSRC_HALF_SEXT, {{16{mem_rd_data_out_tmp[15]}}, mem_rd_data_out_tmp[15:0]}
	}); 

	// store sb sh sw mem_wr_data_in
	reg [`REG_WIDTH - 1 : 0] mem_wr_data_in_tmp;
	MuxKeyWithDefault #(6, 3, 32) mem_wr_data_in_mux(mem_wr_data_in_tmp, BitSrc, `ZEROWORD, {
		`BITSRC_ZERO, `ZEROWORD,
		`BITSRC_BYTE, {24'b0, mem_wr_data_in[7:0]},
		`BITSRC_HALF, {16'b0, mem_wr_data_in[15:0]},
		`BITSRC_WORD, mem_wr_data_in,
		`BITSRC_BYTE_SEXT, {{24{mem_wr_data_in[7]}}, mem_wr_data_in[7:0]},
		`BITSRC_HALF_SEXT, {{16{mem_wr_data_in[15]}}, mem_wr_data_in[15:0]}
	});
	
	reg [7:0] wmask;
	reg [31:0] temp;
    
    // Calculate wmask based on BitSrc
    always @(*) begin
        case (BitSrc)
            `BITSRC_BYTE: wmask = 8'b0001;
            `BITSRC_HALF: wmask = 8'b0011;
            `BITSRC_WORD: wmask = 8'b1111;
			`BITSRC_ZERO: wmask = 8'b0000;
            default: wmask = 8'b0;
        endcase
    end

	reg [`REG_WIDTH - 1 : 0] mem_rd_data_out_tmp;
	always @(ALUResultM, mem_wr_rd_en_in, mem_wr_en_in) begin
		if (mem_wr_rd_en_in) begin
			// $display("mem_read in lsu");
			mem_rd_data_out_tmp = pmem_read_npc(ALUResultM);
			if (mem_wr_en_in) begin
				// $display("mem_write in lsu");
				pmem_write_npc(ALUResultM, mem_wr_data_in_tmp, wmask);
			end
		end else begin
			mem_rd_data_out_tmp = `ZEROWORD;
		end	
	end

	always @(*) begin
		// $display("mem_read:%x", mem_rd_data_out);
	end

endmodule
