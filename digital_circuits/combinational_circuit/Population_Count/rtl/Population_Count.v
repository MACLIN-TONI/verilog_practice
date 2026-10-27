module Population_Count #(
    parameter WIDTH = 8
)(
    input [WIDTH-1:0] in,
    output reg [$clog2(WIDTH):0] out
);
    always @(*) begin
        out = 0;
        for(integer i = WIDTH-1; i>=0; i=i-1) begin
            if(in[i]==1) begin
                out = out + 1;
            end
            else begin
                out = out;
            end
        end
    end
endmodule