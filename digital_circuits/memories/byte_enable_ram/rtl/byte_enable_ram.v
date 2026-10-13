module byte_enable_ram #(
    parameter WIDTH = 32,
    parameter DEPTH = 16
) (
    input clk,
    input we,
    input [$clog2(DEPTH)-1:0] addr,
    input [(WIDTH/8)-1:0] byte_en,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout 
);
    reg [$clog2(WIDTH/8):0] i;
    reg [WIDTH-1:0] mem [0:DEPTH-1];

    always @(posedge clk) begin
        if(we) begin
            for(i=0;i<WIDTH/8; i=i+1) begin
                mem[addr][i*8 +: 8] <= (byte_en[i])?din[i*8 +: 8]:mem[addr][i*8 +: 8];
            end
        end
        else begin
            dout <= mem[addr];
        end
    end

endmodule