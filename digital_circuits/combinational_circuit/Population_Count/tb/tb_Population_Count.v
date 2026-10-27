`timescale 1ns/1ps
module tb_Population_Count;
    reg [7:0] in;
    wire [3:0] out;

    integer PASS = 0;
    integer FAIL = 0;

    Population_Count #(
        .WIDTH(8)
    ) dut (
        .in(in),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Population_Count);
    end

    task check;
        input [7:0] t_in;
        reg [3:0] t_count;
        begin
            in = t_in;
            t_count = 0;
            for (integer i = 0; i<=7 ; i=i+1) begin
                if(in[i]==1) begin
                    t_count = t_count + 1;
                end
            end
            #1; 
            if(t_count === out ) begin
                $display("PASS | in = %b | out = %b | exp = %b", in,out,t_count);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | in = %b | out = %b | exp = %b", in,out,t_count);
                FAIL = FAIL + 1;
            end
        end
        #10;
    endtask

    initial begin
        reg [1:0] a=00;
        reg [1:0] b=01;
        reg [1:0] c=10;
        reg [1:0] d=11;
        reg [1:0] v1=0;
        reg [1:0] v2=0;
        for(integer i = 0;i<4;i=i+1) begin
            case (i)
                0:v1=a;
                1:v1=b;
                2:v1=c;
                3:v1=d;
            endcase
            for(integer j=0;j<4;j=j+1) begin
                case (j)
                    0:v2=a;
                    1:v2=b;
                    2:v2=c;
                    3:v2=d;
                endcase
                check({v1,v2,v1,v2});
            end
        end
        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);

        #120;
        $finish;
    end
    
    
endmodule