module binary_to_gray #(
    parameter BITS = 4
) (
    input [BITS-1 : 0] in,
    output reg [BITS-1 : 0] out
);
    always @(*) begin
        out[(BITS-1)] = in[(BITS-1)];  
        for(integer i=BITS-2; i>=0; i=i-1) begin
            out[i] = in[i+1] ^ in[i];
        end
    end
endmodule