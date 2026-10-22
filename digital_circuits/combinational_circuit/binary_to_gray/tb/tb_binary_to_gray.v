`timescale 1ns/1ps
module tb_binary_to_gray;
    parameter BITS = 4;
    reg [BITS-1:0] in;
    wire [BITS-1:0] out;

    integer PASS = 0;
    integer FAIL = 0;

    binary_to_gray #(.BITS(BITS)) dut (
        .in(in),
        .out(out)
    );


    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_binary_to_gray);
    end
    
    task check;
        input [BITS-1:0] t_in;
        input [BITS-1:0] exp;
        begin
            in = t_in;
            #1;
            if(out === exp) begin
                $display("PASS | binary = %b | gray = %b | exp = %b",t_in,out,exp);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | binary = %b | gray = %b | exp = %b",t_in,out,exp);
                FAIL = FAIL + 1;
            end
            
        end

    endtask

    initial begin
        check(4'b1111, 4'b1000);
        #20;
        check(4'b0000, 4'b0000);
        #20;
        check(4'b1010, 4'b1111);
        #20;
        check(4'b1100, 4'b1010);
        #20;
        check(4'b0011, 4'b0010);
        #20;
        check(4'b1001, 4'b1101);
        #20;
        check(4'b0110, 4'b0101);
        #20;

        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);

        #10;
        $finish;
    end
endmodule