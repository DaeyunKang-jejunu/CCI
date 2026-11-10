// Combinational proof over all addresses, counts and masks, independent mask formula.
module formal_decoder(input [63:0] addr, input [63:0] mask, input [6:0] count);
    wire [51:0] page;
    wire [63:0] selected;
    wire valid;
    wire [64:0] low_ones=(65'd1 << count)-65'd1;
    wire [63:0] expected=(mask!=0)?mask:(low_ones[63:0]<<addr[11:6]);
    cci_range_req_decoder dut(.req_base_addr(addr),.req_line_count(count),.req_line_mask(mask),
        .d_base_page(page),.d_line_mask(selected),.valid);
    always @* begin
        assert(page==addr[63:12]);
        assert(valid == ((addr[5:0]==0) && ((mask!=0) || ((count>0) && ({1'b0,addr[11:6]}+{1'b0,count}<=8'd64)))));
        assert(selected==expected);
    end
endmodule
