module code23;

    reg [3:0] count=0;
    event update5;
    event update9;
    event update8;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code23);
    end

    initial begin
       
        for(integer i=0;i<=10;i=i+1) begin
            if(i==9) begin
                ->update9;
                count = count + 1;
            end
            else if (i==8) begin
                ->update8;
                count = count + 1;
            end
            else if (i==5) begin
                ->update5;
                count = count + 1;
            end
            else begin
                count = count + 1;
            end
            #1;
        end
        
    end

    initial begin
        forever @(update5) #4 $display("count == 5 reached");
    end

    always @(update9) begin
        $display("count == 9 reached");
    end
    always @(update8) begin
        $display("count == 8 reached");
    end


    initial begin
        // $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
         #20;
         $display(count);
    end
endmodule