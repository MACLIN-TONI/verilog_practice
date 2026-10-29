module code2;
    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    initial begin
        a<=5;
        b<=10;
        c<=15;
        $display(a," ",b," ",c);
        $display(a," ",b," ",c);
        #1;
        $display(a," ",b," ",c);
    end
endmodule