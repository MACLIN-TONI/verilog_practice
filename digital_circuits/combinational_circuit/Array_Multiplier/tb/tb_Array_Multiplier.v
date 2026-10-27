`timescale 1ns/1ps
module tb_Array_Multiplier;
    reg [3:0] a;
    reg [3:0] b;
    wire [7:0] out;

    integer PASS = 0;
    integer FAIL = 0;

    Array_Multiplier dut(
        .a(a),
        .b(b),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Array_Multiplier);
    end

    task check;
        input [3:0] t_a;
        input [3:0] t_b;
        reg [7:0] exp;
        begin
            a=t_a;
            b=t_b;
            exp= (a*b);
            #1;
            if(out === exp) begin
                $display("PASS | a = %b | b = %b | out = %b | exp = %b",a,b,out,exp);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | a = %b | b = %b | out = %b | exp = %b",a,b,out,exp);
                FAIL = FAIL + 1;
            end
        end
        #10;
    endtask

    initial begin
        for(integer i=0;i<=15;i=i+1) begin
            for(integer j=0;j<=15;j=j+1) begin
                check(i,j);
            end
        end
        
        $display("SUMMARY");
        $display("PASS = %d",PASS);
        $display("FAIL = %d",FAIL);
        #10;
        $finish;
    end

endmodule