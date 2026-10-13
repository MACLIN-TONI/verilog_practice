`timescale 1ns/1ps
module tb_synchronous_fifo;
    parameter WIDTH = 8;
    parameter DEPTH = 8;
    reg clk;
    reg rst;
    reg wr_en;
    reg rd_en;
    reg [WIDTH-1:0] din;
    wire [WIDTH-1:0] dout;
    wire full;
    wire empty;

    reg [WIDTH-1:0] exp_dout;

    synchronous_fifo #(
        .WIDTH(WIDTH),
        .DEPTH(DEPTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .din(din),
        .dout(dout),
        .full(full),
        .empty(empty)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_synchronous_fifo);
    end

    integer PASS = 0;
    integer FAIL = 0;

    initial begin
        clk = 0;
        rst = 0;
        wr_en = 0;
        rd_en = 0;
        din = 8'b0;
        exp_dout = 8'b0;
        forever #5 clk = ~clk;
    end

    task check;
        input t_wr_en;
        input t_rd_en;
        input [WIDTH-1:0] t_din;
        input [WIDTH-1:0] t_dout;
        begin
            @(negedge clk) begin
                wr_en <= t_wr_en;
                rd_en <= t_rd_en;
                din <= t_din;
                
            end
            @(posedge clk) begin
                if(t_rd_en) exp_dout <= t_dout;
                #1;
                if(exp_dout === dout) begin
                    $display("PASS | dout = %h | exp_dout = %h | full = %b | empty = %b", dout,exp_dout,full,empty);
                    PASS = PASS + 1;
                end
                else begin
                    $display("FAIL | dout = %h | exp_dout = %h | full = %b | empty = %b", dout,exp_dout,full,empty);
                    FAIL = FAIL + 1;
                end
            end

        end
    endtask

    initial begin
        #2; rst = 1;
        #10; rst = 0;
        #7;
        check(0,1,8'hFF,8'h00);
        check(0,1,8'hFF,8'h00);
        check(1,0,8'hFF,8'h00);
        check(1,0,8'h00,8'h00);
        check(1,0,8'h0F,8'h00);
        check(1,0,8'hF0,8'h00);
        check(1,0,8'h81,8'h00);
        check(1,0,8'h7E,8'h00);
        check(1,0,8'h99,8'h00);
        check(1,0,8'h66,8'h00);

        check(0,1,8'h66,8'hFF);
        check(0,1,8'h66,8'h00);

        check(1,0,8'h66,8'hFF);
        check(1,0,8'h66,8'h00);

        check(0,0,8'h66,8'h00);
        check(0,0,8'h66,8'h00);

        check(0,1,8'h0F,8'h0F);
        check(0,1,8'hF0,8'hF0);
        check(0,1,8'h81,8'h81);
        check(0,1,8'h7E,8'h7E);
        check(0,1,8'h99,8'h99);
        check(0,1,8'h66,8'h66);
        check(0,1,8'h66,8'h66);
        check(0,1,8'h66,8'h66);

        check(1,1,8'hFF,8'h66);
        check(1,1,8'h22,8'hFF);
        check(0,1,8'h22,8'h22);

        #10;
        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);
        
        #20;
        $finish;

    end



endmodule