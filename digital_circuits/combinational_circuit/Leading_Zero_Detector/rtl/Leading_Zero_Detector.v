module Leading_Zero_Detector (
    input [7:0] in,
    output reg [4:0] out
);
    always @(*) begin
        if(|in[7:4]) begin
            casez (in[7:4])
                4'b1???: out = 0;
                4'b01??: out = 1;
                4'b001?: out = 2;
                4'b0001: out = 3;
                default : out = 4;
            endcase
        end
        else begin
            casez (in[3:0])
                4'b1???: out = 4;
                4'b01??: out = 5;
                4'b001?: out = 6;
                4'b0001: out = 7;
                default : out = 8;
            endcase
        end
    end 
endmodule