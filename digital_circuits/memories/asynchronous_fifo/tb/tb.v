
`timescale 1ns/1ps

module tb_asynchronous_fifo;

    // DUT inputs
    reg wclk;
    reg rclk;
    reg wrst_n;
    reg rrst_n;
    reg winc;
    reg rinc;
    reg [7:0] wdata;

    // DUT outputs
    wire [7:0] rdata;
    wire wfull;
    wire rempty;

    integer i;
    integer errors;

    // Expected FIFO data
    reg [7:0] expected [0:7];

    // DUT instantiation
    asynchronous_fifo dut (
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

    // Write clock: 10 ns period
    initial begin
        wclk = 0;
        forever #5 wclk = ~wclk;
    end

    // Read clock: 14 ns period
    initial begin
        rclk = 0;
        forever #2 rclk = ~rclk;
    end

    // Write task
    task write_data;
        input [7:0] data;
        begin
            @(negedge wclk);

            if (wfull) begin
                $display("ERROR: FIFO full. Cannot write %h at %0t",
                         data, $time);
                errors = errors + 1;
            end
            else begin
                wdata = data;
                winc  = 1'b1;

                @(posedge wclk);
                #1;
                winc = 1'b0;

                $display("WRITE: data = %h, time = %0t",
                         data, $time);
            end
        end
    endtask

    // Read task
    task read_data;
        input [7:0] expected_data;
        begin
            // Allow synchronized write pointer to reach read domain
            wait (!rempty);

            @(negedge rclk);

            if (rempty) begin
                $display("ERROR: FIFO empty at %0t", $time);
                errors = errors + 1;
            end
            else begin
                rinc = 1'b1;

                // Registered read data is captured on this edge
                @(posedge rclk);
                #1;

                if (rdata !== expected_data) begin
                    $display(
                        "FAIL: Expected %h, Got %h at %0t",
                        expected_data, rdata, $time
                    );
                    errors = errors + 1;
                end
                else begin
                    $display(
                        "PASS: Expected %h, Got %h at %0t",
                        expected_data, rdata, $time
                    );
                end

                rinc = 1'b0;
            end
        end
    endtask

    // Main stimulus
    initial begin
        wrst_n = 0;
        rrst_n = 0;
        winc   = 0;
        rinc   = 0;
        wdata  = 0;
        errors = 0;

        

        $display("\n--- ASYNCHRONOUS FIFO TEST START ---");

        // Reset
        repeat (3) @(negedge wclk);
        wrst_n = 1;

        repeat (3) @(negedge rclk);
        rrst_n = 1;

        // Allow reset and pointer synchronization to settle
        repeat (3) @(negedge wclk);
        repeat (3) @(negedge rclk);

        if (rempty !== 1'b1) begin
            $display("FAIL: FIFO should be empty after reset");
            errors = errors + 1;
        end
        else begin
            $display("PASS: FIFO empty after reset");
        end

        // Test 1: Write all 8 entries
        $display("\n--- TEST 1: WRITE 8 DATA WORDS ---");

        for (i = 0; i < 8; i = i + 1) begin
            expected[i] = 8'hA0 + i;
            write_data(expected[i]);
        end

        // Allow full flag to update
        repeat (2) @(negedge wclk);

        if (wfull !== 1'b1) begin
            $display("FAIL: FIFO should be full after 8 writes");
            errors = errors + 1;
        end
        else begin
            $display("PASS: FIFO full after 8 writes");
        end

        // Test 2: Read all 8 entries in FIFO order
        $display("\n--- TEST 2: READ 8 DATA WORDS ---");

        for (i = 0; i < 8; i = i + 1) begin
            read_data(expected[i]);
        end

        // Allow synchronized read pointer to reach write domain
        repeat (5) @(negedge wclk);

        if (rempty !== 1'b1) begin
            $display("FAIL: FIFO should be empty after 8 reads");
            errors = errors + 1;
        end
        else begin
            $display("PASS: FIFO empty after 8 reads");
        end

        // Test 3: Write and read again to test pointer wraparound
        $display("\n--- TEST 3: POINTER WRAPAROUND ---");

        for (i = 0; i < 4; i = i + 1) begin
            expected[i] = 8'h50 + i;
            write_data(expected[i]);
        end

        for (i = 0; i < 4; i = i + 1) begin
            read_data(expected[i]);
        end

        // Final result
        $display("\n--- TEST SUMMARY ---");

        if (errors == 0)
            $display("ALL TESTS PASSED");
        else
            $display("TESTS FAILED: %0d error(s)", errors);

        $finish;
    end

    // Simulation timeout
    initial begin
        #5000;
        $display("ERROR: Simulation timeout");
        $finish;
    end

endmodule
