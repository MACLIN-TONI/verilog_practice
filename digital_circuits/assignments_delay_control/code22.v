module code22;
    reg [3:0] x=0;
    reg [3:0] y=0;
    reg [3:0] z=0;
    event xupdate;
    event yupdate;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code22);
    end

    
    initial begin
        y<=15;
        x<=10;
        
    end

    always @(*) begin
        if(x) begin
            ->xupdate;
        end
    end

    always @(*) begin
        if(y) begin
            ->yupdate;
        end
    end

    always @(xupdate) begin
        $display("x updated");
    end

    always @(yupdate) begin
        $display("y updated");
    end
   

    initial begin
        $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
        #1;
        $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
    end
endmodule