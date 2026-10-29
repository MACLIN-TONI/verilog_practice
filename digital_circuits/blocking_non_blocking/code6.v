module code6;
    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code6);
    end
    initial begin
        a = 4;
        b = 5;
        c = 6;
        $display($time," ",a," ",b," ",c);
        #1;
        #0 a = 5;
        #0 b = 10;
        #0 c = 14;
        $display($time," ",a," ",b," ",c);

        a = 1;
        b = 2;
        c = 3;
        $display($time," ",a," ",b," ",c);
        
        
        $finish;
        
    end
endmodule