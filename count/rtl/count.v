module count (
    input clk,
    input areset_n,
    output [2:0] out
);
    reg A,B,C;
    reg Ab,Bb,Cb;
    
    assign out = {A,B,C};

    
    SR Cff(
        .clk(clk),
        .en(1),
        .areset_n(areset_n),
        .s(Cb),
        .r(C),
        .q(C),
        .qb(Cb)
        
    );

    SR Bff(
        .clk(Cb),
        .en(1),
        .areset_n(areset_n),
        .s(Bb),
        .r(B),
        .q(B),
        .qb(Bb)
        
    );

    SR Aff(
        .clk(Bb),
        .en(1),
        .areset_n(areset_n),
        .s(Ab),
        .r(A),
        .q(A),
        .qb(Ab)
        
    );

endmodule