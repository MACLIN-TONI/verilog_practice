module odd_even_detector #( parameter BITS = 4) (
    input [BITS-1:0] in,
    output odd,
    output even
);
    assign odd = in[0];
    assign even = ~in[0];
endmodule