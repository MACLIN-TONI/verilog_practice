module code15;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code15);
    end
    // initial begin
    //     a=0;
    // end
    always @(*) begin
        b <=10;
        c <=15;
        #1;
        $display($time," ",a," ",b," ",c);
        
    end
    // always @(*) begin
        
    // end
    initial begin
        #100;
        $display($time," ",a," ",b," ",c);
    end
    initial begin
        a=0;
    end
endmodule