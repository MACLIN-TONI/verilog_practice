module cla_adder #(parameter N) (
    input [N-1:0] a, b,
    input cin,
    output [N-1:0] sum,
    output carry_out
);
    
    wire [N:0] carry;
    wire [N-1:0] P, G;
    
    assign P[0] = a[0] ^ b[0];
    assign P[1] = a[1] ^ b[1];
    assign P[2] = a[2] ^ b[2];
    assign P[3] = a[3] ^ b[3];

    assign G[0] = a[0] & b[0];
    assign G[1] = a[1] & b[1];
    assign G[2] = a[2] & b[2];
    assign G[3] = a[3] & b[3];

    assign carry[0] = cin;
    assign carry[1] = G[0] + (carry[0] & P[0]);
    assign carry[2] = G[1] + ((G[0] + (carry[0] & P[0])) & P[1]);
    assign carry[3] = G[2] + ((G[1] + ((G[0] + (carry[0] & P[0])) & P[1])) & P[2]);
    assign carry[4] = G[3] + ((G[2] + ((G[1] + ((G[0] + (carry[0] & P[0])) & P[1])) & P[2])) & P[3]);
    
    

    assign sum = P ^ carry;
    assign carry_out = carry[N];


endmodule