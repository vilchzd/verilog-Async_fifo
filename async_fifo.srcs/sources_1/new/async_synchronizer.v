`timescale 10ns / 1ns

module async_synchronizer #(parameter WIDTH=8)(
    input wire clk,
    input wire reset_n,
    input wire [WIDTH-1:0] data_in,
    output reg [WIDTH-1:0] data_out
    );
    
    reg [WIDTH-1:0] q1;
    
    always @ (posedge clk)begin
        if(!reset_n) begin
            q1 <= 0;
            data_out <=0;            
        end else begin
            q1 <= data_in;
            data_out <= q1;
        end
    end 
endmodule
