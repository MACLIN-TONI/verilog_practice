module code12;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code12);
    end
    
    // always @(*) begin
        
    // end
    initial begin
        #2 a<=10;
        #5 b<=3;
        #7 c<=8;
        $display($time," ",a," ",b," ",c);
        #1;
        $display($time," ",a," ",b," ",c);

    end
endmodule