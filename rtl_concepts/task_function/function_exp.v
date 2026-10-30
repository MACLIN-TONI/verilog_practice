module function_exp;

    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    reg [3:0] out;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,function_exp);
    end

    function [3:0] and_check; //we can not have multiple outputs. output name = function name
        input [3:0] a;
        input [3:0] b;
        begin
           and_check = a & b; 
           $display("time = %0t    | a= %b | b= %b | out = %b",$time,a,b,and_check);
        end
    endfunction

    function reg [3:0] and3_check( //cannot be declared wire
        input [3:0] a,
        input [3:0] b,
        input [3:0] c
    );
        begin
            and3_check = and_check(a,b) & c;
            $display("time = %0t    | a= %b | b= %b | c=%b|  out = %b",$time,a,b,c,and3_check);
        end
    endfunction

    initial begin
        a=4'b1101;
        b=4'b1100;
        c=4'b1010;
        and3_check(a,b,c);

        #10;
        $finish;
    end


    
endmodule