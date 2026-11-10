`timescale 1ns/1ps
module tb_axi_fifo_overlap #(parameter int DEPTH=3);
    localparam int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128, INGRESS_IDX_WIDTH=4;
    logic  ACLK;
    logic  ARESETn;
    logic  M0_AWVALID;
    logic  M0_AWREADY;
    logic [ID_WIDTH-1:0] M0_AWID;
    logic [ADDR_WIDTH-1:0] M0_AWADDR;
    logic [7:0] M0_AWLEN;
    logic  M0_WVALID;
    logic  M0_WREADY;
    logic [DATA_WIDTH-1:0] M0_WDATA;
    logic [DATA_WIDTH/8-1:0] M0_WSTRB='1;
    logic  M0_WLAST;
    logic  M0_BVALID;
    logic  M0_BREADY;
    logic [ID_WIDTH-1:0] M0_BID;
    logic [1:0] M0_BRESP;
    logic  M0_ARVALID;
    logic  M0_ARREADY;
    logic [ID_WIDTH-1:0] M0_ARID;
    logic [ADDR_WIDTH-1:0] M0_ARADDR;
    logic [7:0] M0_ARLEN;
    logic  M0_RVALID;
    logic  M0_RREADY;
    logic [ID_WIDTH-1:0] M0_RID;
    logic [DATA_WIDTH-1:0] M0_RDATA;
    logic  M0_RLAST;
    logic [1:0] M0_RRESP;
    logic  M1_AWVALID;
    logic  M1_AWREADY;
    logic [ID_WIDTH-1:0] M1_AWID;
    logic [ADDR_WIDTH-1:0] M1_AWADDR;
    logic [7:0] M1_AWLEN;
    logic  M1_WVALID;
    logic  M1_WREADY;
    logic [DATA_WIDTH-1:0] M1_WDATA;
    logic [DATA_WIDTH/8-1:0] M1_WSTRB='1;
    logic  M1_WLAST;
    logic  M1_BVALID;
    logic  M1_BREADY;
    logic [ID_WIDTH-1:0] M1_BID;
    logic [1:0] M1_BRESP;
    logic  M1_ARVALID;
    logic  M1_ARREADY;
    logic [ID_WIDTH-1:0] M1_ARID;
    logic [ADDR_WIDTH-1:0] M1_ARADDR;
    logic [7:0] M1_ARLEN;
    logic  M1_RVALID;
    logic  M1_RREADY;
    logic [ID_WIDTH-1:0] M1_RID;
    logic [DATA_WIDTH-1:0] M1_RDATA;
    logic  M1_RLAST;
    logic [1:0] M1_RRESP;
    logic  S_AWVALID;
    logic  S_AWREADY;
    logic [ID_WIDTH:0] S_AWID;
    logic [ADDR_WIDTH-1:0] S_AWADDR;
    logic [7:0] S_AWLEN;
    logic  S_WVALID;
    logic  S_WREADY;
    logic [DATA_WIDTH-1:0] S_WDATA;
    logic [DATA_WIDTH/8-1:0] S_WSTRB;
    logic  S_WLAST;
    logic  S_BVALID;
    logic  S_BREADY;
    logic [ID_WIDTH:0] S_BID;
    logic [1:0] S_BRESP;
    logic  S_ARVALID;
    logic  S_ARREADY;
    logic [ID_WIDTH:0] S_ARID;
    logic [ADDR_WIDTH-1:0] S_ARADDR;
    logic [7:0] S_ARLEN;
    logic  S_RVALID;
    logic  S_RREADY;
    logic [ID_WIDTH:0] S_RID;
    logic [DATA_WIDTH-1:0] S_RDATA;
    logic  S_RLAST;
    logic [1:0] S_RRESP;
    logic [INGRESS_IDX_WIDTH-1:0] M1_AWINGRESS_IDX;
    logic [INGRESS_IDX_WIDTH-1:0] M1_BINGRESS_IDX;
    logic  M1_BFIRE;
    logic  axi_idle;
    logic  aw_grant_locked;
    logic  ar_grant_locked;
    logic  aw_locked_route;
    logic  ar_locked_route;
    logic  protocol_error_wlast;
    logic  protocol_error_rlast;
    logic  protocol_error_bid_order;
    logic  protocol_error_rid_order;
    logic  protocol_error_outstanding_overflow;
    axi4_simple_2to1_bus_arbiter #(.MAX_OUTSTANDING_TRANSACTIONS(DEPTH)) dut (.*);
    int issued=0,retired=0,reads=0,read_retired=0,writes=0,aw_b_overlap=0,ar_r_overlap=0,full_hold=0;
    initial ACLK=0;
    always #5 ACLK=~ACLK;
    initial begin
        ARESETn=0;
        M0_AWVALID=0;
        M0_AWID=0;
        M0_AWADDR=0;
        M0_AWLEN=0;
        M0_WVALID=0;
        M0_WDATA=0;
        M0_WSTRB=16'ha5a5;
        M0_WLAST=0;
        M0_BREADY=0;
        M0_ARVALID=0;
        M0_ARID=0;
        M0_ARADDR=0;
        M0_ARLEN=0;
        M0_RREADY=0;
        M1_AWVALID=0;
        M1_AWID=0;
        M1_AWADDR=0;
        M1_AWLEN=0;
        M1_WVALID=0;
        M1_WDATA=0;
        M1_WSTRB=16'h5a5a;
        M1_WLAST=0;
        M1_BREADY=0;
        M1_ARVALID=0;
        M1_ARID=0;
        M1_ARADDR=0;
        M1_ARLEN=0;
        M1_RREADY=0;
        S_AWREADY=0;
        S_WREADY=0;
        S_BVALID=0;
        S_BID=0;
        S_BRESP=0;
        S_ARREADY=0;
        S_RVALID=0;
        S_RID=0;
        S_RDATA=0;
        S_RLAST=0;
        S_RRESP=0;
        M1_AWINGRESS_IDX=0;
        repeat(3) @(negedge ACLK); ARESETn=1;
        M0_BREADY=1;M1_BREADY=1;M0_RREADY=1;M1_RREADY=1;
        S_AWREADY=1;S_ARREADY=1;S_WREADY=1;
        // Fill both lifetime FIFOs, with all W bursts already complete.
        for(int n=0;n<DEPTH;n++) begin request(n);tick();requests_off();write_beat(n);end
        request(DEPTH);response(0);
        #1;
        assert(!S_AWVALID && !S_ARVALID) else $fatal(1,"full FIFO admitted address before retirement");
        tick();responses_off(); // Full queues must hold new request through retirement.
        tick();requests_off();write_beat(DEPTH);
        // Drain down to one entry before repeated simultaneous push/pop.
        for(int n=1;n<DEPTH;n++) begin response(n);tick();responses_off();end
        for(int n=DEPTH+1;n<DEPTH+41;n++) begin
            request(n);response(n-1);
            if(DEPTH==1) begin tick();responses_off();tick();end
            else begin tick();responses_off();end
            requests_off();write_beat(n);
        end
        response(DEPTH+40);tick();responses_off();tick();
        assert(axi_idle && issued==DEPTH+41 && retired==issued && reads==issued && read_retired==issued && writes==issued)
            else $fatal(1,"FIFO overlap drain/count mismatch");
        if(DEPTH>1) assert(aw_b_overlap==40 && ar_r_overlap==40) else $fatal(1,"FIFO_OVERLAP_COVERAGE");
        else assert(aw_b_overlap==0 && ar_r_overlap==0) else $fatal(1,"depth-one full admission contract changed");
        $display("COVERAGE axi_fifo depth=%0d aw_b_overlap=%0d ar_rlast_overlap=%0d full_hold=%0d issued=%0d",DEPTH,aw_b_overlap,ar_r_overlap,full_hold,issued);
        assert(full_hold>0) else $fatal(1,"full boundary not covered");
        $display("PASS AXI FIFO simultaneous retirement and admission depth=%0d",DEPTH);$finish;
    end
    function automatic logic [4:0] xid(input int n); return {1'(n),4'(n)}; endfunction
    task automatic tick; @(posedge ACLK); @(negedge ACLK); endtask
    task automatic request(input int n);
        M0_AWID=4'(n);M1_AWID=4'(n);M0_ARID=4'(n);M1_ARID=4'(n);M1_AWINGRESS_IDX=4'(n);
        M0_AWADDR=64'h1200_0000_0000+64'(n*64);M1_AWADDR=M0_AWADDR;
        M0_ARADDR=M0_AWADDR;M1_ARADDR=M0_AWADDR;
        M0_AWVALID=!(n%2);M1_AWVALID=n%2;M0_ARVALID=!(n%2);M1_ARVALID=n%2;
    endtask
    task automatic requests_off; M0_AWVALID=0;M1_AWVALID=0;M0_ARVALID=0;M1_ARVALID=0; endtask
    task automatic write_beat(input int n);
        M0_WDATA=128'(n);M1_WDATA=128'(n);M0_WLAST=1;M1_WLAST=1;
        M0_WVALID=!(n%2);M1_WVALID=n%2;tick();M0_WVALID=0;M1_WVALID=0;
    endtask
    task automatic response(input int n);
        S_BVALID=1;S_BID=xid(n);S_RVALID=1;S_RID=xid(n);S_RDATA=128'(n+1000);S_RLAST=1;
    endtask
    task automatic responses_off;S_BVALID=0;S_RVALID=0;endtask
    always @(posedge ACLK) if(ARESETn) begin
        assert(!(protocol_error_wlast || protocol_error_rlast || protocol_error_bid_order ||
                 protocol_error_rid_order || protocol_error_outstanding_overflow)) else $fatal(1,"FIFO protocol error");
        if(S_AWVALID && S_AWREADY) begin
            assert(S_AWID==xid(issued) && S_AWADDR==64'h1200_0000_0000+64'(issued*64)) else $fatal(1,"AW sequence");issued++;
        end
        if(S_ARVALID && S_ARREADY) begin
            assert(S_ARID==xid(reads)) else $fatal(1,"AR sequence");reads++;
        end
        if(S_WVALID && S_WREADY) begin
            assert(S_WDATA==128'(writes) && S_WLAST &&
                   S_WSTRB==(writes%2?16'h5a5a:16'ha5a5))
                else $fatal(1,"W ordering/STRB routing");writes++;
        end
        if(S_BVALID && S_BREADY) begin
            assert(writes>retired && ((retired%2) ? (M1_BVALID && M1_BID==4'(retired) && M1_BFIRE && M1_BINGRESS_IDX==4'(retired) && !M0_BVALID) : (M0_BVALID && M0_BID==4'(retired) && !M1_BVALID))) else $fatal(1,"B routing/ingress lifetime");retired++;
        end
        if(S_RVALID && S_RREADY) begin
            assert((read_retired%2) ? (M1_RVALID && M1_RDATA==128'(read_retired+1000) && M1_RLAST && !M0_RVALID) : (M0_RVALID && M0_RDATA==128'(read_retired+1000) && M0_RLAST && !M1_RVALID)) else $fatal(1,"R routing/data");read_retired++;
        end
        assert(issued-retired>=0 && issued-retired<=DEPTH && reads-read_retired>=0 && reads-read_retired<=DEPTH) else $fatal(1,"FIFO bounds");
        if(S_AWVALID && S_AWREADY && S_BVALID && S_BREADY) aw_b_overlap++;
        if(S_ARVALID && S_ARREADY && S_RVALID && S_RREADY && S_RLAST) ar_r_overlap++;
        if((M0_AWVALID || M1_AWVALID) && !S_AWVALID && S_BVALID && S_BREADY) full_hold++;
    end
    always @(negedge ACLK) if(ARESETn)
        assert(int'(dut.wr_count)==issued-retired && int'(dut.rd_count)==reads-read_retired)
            else $fatal(1,"FIFO_LIFETIME_COUNT");
    initial begin #100000;$fatal(1,"FIFO overlap timeout");end
endmodule
