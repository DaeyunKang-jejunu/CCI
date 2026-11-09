`timescale 1ns/1ps
module tb_axi_memory_wstrb;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic awvalid,awready,wvalid,wready,wlast,bvalid,arready,rvalid,rlast,err;
    logic [127:0] wdata,rdata;logic [15:0] wstrb;
    logic [4:0] bid,rid;logic [1:0] bresp,rresp;
    axi_memory_slave #(.ID_WIDTH(5),.DEBUG(0)) dut(
        .ACLK(clk),.ARESETn(rst_n),.AWVALID(awvalid),.AWREADY(awready),
        .AWID(5'd3),.AWADDR(64'h1000),.AWLEN(8'd0),
        .WVALID(wvalid),.WREADY(wready),.WDATA(wdata),.WSTRB(wstrb),.WLAST(wlast),
        .BVALID(bvalid),.BREADY(1'b1),.BID(bid),.BRESP(bresp),
        .ARVALID(1'b0),.ARREADY(arready),.ARID('0),.ARADDR('0),.ARLEN('0),
        .RVALID(rvalid),.RREADY(1'b1),.RID(rid),.RDATA(rdata),.RLAST(rlast),.RRESP(rresp),
        .protocol_error_wlast(err));
    initial begin
        awvalid=0;wvalid=0;wlast=0;wdata={16{8'haa}};wstrb=16'h00ff;
        for(int b=0;b<16;b++) dut.put_byte(64'h1000+64'(b),8'h11);
        repeat(3) @(posedge clk);@(negedge clk);rst_n=1;
        awvalid=1;do @(posedge clk);while(!awready);@(negedge clk);awvalid=0;
        wvalid=1;wlast=1;do @(posedge clk);while(!wready);@(negedge clk);wvalid=0;wlast=0;
        do @(posedge clk);while(!bvalid);
        for(int b=0;b<16;b++)
            assert(dut.get_byte(64'h1000+64'(b))==(b<8?8'haa:8'h11))
                else $fatal(1,"WSTRB_BYTE_%0d",b);
        assert(!err && bresp==0) else $fatal(1,"WSTRB_RESPONSE");
        $display("PASS AXI memory WSTRB byte enables");$finish;
    end
    initial begin #2000;$fatal(1,"WSTRB_TIMEOUT");end
endmodule
