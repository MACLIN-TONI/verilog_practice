module code13;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code13);
    end
    
    // always @(*) begin
        
    // end
    initial begin
        a <=10; #2
        b <=3; #5
        c <=8; #7
        $display($time," ",a," ",b," ",c);
        #1;
        $display($time," ",a," ",b," ",c);

        a <= #2 13; 
        b <= #5 2; 
        c <= #7 11; 
        $display($time," ",a," ",b," ",c);
        #8;
        $display($time," ",a," ",b," ",c);

    end
endmodule