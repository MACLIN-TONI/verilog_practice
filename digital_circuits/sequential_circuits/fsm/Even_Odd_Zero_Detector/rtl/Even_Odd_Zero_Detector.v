module Even_Odd_Zero_Detector (
    input clk,
    input areset_n,
    input din,
    output zero, odd, even
);
    parameter s1=2'b00;
    parameter s2=2'b01;
    parameter s3=2'b10;

    reg [1:0] state;

    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            state <= s1;        
        end
        else begin
            case(state) 
                s1: begin
                    if(din) state <= s2;
                    else state <= s1;
                end
                s2: begin
                    if(din) state <= s3;
                    else state <= s2;
                end
                s3: begin
                    if(din) state <= s2;
                    else state <= s3;
                end
            endcase
        end
    end

    assign zero = (state == s1);
    assign odd = (state == s2);
    assign even = (state == s3);
endmodule