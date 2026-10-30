module code4;
    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code4);
    end
    initial begin
        $monitor($time," ",a," ",b," ",c);
        a <= #5 5;
        b <= #7 10;
        c <= #2 15;
        #8;
        // a <= #5 1;
        // b <= #7 2;
        // c <= #2 3;
        // #8;
        
        $finish;
        
    end
endmodule