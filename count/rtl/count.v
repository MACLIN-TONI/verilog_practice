module count (
    input clk,
    input areset_n,
    output [2:0] out
);
    reg A,B,C;
    reg Ab,Bb,Cb;
    
    assign out = {A,B,C};

    T Cff(
        .clk(clk),
        .en(1),
        .areset_n(areset_n),
        .t(1),
        .q(C)        
    );

    T Bff(
        .clk(~C),
        .en(1),
        .areset_n(areset_n),
        .t(1),
        .q(B)        
    );

    T Aff(
        .clk(~B),
        .en(1),
        .areset_n(areset_n),
        .t(1),
        .q(A)        
    );

endmodule