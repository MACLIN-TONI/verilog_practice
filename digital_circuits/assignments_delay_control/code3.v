module code3;
    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code3);
    end

    initial begin
        
        a<=5;
        b<=10;
        c<=15;
        $display(a," ",b," ",c);
        $display(a," ",b," ",c);
        $finish;
    end
endmodule