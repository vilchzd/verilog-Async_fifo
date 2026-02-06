`timescale 10ns / 1ns

module sync_testbench;

localparam WIDTH = 4;

reg clk;
reg reset_n;
reg [WIDTH-1:0] data_in;
wire [WIDTH-1:0] data_out;

async_synchronizer #(.WIDTH(4)) uut (
    .clk(clk),
    .reset_n(reset_n),
    .data_in(data_in),
    .data_out(data_out)
);

always #10 clk = ~clk;

initial begin
    clk = 0;
    reset_n = 0;
    data_in = 0;
    #20 reset_n = 1;
    
    data_in = 4'b1110; #20
    data_in = 4'b1010; #20
    data_in = 4'b1111;

    #40 $finish;
end
endmodule
