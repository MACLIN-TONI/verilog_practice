module Booth_Multiplier (
    input signed [3:0] multiplicand,
    input signed [3:0] multiplier,
    output signed [7:0] product
);

    reg signed [3:0] A;
    reg signed [3:0] Q;
    reg signed [3:0] M;
    reg signed [8:0] shift_reg;
    reg Q_minus;

    always @(*) begin
        A = 0;
        Q = multiplier;
        M = multiplicand;
        Q_minus = 0;

        for (integer i =0;i<=3;i=i+1) begin
            case({Q[0],Q_minus})
                2'b01: A = A + M;
                2'b10: A = A - M;
                default: A = A;
            endcase
            shift_reg = $signed({A,Q,Q_minus}) >>> 1;
            {A,Q,Q_minus} = shift_reg;
        end 
    end
    assign product = {A,Q};

endmodule