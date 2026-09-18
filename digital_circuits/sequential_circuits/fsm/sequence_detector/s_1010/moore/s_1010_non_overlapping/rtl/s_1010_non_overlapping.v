
module s_1010_non_overlapping (
    input clk,
    input en,
    input areset_n,
    input in,
    output reg out
);

    parameter a = 3'b000;
    parameter b = 3'b001;
    parameter c = 3'b010;
    parameter d = 3'b011;
    parameter e = 3'b100;

    reg [2:0] state, next;

    // JK inputs
    reg s2, r2;
    reg s1, r1;
    reg s0, r0;


    //========================================================
    // NEXT STATE LOGIC
    //========================================================

    always @(state, in) begin

        next = a;

        case (state)

            // State A = 000
            a: begin
                if (in)
                    next = b;
                else
                    next = a;
            end

            // State B = 001
            b: begin
                if (in)
                    next = b;
                else
                    next = c;
            end

            // State C = 010
            c: begin
                if (in)
                    next = d;
                else
                    next = a;
            end

            // State D = 011
            d: begin
                if (in)
                    next = b;
                else
                    next = e;
            end

            // State E = 100
            e: begin
                if (in)
                    next = b;
                else
                    next = a;
            end

            default:
                next = a;

        endcase
    end


    //========================================================
    // JK EXCITATION LOGIC
    //========================================================
    //
    // J = ~Q & Qnext
    // K = Q & ~Qnext
    //
    //========================================================

    always @(state, next) begin

        // Flip-flop for state[2]
        s2 = next[2];
        r2 = ~next[2];

        // Flip-flop for state[1]
        s1 = next[1];
        r1 = ~next[1];

        // Flip-flop for state[0]
        s0 = next[0];
        r0 = ~next[0];

    end


    //========================================================
    // THREE SR FLIP-FLOPS
    //========================================================

    always @(posedge clk, negedge areset_n) begin

        if (!areset_n) begin

            state[2] <= 0;
            state[1] <= 0;
            state[0] <= 0;

        end

        else if (en) begin

            // JK FF for state[2]
            case ({s2, r2})
                2'b00: state[2] <= state[2]; // Hold
                2'b01: state[2] <= 1'b0;     // Reset
                2'b10: state[2] <= 1'b1;     // Set
                2'b11: state[2] <= 1'bx; // Toggle
            endcase

            // JK FF for state[1]
            case ({s1, r1})
                2'b00: state[1] <= state[1];
                2'b01: state[1] <= 1'b0;
                2'b10: state[1] <= 1'b1;
                2'b11: state[1] <= 1'bx;
            endcase

            // JK FF for state[0]
            case ({s0, r0})
                2'b00: state[0] <= state[0];
                2'b01: state[0] <= 1'b0;
                2'b10: state[0] <= 1'b1;
                2'b11: state[0] <= 1'bx;
            endcase

        end

    end


    //========================================================
    // OUTPUT LOGIC
    //========================================================

    always @(state) begin

        out = 0;

        if (state == e)
            out = 1;

    end

endmodule
