`timescale 1ns/1ps
module tb_Barrel_Shifter;
    parameter WIDTH = 8;
    reg [WIDTH-1:0] in;
    reg [$clog2(WIDTH)-1:0] sel;
    wire [WIDTH-1:0] out;

    reg [WIDTH-1:0] pattern;

    integer PASS = 0;
    integer FAIL = 0;

    Barrel_Shifter #(
        .WIDTH(WIDTH)
    ) dut (
        .in(in),
        .sel(sel),
        .out(out)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_Barrel_Shifter);
    end

    task check;
        input [WIDTH-1:0] t_in;
        input [$clog2(WIDTH)-1:0] t_sel;
        input [WIDTH-1:0] exp;
        begin
            in = t_in;
            sel = t_sel;
            #1;
            if(exp===out) begin
                $display("PASS | in = %b | sel = %b | out = %b | exp = %b",in,sel,out,exp);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | in = %b | sel = %b | out = %b | exp = %b",in,sel,out,exp);
                FAIL = FAIL + 1;
            end
        end
    endtask
    initial begin
        
        for(integer i=0;i<8;i=i+1) begin
            case (i) 
                0: pattern = 8'b11110000;
                1: pattern = 8'b00001111;
                2: pattern = 8'b10101010;
                3: pattern = 8'b00110011;
                4: pattern = 8'b11001010;
                default: pattern = 8'b00111100 + 2;
            endcase
            for(integer j =0; j<8; j=j+1) begin
                check(pattern,j,((pattern << j) | (pattern >> (WIDTH - j))));
                #10;
            end
        end

        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);

        #150;
        $finish;
    end

endmodule