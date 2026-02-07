`timescale 1ns / 1ps
`include "async_synchronizer.v"
`include "async_memo.v"

module async_fifo #(parameter DATA_WIDTH = 8, ADDRESS_WIDTH = 4)(
    input wire w_clk,
    input wire r_clk,
    input wire w_en, 
    input wire r_en,
    input wire w_rstn,
    input wire r_rstn,
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [ADDRESS_WIDTH-1:0] write_ptr,
    input wire [ADDRESS_WIDTH-1:0] read_ptr,
    
    
    output reg empty,
    output reg full
    );
endmodule

    
    
localparam address_width = $clog2(depth);

reg [address_width-1:0] write_ptr;
reg [address_width-1:0] read_ptr;
reg [width-1:0] fifo_mem [0:depth-1];