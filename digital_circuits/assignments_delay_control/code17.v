module code17;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code17);
    end
    
    initial begin
        $monitor($time," ",a," ",b," ",c);
    end

    initial begin
         a <= 10;
         a <= 12;
    end

    initial begin
        a = #5 b;
    end
endmodule