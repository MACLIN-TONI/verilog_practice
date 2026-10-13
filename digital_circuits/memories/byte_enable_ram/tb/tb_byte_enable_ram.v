`timescale 1ns/1ps
module tb_byte_enable_ram;
    parameter WIDTH = 32;
    parameter DEPTH = 16;
    reg clk;
    reg we;
    reg [$clog2(DEPTH)-1:0] addr;
    reg [(WIDTH/8)-1:0] byte_en;
    reg [WIDTH-1:0] din;
    wire [WIDTH-1:0] dout;

    reg [WIDTH-1:0] t_mem [0:DEPTH-1];
    reg [WIDTH-1:0] exp_dout;
    reg [WIDTH-1:0] pattern;

    integer PASS = 0;
    integer FAIL = 0;
    integer i;
    integer j;

    byte_enable_ram #(
        .WIDTH(WIDTH),
        .DEPTH(DEPTH)
    ) dut (
        .clk(clk),
        .we(we),
        .addr(addr),
        .byte_en(byte_en),
        .din(din),
        .dout(dout)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_byte_enable_ram);
    end

    initial begin
        clk = 0;
        we = 0;
        addr = 4'b0;
        byte_en = 4'b0;
        din = 32'b0;
        exp_dout = 32'bx;
        forever #5 clk = ~clk;
    end

    task read;
        input [$clog2(DEPTH)-1:0] t_addr;
        begin
            @(negedge clk) addr <= t_addr;
            @(posedge clk) exp_dout <= (!we)?t_mem[addr] : exp_dout;
            #1;
            if(exp_dout === dout) begin
                $display("PASS | addr = %d | dout = %h | exp_dout = %h", addr, dout, exp_dout);
                PASS = PASS + 1;
            end
            else begin
                $display("FAIL | addr = %d | dout = %h | exp_dout = %h", addr, dout, exp_dout);
                FAIL = FAIL + 1;
            end
        end
    endtask

    task write;
        input [$clog2(DEPTH)-1:0] t_addr;
        input [WIDTH-1:0] t_din;
        input [(WIDTH/8)-1:0] t_byte_en;
        begin
            @(negedge clk) begin
                addr <= t_addr;
                din <= t_din;
                byte_en <= t_byte_en;
            end
            @(posedge clk) begin
                if(we) begin
                    for(j=0;j<WIDTH/8; j=j+1) begin
                    t_mem[t_addr][j*8 +: 8] <= (t_byte_en[j])?t_din[j*8 +: 8]:t_mem[t_addr][j*8 +: 8];
                    end
                end
            end

        end
    endtask

    initial begin
        #7;
        we = 1;

        for(i=0;i<DEPTH;i=i+1) begin
            case (i)
                0: pattern = 32'hFFFFFFFF;
                1: pattern = 32'h00FFFF00;
                2: pattern = 32'hFF0000FF;
                3: pattern = 32'hF000000F;
                4: pattern = 32'h0FFFFFF0;
                5: pattern = 32'h11111111;
                6: pattern = 32'h00000001;
                7: pattern = 32'h99999999;
                8: pattern = 32'h77777777;
                9: pattern = 32'h12345678;
                default: pattern = 32'h22002200 + i;

            endcase
            write(i,pattern,4'b1111);
        end

        #8;
        we = 0;
        for(i=0; i<DEPTH; i=i+1) begin
            #5;
            read(i);
        end

        #8;
        we =1;

        write(0,32'h0,4'b0001);
        write(5,32'hFFFFFFFF,4'b0010);
        write(7,32'hFFFFFFFF,4'b0100);
        write(8,32'hFFFFFFFF,4'b1000);
        write(9,32'hFFFFFFFF,4'b1001);

        #10;
        we = 0;
        read(0);
        read(5);
        read(7);
        read(8);
        read(9);

        #12;

        we = 0;
        write(9,32'hFFFFFFFF,4'b1111);
        #7;
        we = 0;
        read(9);
        #7;
        we = 1;
        read(1);
        #20;


        $display("SUMMARY");
        $display("PASS = %d",PASS);
        $display("FAIL = %d",FAIL);
        $finish;

    end

endmodule