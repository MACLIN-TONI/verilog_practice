module tb_practice;
    reg clk;
    wire out;

    practice dut (
        .clk(clk),
        .out(out)
    );

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,tb_practice);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        
        #100;
        $finish;
    end

    

endmodule