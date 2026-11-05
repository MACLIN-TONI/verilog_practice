module Vending_Machine (
    input clk,
    input areset_n,
    input select,
    input [1:0] product,
    input [4:0] cash,
    input cancel,

    output reg dispense,
    output reg [1:0] product_out,
    output reg [4:0] change,
    output reg busy,
    output reg ready,
    output reg cancelled
);
    parameter IDLE = 0;
    parameter PROD_SEL = 1;
    parameter BISCUIT = 2;
    parameter JUICE = 3;
    parameter CHOCOLATE = 4;
    parameter DISPENSE = 5;
    parameter CANCEL = 6;

    reg [4:0] amount;
    reg [2:0] state ;

    always @(posedge clk, negedge areset_n) begin
        if(!areset_n) begin
            state <= IDLE;
            amount <= 0;
        end
        else begin
            case(state) 
                IDLE: begin
                    amount <= 0;
                    if(select) begin
                        state <= PROD_SEL;
                    end
                    else begin
                        state <= IDLE;
                    end
                end 
                PROD_SEL: begin
                    case (product) 
                    2'b00: state <= BISCUIT;
                    2'b01: state <= JUICE;
                    2'b10: state <= CHOCOLATE;
                    default: state <= PROD_SEL;
                    endcase
                end
                BISCUIT: begin
                    amount <= amount + cash;
                    if(cancel) begin
                        state <= CANCEL;
                    end
                    else if((amount + cash)>=10) begin
                        state <= DISPENSE;
                    end
                    else begin
                        state <= BISCUIT;
                    end
                end
                JUICE: begin
                    amount <= amount + cash;
                    if(cancel) begin
                        state <= CANCEL;
                    end
                    else if((amount + cash)>=15) begin
                        state <= DISPENSE;
                    end
                    else begin
                        state <= JUICE;
                    end
                end
                CHOCOLATE: begin
                    amount <= amount + cash;
                    if(cancel) begin
                        state <= CANCEL;
                    end
                    else if((amount + cash)>=20) begin
                        state <= DISPENSE;
                    end
                    else begin
                        state <= CHOCOLATE;
                    end
                end
                DISPENSE: begin
                    state <= IDLE;
                end
                CANCEL: begin
                    state <= IDLE;
                end
            endcase
        end
    end

    always @(*) begin
        case (state)
            IDLE : begin
                dispense = 0;
                product_out = 0;
                change = 0;
                busy = 0;
                ready = 1;
                cancelled = 0;
            end
            PROD_SEL: begin
                busy = 1;
                ready = 0;
            end
            DISPENSE: begin
                dispense = 1;
                case (product)
                    2'b00: begin
                        product_out = 2'b00;
                        change = amount - 10;
                    end
                    2'b01: begin
                        product_out = 2'b01;
                        change = amount - 15;
                    end 
                    2'b10: begin
                        product_out = 2'b10;
                        change = amount - 20;
                    end
                endcase
            end
            CANCEL: begin
                dispense = 0;
                change = amount;
                cancelled = 1;
            end
        endcase
    end


endmodule