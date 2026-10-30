module code18;
    reg [3:0] a=1;
    reg [3:0] b = 5;
    reg [3:0] c =10;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code18);
    end


    initial begin
        a=11;
        #10;
        a=8;
    
     
    end
    always @(*) begin
        b =a;
        
    end
    // always @(*) begin
        
    // end
    initial begin
        #1;
        $monitor($time," ",a," ",b," ",c);
    end

endmodule