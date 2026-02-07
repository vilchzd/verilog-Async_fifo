`timescale 10ns / 1ns

module async_memo #(parameter DATA_WIDTH = 8, ADDRESS_WIDTH = 4) (
    
    input wire w_clk,
    input wire r_clk,
    input wire w_en, 
    input wire r_en,
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [ADDRESS_WIDTH-1:0] write_ptr,
    input wire [ADDRESS_WIDTH-1:0] read_ptr,
    
    output reg [DATA_WIDTH-1:0] data_out
    );
 
reg [DATA_WIDTH-1:0] asyncfifo_mem [0:(1<<ADDRESS_WIDTH)-1];

always  @ (posedge w_clk) begin
    if (w_en) begin
        asyncfifo_mem[write_ptr] <= data_in;
    end
end

always  @ (posedge r_clk) begin
    if (r_en) begin
        data_out <= asyncfifo_mem[read_ptr] ;
    end
end

endmodule

