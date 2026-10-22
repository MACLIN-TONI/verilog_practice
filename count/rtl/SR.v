module SR (
    input clk,
    input en,
    input areset_n,
    input s,
    input r,
    output reg q,
    output reg qb
);

    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            q <= 1'b0;
            qb <= 1'b1;
        end
        else if(!en) begin
            q <=q;
            qb <= qb;
        end
        else begin
            case ({s,r}) 
                2'b00: begin
                    q <=q;
                    qb <= qb;
                end
                2'b01: begin
                    q <=0;
                    qb <= 1;
                end
                2'b10: begin
                    q <=1;
                    qb <= 0;
                end
                2'b11: begin
                    q <=1;
                    qb <= 1;
                end
                default: begin
                    q <=q;
                    qb <= qb;
                end
            endcase
        end
    end
endmodule 