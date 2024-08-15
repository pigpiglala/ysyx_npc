`include "macro.v"

module wbu(
	// input wire reg_wr_en_in,
	input wire [1:0] ResultSrc,
	input wire SLT,
	input wire SLTSrc,
	input wire [`REG_WIDTH - 1 : 0] ALUResultM,
	input wire [`REG_WIDTH - 1 : 0] mem_rd_data_in,

	output wire [`REG_WIDTH - 1 : 0] Result
);

	reg [1:0] FinalResultSrc;

	always @(*) begin
		if (SLT == `IS_SLT) begin
			if (SLTSrc == `RES_ONE) begin
				FinalResultSrc = `ONE_RES;
			end	else begin
				FinalResultSrc = `ZERO_RES;
			end	
		end else begin
			FinalResultSrc = ResultSrc;
		end
	end
	
	MuxKeyWithDefault #(4, 2, 32) Result_mux(Result, FinalResultSrc, `ZEROWORD, {
		`ALU_RES, ALUResultM,		// final result from ALU
		`MEM_RES, mem_rd_data_in,	// final result from mem
		`ZERO_RES, 32'b0,			// slti, sltiu, slt, sltu
		`ONE_RES, 32'b1				
	}); 

	// always @(*) begin
	// 	$monitor("result: %x", Result);
	// end

endmodule

