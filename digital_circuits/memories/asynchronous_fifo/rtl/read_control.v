module read_control (
    input rclk,
    input rrst_n,
    input rinc,
    input [3:0] wgptr,
    output reg [3:0] rgptr,
    output [2:0] raddr,
    output rempty
);

    reg [3:0] rptr;

    assign raddr = rptr[2:0];


    always @(rptr) begin
        rgptr[3] = rptr[3];
        rgptr[2] = rptr[3] ^ rptr[2];
        rgptr[1] = rptr[2] ^ rptr[1];
        rgptr[0] = rptr[1] ^ rptr[0];
    end

    always @(posedge rclk) begin
        if(!rrst_n) begin
            rptr <= 4'b0000;
        end
        else begin
            if(rinc && !rempty) begin
                rptr <= rptr + 1;
            end
            else begin
                rptr <= rptr;
            end
        end
    end

    assign rempty = (wgptr === rgptr);

endmodule