module code24;

    reg [3:0] count=0;
    event update5;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0,code24);
    end

    initial begin
       
        for(integer i=0;i<=10;i=i+1) begin
            
            if (i==5) begin
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
        //@(update5) wait(3==0) $display("time = %0t |   count == 5",$time);
        @(update5) wait(1) $display("time = %0t |   count == 5",$time);
        //wait(count==7) $display("time = %0t |   count == 7",$time);
    end

    initial begin
        wait(count==7) $display("time = %0t |   count == 7",$time);
    end

    initial begin
        @(count==3) $display("time = %0t |   count ==3",$time);
        @(count==2) $display("time = %0t |   count ==3",$time);
    end

    

    initial begin
        // $display("time = %0t | x=%d | y=%d | z=%d",$time,x,y,z);
         #20;
         $display(count);
    end
endmodule