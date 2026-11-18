module random(
    input clk,
    input areset_n,
    output reg [2:0] out 
);
    reg a,b,c;
    assign out = {a,b,c};
    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            {a,b,c} <= 3'b000;
        end
        else begin
            // a <= (~b & c) | (a & b);
            // b <= (a & ~b) | (a & c) | (~a & b & ~c);
            // c <= (~a & ~b) | (~a & ~c) | (~b & c) ; 

            a <= (~a & ~c) | (~a & ~b) | (a & b & c);
            b <= (b & ~a) | (~a & ~c) | (a & ~b & c);
            c <= (a & c) | (a & b) | (~a & ~b & ~c);
        end
    end
endmodule