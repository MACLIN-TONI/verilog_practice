module code16;
    reg clk1;
    reg clk2;
    reg clk3;
    reg clk4;
    reg clk5;

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code16);
    end

    initial begin
        clk1 = 0;
        clk2 = 0;
        clk3 = 0;
        clk4 = 0;
        clk5 = 0;
    end

    initial begin
        forever #5 clk1 = ~clk1;
    end

    always #5 clk2 = ~clk2;

    initial begin
        while(1) begin
            #5 clk3= ~clk3;
        end
    end

    initial begin
        for(integer i=0;i==0;i=0) begin
            #5 clk4 = ~clk4;
        end
    end

    initial begin
        while(clk5 == 0 || clk5==1) begin
            #5 clk5 = ~clk5;
        end
    end

    initial begin
        #100;
        $finish;
    end

endmodule