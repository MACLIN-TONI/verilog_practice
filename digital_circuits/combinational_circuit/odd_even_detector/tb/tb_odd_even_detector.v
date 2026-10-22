`timescale 1ns/1ps
module tb_odd_even_detector;
    parameter BITS = 4;
    reg [BITS-1:0] in;
    wire odd;
    wire even;

    integer PASS = 0;
    integer FAIL = 0;

    odd_even_detector #(.BITS(BITS)) dut (
        .in(in),
        .odd(odd),
        .even(even)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_odd_even_detector);
    end

    task check;
        input [BITS-1:0] t_in;
        input exp_odd;
        input exp_even;
        begin
            in = t_in;
            #1;
            if(odd === exp_odd && even === exp_even) begin
                $display("PASS | in = %b (%d) | odd = %b | even = %b",in,in,odd,even);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | in = %b (%d) | odd = %b | even = %b",in,in,odd,even);
                FAIL = FAIL + 1;
            end
        end
    endtask

    initial begin
        check(2,0,1);
        #20;
        check(9,1,0);
        #20;
        check(8,0,1);
        #20;
        check(15,1,0);
        #20;
        check(5,1,0);
        #20;
        check(10,0,1);
        #20;
        check(12,0,1);
        #20;
        check(13,1,0);
        #20;

        $display("SUMMARY");
        $display("PASS = %d",PASS);
        $display("FAIL = %d",FAIL);

        $finish;
    end

    
endmodule