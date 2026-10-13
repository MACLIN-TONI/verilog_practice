module synchronous_fifo #(
    parameter WIDTH = 8,
    parameter DEPTH = 8
) (
    input clk,
    input rst,
    input wr_en,
    input rd_en,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout,
    output full,
    output empty
);
    reg [$clog2(DEPTH):0] occ;
    reg [$clog2(DEPTH)-1:0] wrp;
    reg [$clog2(DEPTH)-1:0] rdp;
    reg [WIDTH-1:0] mem [0:DEPTH-1];

    assign full = (occ == DEPTH);
    assign empty = (occ == 0);

    always @(posedge clk) begin
        if(rst) begin
            wrp <= 0;
            rdp <= 0;
            occ <= 0;
            dout <= 8'h00;
        end
        else begin
            if(wr_en && rd_en) begin
                if(!full && !empty) begin
                    mem[wrp] <= din;
                    dout <= mem[rdp];
                    wrp <= wrp + 1;
                    rdp <= rdp + 1;
                end
                else if(empty) begin
                    mem[wrp] <= din;
                    wrp <= wrp + 1;
                    occ <= occ + 1;
                end
                else begin
                    dout <= mem[rdp];
                    rdp <= rdp + 1;
                    occ <= occ - 1;
                end
            end
            else if(wr_en && !full) begin
                mem[wrp] <= din;
                wrp <= wrp + 1;
                occ <= occ + 1;
            end
            else if(rd_en && !empty) begin
                dout <= mem[rdp];
                rdp <= rdp + 1;
                occ <= occ - 1;
            end
            else begin
                dout <= dout;
            end
        end
    end 

endmodule