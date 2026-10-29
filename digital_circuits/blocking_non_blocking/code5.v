module code5;
    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code5);
    end
    initial begin
        
        a <= 5;
        b <= 10;
        c <= 15;
        $display($time," ",a," ",b," ",c);
        $monitor($time," ",a," ",b," ",c);
        
        $finish;
        
    end
endmodule