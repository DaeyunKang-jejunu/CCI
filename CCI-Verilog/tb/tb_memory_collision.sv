`timescale 1ns/1ps
module tb_memory_collision #(parameter int LATENCY=0);
    logic clk=0,rst=0;
    always #5 clk=~clk;
    logic av=0,ar, wv=0,wr,bv,br=1,rv=0,rr,dv,dr=0,dl,err;
    logic [63:0] wa=0,ra=0;
    logic [127:0] wd=0,rd;
    logic [4:0] bid,rid;
    logic [1:0] bp,rp;
    axi_memory_slave #(.RESP_LATENCY(LATENCY)) dut(
        .ACLK(clk),.ARESETn(rst),.AWVALID(av),.AWREADY(ar),.AWID(5'd3),.AWADDR(wa),.AWLEN(8'd0),
        .WVALID(wv),.WREADY(wr),.WDATA(wd),.WSTRB(16'hffff),.WLAST(1'b1),.BVALID(bv),.BREADY(br),.BID(bid),.BRESP(bp),
        .ARVALID(rv),.ARREADY(rr),.ARID(5'd4),.ARADDR(ra),.ARLEN(8'd0),
        .RVALID(dv),.RREADY(dr),.RID(rid),.RDATA(rd),.RLAST(dl),.RRESP(rp),.protocol_error_wlast(err));
    task automatic collision(input bit same_address);
        @(negedge clk);rst=0; av=0;rv=0;wv=0;dr=0;
        repeat(3) @(negedge clk);
        for(int i=0;i<16;i++) begin dut.put_byte(64'h1000+64'(i),8'h11);dut.put_byte(64'h2000+64'(i),8'h22);end
        rst=1;
        @(negedge clk);wa=same_address?64'h1000:64'h2000;ra=64'h1000;av=1;rv=1;
        @(posedge clk);assert(ar && rr) else $fatal(1,"memory address acceptance");
        @(negedge clk);av=0;rv=0;
        // Align W commit with first R generation, rather than the later R handshake.
        while(!dut.ar_pop) @(negedge clk);
        wv=1;wd={16{8'haa}};
        @(posedge clk);assert(wr && dut.ar_pop) else $fatal(1,"collision not exercised");
        @(negedge clk);wv=0;
        assert(dv && rd=={16{8'h11}} && dl && rid==4 && rp==0) else $fatal(1,"READ_FIRST_COLLISION");
        // Commit another write while the old R response is held; payload must stay stable.
        av=1;
        @(posedge clk);assert(ar) else $fatal(1,"second AW");
        @(negedge clk);av=0;wv=1;wd={16{8'hbb}};
        do @(posedge clk);while(!wr);
        @(negedge clk);wv=0;
        repeat(4) begin
            assert(dv && rd=={16{8'h11}} && dl) else $fatal(1,"HELD_R_CHANGED");
            @(negedge clk);
        end
        for(int i=0;i<16;i++) assert(dut.get_byte(wa+64'(i))==8'hbb) else $fatal(1,"W byte commit");
        dr=1;@(negedge clk);dr=0;
        rv=1;ra=wa;
        do @(posedge clk);while(!rr);
        @(negedge clk);rv=0;
        wait(dv);@(negedge clk);
        assert(rd=={16{8'hbb}} && !err) else $fatal(1,"post-write read");
        dr=1;@(negedge clk);dr=0;
    endtask
    initial begin
        collision(1);collision(0);
        $display("PASS memory collision read-first, different-address, held R, post-write read latency=%0d",LATENCY);$finish;
    end
    initial begin #100000; $fatal(1,"memory collision timeout");end
endmodule
