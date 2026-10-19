module asynchronous_fifo (
    input wclk,
    input rclk,
    input wrst_n,
    input rrst_n,
    input winc,
    input rinc,
    input [7:0] wdata,
    output reg [7:0] rdata,
    output wfull,
    output rempty
);
    wire full,empty;
    
    wire [3:0] wp,rp,wgp,wgp2,rgp,rgp2;

    reg [3:0] wptr;
    reg [3:0] rptr;

    reg [3:0] wgptr, wgptr1, wgptr2;
    reg [3:0] rgptr, rgptr1, rgptr2; 

    reg [7:0] mem [0:7];

    write_control wcon(
        .wclk(wclk),
        .wrst_n(wrst_n),
        .winc(winc),
        .rgptr(rgp2),
        .wgptr(wgp),
        .waddr(wp[2:0]),
        .wfull(full)
    );

    read_control rcon(
        .rclk(rclk),
        .rrst_n(rrst_n),
        .rinc(rinc),
        .wgptr(wgp2),
        .rgptr(rgp),
        .raddr(rp[2:0]),
        .rempty(empty)
    );
    
    assign rgp2 = rgptr2;
    assign wgp2 = wgptr2;
    
    always @(*) begin
        wptr = wp;
        rptr = rp;
        wgptr = wgp;
        rgptr = rgp;

    end

    always @(posedge wclk) begin
        if(!wrst_n) begin
            rgptr1 <= 0;
            rgptr2 <= 0;
        end
        else begin
            rgptr1 <= rgptr;
            rgptr2 <= rgptr1;
        end
    end

    always @(posedge rclk) begin
        if(!rrst_n) begin
            wgptr1 <= 0;
            wgptr2 <= 0;
        end
        else begin
            wgptr1 <= wgptr;
            wgptr2 <= wgptr1;
        end
    end

    always @(posedge wclk) begin
        if(winc && !full) begin
            mem[wptr[2:0]] <= wdata;
        end
    end

    always @(posedge rclk) begin
        if(rinc && !empty) begin
            rdata <= mem[rptr[2:0]];
        end
    end

    assign wfull = full;
    assign rempty = empty;

endmodule
