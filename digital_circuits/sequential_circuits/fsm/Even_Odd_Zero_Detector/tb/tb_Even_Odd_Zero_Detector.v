`timescale 1ns/1ps
module tb_Even_Odd_Zero_Detector;
    reg clk;
    reg areset_n;
    reg din;
    wire zero;
    wire odd;
    wire even;

    Even_Odd_Zero_Detector dut (
        .clk(clk),
        .areset_n(areset_n),
        .din(din),
        .zero(zero),
        .odd(odd),
        .even(even)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Even_Odd_Zero_Detector);
    end

    initial begin
        clk = 0;
        areset_n = 0;
        din = 0;
        forever #5 clk = ~clk;
    end

    task check;
        input t_din;
        begin
            @(negedge clk);
            din = t_din;
            @(posedge clk);
            #1;
            $display("din = %b || zero = %b  | odd = %b | even = %b",din,zero,odd,even);
        end
    endtask

    initial begin
        #7;
        areset_n = 1;
        #6;
        repeat(3) check(0);
        repeat(4) check(1);
        repeat(3) check(0);
        #1 areset_n = 0;
        #1 areset_n = 1;
        repeat(3) check(0);
        repeat(4) check(1);
        repeat(3) check(0);
        #100;
        $finish;
    end

endmodule