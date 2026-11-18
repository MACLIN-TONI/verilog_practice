module count (
    input clk,
    input areset_n,
    output [2:0] out
);
    reg A,B,C;
    reg Ab,Bb,Cb;
    
    assign out = {A,B,C};

    
    D Cff(
        .clk(clk),
        .en(1),
        .areset_n(areset_n),
        .d(!C),
        .q(C)        
    );

    D Bff(
        .clk(C),
        .en(1),
        .areset_n(areset_n),
        .d(!B),
        .q(B)        
    );

    D Aff(
        .clk(B),
        .en(1),
        .areset_n(areset_n),
        .d(!A),
        .q(A)        
    );


endmodule