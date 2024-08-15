module dram #(
    parameter DRAM_ADDR_WIDTH = 32,
    parameter DRAM_DATA_WIDTH = 32
) (
    input wire clk,
    input wire rst_n,

    input wire [DRAM_ADDR_WIDTH - 1: 0] raddr,
    input wire ren,
    output reg [DRAM_ADDR_WIDTH - 1: 0] rdata,

    input wire [DRAM_ADDR_WIDTH - 1:0] waddr,
    input wire [DRAM_DATA_WIDTH-1:0] wdata,
    input wire [3:0] wmask,
    input wire wen
);
	parameter DRAM_LENGTH = 2**DRAM_ADDR_WIDTH;
    reg [DRAM_DATA_WIDTH - 1:0] mem [0: DRAM_LENGTH - 1];
	initial begin
		$readmemb("constr/test.bin", mem);
	end

    // write mask 
    wire [31:0] wmask_full;
    assign wmask_full = {{8{wstrb[3]}}, {8{wstrb[2]}}, {8{wstrb[1]}}, {8{wstrb[0]}}};

    always @(posedge clk) begin
        if (!rst_n) begin
            rdata <= 0;
        end else begin
            if (ren) begin
                rdata <= mem[raddr];
            end
            if (wen) begin
                mem[waddr] <= (wdata & wmask_full) | M[waddr] & ~wmask_full;
            end
        end
    end


endmodule
