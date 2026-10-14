module write_control (
    input wclk,
    input wrst_n,
    input winc,
    input [3:0] rgptr,
    output reg [3:0] wgptr,
    output [2:0] waddr,
    output wfull
);
    reg [3:0] rptr;
    reg [3:0] wptr;

    assign waddr = wptr[2:0];

    always @(rgptr) begin
        rptr[3] = rgptr[3];
        rptr[2] = rptr[3] ^ rgptr[2];
        rptr[1] = rptr[2] ^ rgptr[1];
        rptr[0] = rptr[1] ^ rgptr[0];
    end

    always @(wptr) begin
        wgptr[3] = wptr[3];
        wgptr[2] = wptr[3] ^ wptr[2];
        wgptr[1] = wptr[2] ^ wptr[1];
        wgptr[0] = wptr[1] ^ wptr[0];
    end

    always @(posedge wclk) begin
        if(!wrst_n) begin
            wptr <= 4'b0000;
        end
        else begin
            if(winc && !wfull) begin
                wptr <= wptr + 1;
            end
            else begin
                wptr <= wptr;
            end
        end
    end

    assign wfull = ((wptr[2:0] === rptr[2:0]) && wptr[3] !== rptr[3]);
endmodule