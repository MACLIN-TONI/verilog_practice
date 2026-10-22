module s_0110 (
    input clk,
    input en,
    input areset_n,
    input in, 
    output reg out
);

    wire clean_en;
    debouncer #(
        .CLK_FREQ(50_000_000),
        .DEBOUNCE_TIME_MS(20)
    ) debounce(
        .clk(clk),
        .rst_n(areset_n),
        .button_in(en),
        .button_out(clean_en)
    );

    parameter a = 3'b000;
    parameter b = 3'b001;
    parameter c = 3'b010;
    parameter d = 3'b011;
    parameter e = 3'b100;

    reg [2:0] state, next;


    always @(posedge clk, negedge areset_n) begin
        if(~areset_n) begin
            state <= a;
        end
        else begin
            if(clean_en) begin
                state <= next;
            end
            else begin
                state <= state;
            end
        end
    end

    always @(state, in) begin
        next = a;

        case (state) 
            a: begin
                if(in) begin
                    next = a;
                end
                else begin
                    next = b;
                end
            end

            b: begin
                if(in) begin
                    next = c;
                end
                else begin
                    next = b;
                end
            end

            c: begin
                if(in) begin
                    next = d;
                end
                else begin
                    next = b;
                end
            end

            d: begin
                if(in) begin
                    next = a;
                end
                else begin
                    next = e;
                end
            end

            e: begin
                if(in) begin
                    next = a;
                end
                else begin
                    next = b;
                end
            end
        endcase
    end

    always @(state) begin
        out = 0;
        if (state == e) begin
            out = 1;
        end
        else begin
            out = 0;
        end
    end

endmodule