`timescale 1ns/1ps
module tb_Booth_Multiplier;
    reg signed [3:0] a;
    reg signed [3:0] b;
    wire signed [7:0] out;

    integer PASS = 0;
    integer FAIL = 0;

    Booth_Multiplier dut(
        .multiplicand(a),
        .multiplier(b),
        .product(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Booth_Multiplier);
    end

    task check;
        input signed[3:0] t_a;
        input signed [3:0] t_b;
        reg signed [7:0] exp;
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
        for(integer i=-7;i<=7;i=i+1) begin
            for(integer j=-7;j<=7;j=j+1) begin
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