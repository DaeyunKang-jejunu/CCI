`timescale 1ns/1ps
module tb_decoder;
    logic [63:0] addr,mask,out_mask;
    logic [6:0] count;
    logic [51:0] page;
    logic valid;
    integer checks=0;
    logic [63:0] expected;
    logic expected_valid;
    cci_range_req_decoder dut(.req_base_addr(addr),.req_line_count(count),.req_line_mask(mask),
        .d_base_page(page),.d_line_mask(out_mask),.valid);
    initial begin
        for(int start=0;start<64;start++) for(int n=0;n<128;n++)
            for(int misaligned=0;misaligned<2;misaligned++) for(int kind=0;kind<3;kind++) begin
                addr=64'hf123_4567_89ab_c000+(64'(start)<<6)+64'(misaligned);
                count=7'(n);mask=(kind==0)?0:((kind==1)?64'h8000_0000_0000_0005:64'hffff_ffff_ffff_ffff);
                expected_valid=(misaligned==0) && (kind!=0 || (n>=1 && n<=64-start));
                expected=(kind!=0)?mask:((64'hffff_ffff_ffff_ffff >> (64-((n>64)?64:n))) << start);
                if(n==0 && kind==0) expected=0;
                #1;
                assert(valid==expected_valid && page==addr[63:12] && out_mask==expected)
                    else $fatal(1,"DECODER_ORACLE start=%0d count=%0d kind=%0d",start,n,kind);
                checks++;
            end
        $display("PASS decoder exhaustive start/count/alignment/mask classes checks=%0d",checks);$finish;
    end
endmodule
