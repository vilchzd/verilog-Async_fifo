`timescale 10ns / 1ns

module async_write #(parameter ADDRESS_WIDTH = 4)(
    input wire w_clk,
    input wire w_rstn,
    input wire [ADDRESS_WIDTH-1:0] read_ptr_gsync,//sync read pointer in gray code
    
    output reg [ADDRESS_WIDTH-1:0] write_ptr, 
    output reg [ADDRESS_WIDTH-1:0] write_ptr_gray,
    output reg full
    );
    
    
always @ (posedge w_clk) begin 
    if (!w_rstn) begin
        write_ptr <= 0;
        write_ptr_gray <= 0;
    end else begin
        
    end
end 

assign write_ptr = 

endmodule
