`timescale 1ns/1ps
module tb_BCD_Adder;
    reg [3:0] a;
    reg [3:0] b;
    wire [3:0] sum;
    wire carry_out;

    integer PASS = 0;
    integer FAIL = 0;
    integer total = 0;

    reg [4:0] exp_out;

    BCD_Adder dut (
        .a(a),
        .b(b),
        .sum(sum),
        .carry_out(carry_out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_BCD_Adder);
    end
    
    task check;
        input [3:0] t_a,t_b;
        input [4:0] exp;
        input integer deci_sum;
        begin
            a = t_a ;
            b = t_b ;
            #1;
            if(exp === {carry_out,sum}) begin
                $display("PASS | a = %d | b = %d | out = %b (%0d) | exp = %b (%0d)",a,b,{carry_out,sum},deci_sum ,exp, deci_sum);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | a = %d | b = %d | out = %b (%0d) | exp = %b (%0d)",a,b,{carry_out,sum}, deci_sum,exp, deci_sum);
                FAIL = FAIL + 1;
            end
        end
    endtask

    initial begin
        for(integer i=0; i<10; i=i+1) begin
            for(integer j=0; j<10; j=j+1) begin

                total = i+j;
                exp_out[4] = (total>=10);
                exp_out[3:0] = total % 10;

                check(i,j,{exp_out}, (i+j));
                #10;
            end
        end

        $display("SUMMARY");
        $display("PASS = %d",PASS);
        $display("FAIL = %d",FAIL);

    end

endmodule