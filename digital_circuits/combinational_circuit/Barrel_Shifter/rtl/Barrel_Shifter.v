module Barrel_Shifter #(
    parameter WIDTH = 8
) (
    input [WIDTH-1:0] in,
    input [$clog2(WIDTH)-1:0] sel,
    output [WIDTH-1:0] out
);
    
    wire [WIDTH-1:0] w [$clog2(WIDTH):0];
    assign w[0] = in;
    
    genvar i;

    generate 
        for( i = 1; i <= $clog2(WIDTH); i=i+1) begin : stage
            localparam v1 = 1 << (i-1);
            assign w[i] = (sel[i-1]) ? ({w[i-1][WIDTH-1-v1:0], w[i-1][WIDTH-1:WIDTH-1-(v1-1)]}) : w[i-1];
        end
    endgenerate
    
    assign out = w[$clog2(WIDTH)];


endmodule