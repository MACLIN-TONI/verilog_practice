module Binary_Multiplier(
    input [3:0] a,
    input [3:0] b,
    output [7:0] out
);
    wire [15:0] w;
    assign w[0] = (a[0] & b[0]);

    ripple_carry_adder #(
        .N(4)
    ) rca1 (
        .a({1'b0,(a[3] & b[0]),(a[2] & b[0]),(a[1] & b[0])}),
        .b({(a[3] & b[1]),(a[2] & b[1]),(a[1] & b[1]),(a[0] & b[1])}),
        .cin(0),
        .sum({w[4],w[3],w[2],w[1]}),
        .carry_out(w[5])
    );

    ripple_carry_adder #(
        .N(4)
    ) rca2 (
        .a({w[5],w[4],w[3],w[2]}),
        .b({(a[3] & b[2]),(a[2] & b[2]),(a[1] & b[2]),(a[0] & b[2])}),
        .cin(0),
        .sum({w[9],w[8],w[7],w[6]}),
        .carry_out(w[10])
    );

    ripple_carry_adder #(
        .N(4)
    ) rca3 (
        .a({w[10],w[9],w[8],w[7]}),
        .b({(a[3] & b[3]),(a[2] & b[3]),(a[1] & b[3]),(a[0] & b[3])}),
        .cin(0),
        .sum({w[14],w[13],w[12],w[11]}),
        .carry_out(w[15])
    );

    assign out = {w[15],w[14],w[13],w[12],w[11],w[6],w[1],w[0]};

endmodule