`timescale 1ns / 1ps

module async_fifo #(parameter depth=8, width=4)(
    input wire wclk,
    input wire rclk,
    input wire wr_enable,
    input wire rd_enable, 
    input wire [width-1:0] write_data,
    input reg [width-1:0] read_data,
    );
endmodule

module sync_fifo #(parameter depth=8, width=4)(
    input wire reset,
    input wire clk, 
    input wire write_enable,
    input wire read_enable,
    input wire [width-1:0] write_data,
    output wire full,
    output wire empty, 
    output reg [width-1:0] read_data
    );
    
    
localparam address_width = $clog2(depth);

reg [address_width-1:0] write_ptr;
reg [address_width-1:0] read_ptr;
reg [width-1:0] fifo_mem [0:depth-1];