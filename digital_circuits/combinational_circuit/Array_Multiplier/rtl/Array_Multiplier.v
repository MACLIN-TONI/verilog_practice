module Array_Multiplier (
    input [3:0] a,
    input [3:0] b,
    output [7:0] out
);
    wire [3:0] pp0,pp1,pp2,pp3;
    
    assign pp0 = a & {4{b[0]}};
    assign pp1 = a & {4{b[1]}};
    assign pp2= a & {4{b[2]}};
    assign pp3 = a & {4{b[3]}};

    assign out = {4'b0000,pp0} + {3'b000,pp1,1'b0} + {2'b00, pp2,2'b00} + {1'b0,pp3,3'b000};

endmodule