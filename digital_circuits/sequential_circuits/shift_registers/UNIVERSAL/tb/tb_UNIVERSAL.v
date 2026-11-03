`timescale 1ns/1ps
module tb_UNIVERSAL;
    reg clk;
    reg en;
    reg areset_n;
    reg [3:0] in;
    reg [1:0] mode;
    wire [3:0] out;

    UNIVERSAL dut(
        .clk(clk),
        .en(en),
        .areset_n(areset_n),
        .in(in),
        .mode(mode),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_UNIVERSAL);
    end

    initial begin
        clk = 0;
        en  = 0;
        areset_n = 0;
        in = 4'b0000;
        mode = 2'b00;
        forever #5 clk = ~clk;
    end

    initial begin
        #6;
        en = 1;
        areset_n = 1;
        in = 4'b1100;
        mode = 2'b00;

        #20;
        mode = 2'b01;

        #20;
        mode = 2'b10;

        #80;
        mode = 2'b11;




        #100;
        $finish;

    end
endmodule