module Traffic_Light_Controller (
    input clk,
    input areset_n,
    output road_A_green,
    output road_A_yellow,
    output road_A_red,
    output road_B_green,
    output road_B_yellow,
    output road_B_red
);
    parameter s0 = 2'b00;
    parameter s1 = 2'b01;
    parameter s2 = 2'b10;
    parameter s3 = 2'b11;

    reg [1:0] state;

    reg [3:0] count;

    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            state <= s0;
            count <= 0;
        end
        else begin
            case(state) 
                s0: begin
                    if(count == 9) begin
                        state <= s1;
                        count <= 0;
                    end
                    else begin
                        count <= count + 1;
                    end
                end
                s1: begin
                    if(count == 4) begin
                        state <= s2;
                        count <= 0;
                    end
                    else begin
                        count <= count + 1;
                    end
                end
                s2: begin
                    if(count == 9) begin
                        state <= s3;
                        count <= 0;
                    end
                    else begin
                        count <= count + 1;
                    end
                end
                s3: begin
                    if(count == 4) begin
                        state <= s0;
                        count <= 0;
                    end
                    else begin
                        count <= count + 1;
                    end
                end
            endcase
        end
    end

    assign road_A_green = (state == s0);
    assign road_A_yellow = (state == s1);
    assign road_A_red = (state == s2 || state == s3) ;
    assign road_B_green = (state == s2);
    assign road_B_yellow = (state == s3);
    assign road_B_red = (state == s0 || state == s1) ;
endmodule