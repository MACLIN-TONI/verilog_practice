`timescale 1ns/1ps
module tb_practice;
    reg clk;
    reg areset_n;
    wire [2:0] out;

    practice dut(
        .clk(clk),
        .areset_n(areset_n),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_practice);
    end
    initial begin
        clk = 0;
        areset_n = 0;
        forever #10 clk = ~clk;
    end

    initial begin
        $monitor("out = %d",out);
        #12;
        areset_n = 1;

        #150;
        $finish;
    end
endmodule