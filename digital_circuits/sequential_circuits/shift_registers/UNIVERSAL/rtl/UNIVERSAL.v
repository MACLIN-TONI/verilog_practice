module UNIVERSAL (
    input clk,
    input en,
    input areset_n,
    input [3:0] in,
    input [1:0] mode,
    output [3:0] out
);

    wire [3:0] w;

    mux_D u3(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .p_in(in[3]),
        .ffprev_out(w[0]),
        .ffnext_out(w[2]),
        .mode(mode),
        .out(w[3])
    );

    mux_D u2(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .p_in(in[2]),
        .ffprev_out(w[3]),
        .ffnext_out(w[1]),
        .mode(mode),
        .out(w[2])
    );

    mux_D u1(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .p_in(in[1]),
        .ffprev_out(w[2]),
        .ffnext_out(w[0]),
        .mode(mode),
        .out(w[1])
    );

    mux_D u0(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .p_in(in[0]),
        .ffprev_out(w[1]),
        .ffnext_out(w[3]),
        .mode(mode),
        .out(w[0])
    );

    assign out = w;
    
endmodule 