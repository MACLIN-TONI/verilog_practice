module code7;
    reg [3:0] a;
    reg [3:0] b = 5;
    reg [3:0] c = 6;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code7);
    end
    initial begin
        c=1;

    end
    always @(*) begin
        a = b;
    end
    always @(*) begin
        a = c;
    end
    initial begin
        $monitor($time," ",a," ",b," ",c);
    end
endmodule