module BCD_Adder (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    output carry_out
);
    
    wire c_out1, c_out2;
    wire [3:0] s;
    wire invalid;

    ripple_carry_adder #(
        .N(4)
    ) rca1 (
        .a(a),
        .b(b),
        .cin(1'b0),
        .sum(s),
        .carry_out(c_out1)
    );

    assign invalid = (c_out1) | (s[3] & s[2]) | (s[3] & s[1]);

    ripple_carry_adder #(
        .N(4)
    ) rca2 (
        .a({1'b0, invalid, invalid, 1'b0}),
        .b(s),
        .cin(1'b0),
        .sum(sum),
        .carry_out(c_out2)
    );

    assign carry_out = c_out1 | c_out2;


endmodule