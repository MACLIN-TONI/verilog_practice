`timescale 1ns/1ps
module tb_Traffic_Light_Controller;
    reg clk;
    reg areset_n;
    wire road_A_green;
    wire road_A_yellow;
    wire road_A_red;
    wire road_B_green;
    wire road_B_yellow;
    wire road_B_red;

    Traffic_Light_Controller dut(
        .clk(clk),
        .areset_n(areset_n),
        .road_A_green(road_A_green),
        .road_A_yellow(road_A_yellow),
        .road_A_red(road_A_red),
        .road_B_green(road_B_green),
        .road_B_yellow(road_B_yellow),
        .road_B_red(road_B_red)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Traffic_Light_Controller);
    end

    initial begin
        clk = 0;
        areset_n = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        #2;
        areset_n = 1;
        $display("Road A   |  Road B");
        repeat (100) begin
            @(posedge clk) #1;
            $display("---------------------------");
            $display("green  = %b | green  = %b", road_A_green, road_B_green);
            $display("yellow = %b | yellow = %b", road_A_yellow, road_B_yellow);
            $display("red    = %b | red    = %b", road_A_red, road_B_red);
        end

        #200;
        $finish;

    end

endmodule