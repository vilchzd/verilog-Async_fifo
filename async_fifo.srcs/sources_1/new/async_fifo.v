`timescale 10ns / 1ns
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

    
    output reg [DATA_WIDTH-1:0] data_out,
    output reg empty,
    output reg full
    );
    
wire [ADDRESS_WIDTH-1:0] write_ptr;
wire [ADDRESS_WIDTH-1:0] write_ptr_gray;
wire [ADDRESS_WIDTH-1:0] write_ptr_gsync;
wire [ADDRESS_WIDTH-1:0] read_ptr;
wire [ADDRESS_WIDTH-1:0] read_ptr_gray;
wire [ADDRESS_WIDTH-1:0] read_ptr_gsync;



//always @ (posedge r_clk) begin 
//        if (!r_rstn) begin
//        read_ptr <= 0;
//        end
//end
    
    
async_synchronizer #(ADDRESS_WIDTH) wptr_sync(
    .clk(w_clk),
    .reset_n(w_rstn),
    .data_in(read_ptr_gray),
    .data_out(write_ptr));

async_synchronizer #(ADDRESS_WIDTH) rptr_sync(
    .clk(r_clk),
    .reset_n(r_rstn),
    .data_in(write_ptr_gray),
    .data_out(read_ptr));


async_memo #(DATA_WIDTH, ADDRESS_WIDTH) memory(
    .w_clk(w_clk),
    .w_en(w_en),
    .write_ptr(write_ptr), 
    .r_clk(r_clk),
    .r_en(r_en),
    .read_ptr(read_ptr),
    .data_in(data_in),
    .data_out(data_out)
    );

endmodule