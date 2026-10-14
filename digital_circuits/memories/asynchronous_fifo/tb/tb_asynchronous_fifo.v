`timescale 1ns/1ps
module tb_asynchronous_fifo;

    reg wclk;
    reg rclk;
    reg wrst_n;
    reg rrst_n;
    reg winc;
    reg rinc;
    reg [7:0] wdata;
    wire [7:0] rdata;
    wire wfull;
    wire rempty;


    reg [7:0] t_mem [0:7];

    integer PASS = 0;
    integer FAIL = 0;
    integer i=0;

    asynchronous_fifo dut(
        .wclk(wclk),
        .rclk(rclk),
        .wrst_n(wrst_n),
        .rrst_n(rrst_n),
        .winc(winc),
        .rinc(rinc),
        .wdata(wdata),
        .rdata(rdata),
        .wfull(wfull),
        .rempty(rempty)
    );

    initial begin
        $dumpfile("waves/dump.vcd");
        $dumpvars(0,tb_asynchronous_fifo);
    end

    initial begin
        wclk = 0;
        forever #10 wclk = ~wclk;
    end

    initial begin
        rclk = 0;
        forever #5 rclk = ~rclk;
    end

    initial begin
        wrst_n = 0;
        rrst_n = 0;
        winc = 0;
        rinc = 0;
        wdata = 8'b0;        
    end

    task write;
        input [7:0] t_data;
        begin
            @(negedge wclk) begin
                winc = 1;
                if(wfull) begin
                    $display("ERROR | memory full | cannot write data = %h",t_data);
                    winc = 0;
                end
                else begin
                    wdata <= t_data;
                    @(posedge wclk) begin
                        if(winc) begin
                            #1;
                            $display("WRITE | data = %h",t_data);
                        end
                        else begin
                            $display("WRITE FAILED | data = %h",t_data);
                        end
                    end
                end
                winc = 0;
            end
            
        end
    endtask

    task read;
        input [7:0] exp;
        begin
            @(negedge rclk) begin
                rinc = 1;
                if(rempty) begin
                    $display("ERROR | memory empty");
                    rinc = 0;
                end
                else begin
                    @(posedge rclk) begin
                        #1;
                        if(!rinc) begin
                            $display("READ FAILED");
                        end
                        else begin
                            if(rdata === exp) begin
                                $display("PASS | rdata = %h | exp_data = %h",rdata , exp);
                                PASS = PASS + 1;
                            end
                            else begin
                                $display("FAIL | rdata = %h | exp_data = %h",rdata , exp);
                                FAIL = FAIL + 1;
                            end
                        end
                    end
                end
                rinc = 0;
                
            end

        end
    endtask

    initial begin
        #23;
        wrst_n = 1;
        rrst_n = 1;
        #7;
        read(8'hFF);
        read(8'hFF);
        #7;
        for(i=0;i<8;i=i+1) begin
            case (i)
                0: t_mem[i] = 8'hFF;
                1: t_mem[i] = 8'h00;
                2: t_mem[i] = 8'h0F;
                3: t_mem[i] = 8'hF0;
                4: t_mem[i] = 8'h81;
                5: t_mem[i] = 8'h7E;
                6: t_mem[i] = 8'h99;
                7: t_mem[i] = 8'hAA;
            endcase
            write(t_mem[i]);
        end
        
        write(8'h66);
        write(8'h66);
        write(8'h66);
        write(8'h66);
        write(8'h66);
        #17;

        for(i=0;i<8;i=i+1) begin
            read(t_mem[i]);
        end
        #17;
        read(8'h00);
        read(8'h00);
        read(8'h00);

        write(8'h12);
        #17;
        read(8'h12);
        read(8'h12);
        read(8'h12);

        $display("SUMMARY");
        $display("PASS = %d", PASS);
        $display("FAIL = %d", FAIL);

        #50;
        $finish;
    end

endmodule