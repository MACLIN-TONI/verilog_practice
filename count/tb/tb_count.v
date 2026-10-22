`timescale 1ns/1ps
module tb_count;
    reg clk;
    reg areset_n;
    wire [2:0] out;

    count dut(
        .clk(clk),
        .areset_n(areset_n),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_count);
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

        #250;
        $finish;
    end
endmodule