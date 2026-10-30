module task_exp;

    reg [3:0] a;
    reg [3:0] b;
    reg [3:0] c;
    reg [3:0] out;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,task_exp);
    end

    task and_check; //we shall declare multiple outputs.
        input [3:0] a;
        input [3:0] b;
        output [3:0] out;
        begin
           #5 out = a & b; 
           $display("time = %0t    | a= %b | b= %b | out = %b",$time,a,b,out);
        end
    endtask

    task and3_check(
        input [3:0] a,
        input [3:0] b,
        input [3:0] c,
        output [3:0] out
    );
        begin
            reg [3:0] temp;
            and_check(a,b,temp);
            #2 out = temp & c;
            $display("time = %0t    | a= %b | b= %b | c=%b|  out = %b",$time,a,b,c,out);
        end
    endtask

    initial begin
        a=4'b1101;
        b=4'b1100;
        c=4'b1010;
        and3_check(a,b,c,out);

        #10;
        $finish;
    end


    
endmodule