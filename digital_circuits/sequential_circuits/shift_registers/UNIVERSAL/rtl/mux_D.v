module mux_D(
    input clk,
    input en,
    input areset_n,
    input p_in,
    input ffprev_out,
    input ffnext_out,
    input [1:0] mode,
    output out
);

    reg mux_out;

    always @(*) begin
        case(mode) 
            2'b00: mux_out = out;
            2'b01: mux_out = p_in;
            2'b10: mux_out = ffprev_out;
            2'b11: mux_out = ffnext_out;
            default: mux_out = out;
        endcase
    end

    D dff(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .d(mux_out),
        .q(out)
    );

endmodule