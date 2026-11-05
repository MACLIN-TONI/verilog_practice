`timescale 1ns/1ps
module tb_Vending_Machine;
    reg clk;
    reg areset_n;
    reg select;
    reg [1:0] product;
    reg [4:0] cash;
    reg cancel;

    wire dispense;
    wire [1:0] product_out;
    wire [4:0] change;
    wire busy;
    wire ready;
    wire cancelled;

    Vending_Machine dut (
        .clk(clk),
        .areset_n(areset_n),
        .select(select),
        .product(product),
        .cash(cash),
        .cancel(cancel),
        .dispense(dispense),
        .product_out(product_out),
        .change(change),
        .busy(busy),
        .ready(ready),
        .cancelled(cancelled)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0, tb_Vending_Machine);
    end

    initial begin
        clk = 0;
        areset_n = 0;
        select = 0;
        product = 0;
        cash = 0;
        cancel = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        #1 areset_n = 1;
        @(negedge clk) begin
            select = 1;
            product = 2'b01;
            cash = 20;
        end 
        #50;
        areset_n = 0;
        #1 areset_n = 1;
        @(negedge clk) begin
            select = 1;
            product = 2'b10;
            cash = 30;
            #15 ; cancel = 1;

        end


        #200;
        $finish;
    end

endmodule 