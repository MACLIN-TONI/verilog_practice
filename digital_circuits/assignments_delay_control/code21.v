module code21;
    reg [3:0] x=0;
    reg [3:0] y=0;
    reg [3:0] z=0;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code21);
    end

    initial begin
        z=15;
        z=10;
        
        
    end


    always @(*) begin
        x<=y;
    end

    always @(*) begin
        x <=z;
    end

    // initial begin
    //     #10;
    //     y<=10;
    //     y<=12;
    // end
   
    

    

    initial begin
        $monitor($time,"   ",x," ",y," ",z);
    end
endmodule