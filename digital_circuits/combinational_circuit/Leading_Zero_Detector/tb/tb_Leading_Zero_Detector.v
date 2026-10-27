`timescale 1ns/1ps
module tb_Leading_Zero_Detector;
    reg [7:0] in;
    wire [4:0] out;

    integer PASS = 0;
    integer FAIL = 0;

    Leading_Zero_Detector dut(
        .in(in),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Leading_Zero_Detector);
    end

    task check;
        input [7:0] t_in;
        reg [4:0] count;
        reg found;
        begin
            in = t_in;
            count = 0;
            found = 0;
            for(integer i = 7;i>=0;i=i-1) begin
                if(!found) begin
                    if(t_in[i] == 0) begin
                        count = count + 1;
                    end
                    else begin
                        found = 1;
                    end
                end
            end
            #1;
            if(count == out) begin
                $display("PASS | in = %b | out = %b | exp = %b",in,out,count);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | in = %b | out = %b | exp = %b",in,out,count);
                FAIL = FAIL + 1;
            end
        end
        #10;
    endtask

    initial begin
        check(8'b01111111);
        check(8'b00111111);
        check(8'b00011111);
        check(8'b00001111);
        check(8'b00000111);
        check(8'b00000011);
        check(8'b00000001);
        check(8'b00000000);
        check(8'b11111111);
        check(8'b10101010);
        check(8'b11000000);

        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);

        #200;
        $finish;
    end
endmodule