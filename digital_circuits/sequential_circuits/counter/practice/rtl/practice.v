module practice(
    input clk,
    input areset_n,
    output reg [2:0] out 
);
    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            out <= 3'b000;
        end
        else begin
            out[2] <= (~out[1] & out[0]) | (~out[2] & out[1]);
            out[1] <= (~out[2] & ~out[1]) | (out[2] & out[0]);
            out[0] <= (out[2] & ~out[1]) | (out[2] & out[0]) | (~out[2] & out[1] & ~out[0]) ; 
        end
    end
endmodule