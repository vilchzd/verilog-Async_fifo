`timescale 10ns / 1ns


module async_read #(parameter ADDRESS_WIDTH = 4)(
    input wire r_clk,  
    input wire r_rstn,
    input wire [ADDRESS_WIDTH-1:0] write_ptr_gsync,
    
    output reg [ADDRESS_WIDTH-1:0] read_ptr,
    output reg [ADDRESS_WIDTH-1:0] read_ptr_gray,
    output reg empty
    );
    
always @ (posedge r_clk) begin 
    if (!r_rstn) begin
        read_ptr <= 0;
        read_ptr_gray <= 0;
    end else begin
        
    end
end 

endmodule

