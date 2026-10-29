module code11;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code11);
    end
    
    // always @(*) begin
        
    // end
    initial begin
        b<=c;
        c<=b;
        #10;
        $display($time," ",a," ",b," ",c);
    end
endmodule