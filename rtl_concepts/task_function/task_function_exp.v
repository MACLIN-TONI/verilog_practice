module task_function_exp;

    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    reg [3:0] out;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,task_function_exp);
    end

    task task_and_check; //we shall declare multiple outputs.
        input [3:0] a;
        input [3:0] b;
        output [3:0] out;
        begin
           out = function_and_check(a,b); 
           $display("task  time = %0t    | a= %b | b= %b | out = %b",$time,a,b,out);
        end
    endtask

    task task_and3_check(
        input [3:0] a,
        input [3:0] b,
        input [3:0] c,
        output [3:0] out
    );
        begin
            reg [3:0] temp;
            task_and_check(a,b,temp);
            #2 out = temp & c;
            $display("task  time = %0t    | a= %b | b= %b | c=%b|  out = %b",$time,a,b,c,out);
        end
    endtask

    function [3:0] function_and_check;
        input [3:0] a;
        input [3:0] b;
        begin
           function_and_check = a & b; 
           $display("function  time = %0t    | a= %b | b= %b | out = %b",$time,a,b,function_and_check);
        end
    endfunction

    function reg [3:0] function_and3_check( 
        input [3:0] a,
        input [3:0] b,
        input [3:0] c
    );
        begin
            function_and3_check = function_and_check(a,b) & c;  // we cannot call task inside function.
            $display("function  time = %0t    | a= %b | b= %b | c=%b|  out = %b",$time,a,b,c,function_and3_check);
        end
    endfunction

    initial begin
        a=4'b1101;
        b=4'b1100;
        c=4'b1010;
        task_and3_check(a,b,c,out);

        #10;
        $finish;
    end


    
endmodule