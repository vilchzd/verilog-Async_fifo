`timescale 10ns / 1ns

module async_write #(parameter ADDRESS_WIDTH = 4)(
    input wire w_clk,
    input wire [ADDRESS_WIDTH-1:0] read_ptr_gsync,
    
    output reg [ADDRESS_WIDTH-1:0] write_ptr,
    output reg [ADDRESS_WIDTH-1:0] write_ptr_gray,
    output reg full
    );
    
    
always @ (posedge w_clk) begin 
    if (w_en && !full) begin
        write_ptr <= 0;
        
    end
end 

endmodule
