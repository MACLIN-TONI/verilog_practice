module write_control (
    input wclk,
    input wrst_n,
    input winc,
    input [3:0] rgptr,
    output reg [3:0] wgptr,
    output [2:0] waddr,
    output wfull
);

    reg [3:0] wptr;

    assign waddr = wptr[2:0];


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

    assign wfull = ((wgptr[1:0] === rgptr[1:0]) && wgptr[3:2] === ~(rgptr[3:2]));
endmodule