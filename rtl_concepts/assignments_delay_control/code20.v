module code20;
    reg [3:0] x=0;
    reg [3:0] y=0;
    reg [3:0] z=0;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code20);
    end

    
    initial begin
        x<=10;
        y<=15;
    end

    always @(*) begin
        z <=x;
    end

    always @(*) begin
        z <=y;
    end
   

    initial begin
        $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
        #1;
        $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
    end
endmodule