module code19;
    reg x;
    reg y=1;
    reg count;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code19);
    end

    always @(*) begin
        x <= 1;
    end
    // always @(*) begin
    //     x = 1;
    // end

    always @(*) begin
        y=0;
    end

    always @(*) begin
        x = 0;
    
        
    end
    always @(*) begin
        x = 1;
        count =1;

    
        
    end
    // initial begin
        
    // end
    initial begin
        
        $display($time," ",x," ",y," ",count);
    end

endmodule