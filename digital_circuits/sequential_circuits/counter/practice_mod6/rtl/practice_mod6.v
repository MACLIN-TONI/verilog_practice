module practice_mod6(
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
            a <= (b & c) | (a & ~c);
            b <= (~a & ~b & c) | (b & ~c);
            c <= ~c ; 
        end
    end
endmodule