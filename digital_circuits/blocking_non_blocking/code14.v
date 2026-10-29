module code14;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code14);
    end
    
    // always @(*) begin
        
    // end
    initial begin
        $monitor($time," ",a," ",b," ",c);
        a <= #2 13; 
        b <= 2; #5; 
        c <= #7 11; 
        

    end
endmodule