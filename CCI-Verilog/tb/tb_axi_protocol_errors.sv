`timescale 1ns/1ps
// Unit tests for the arbiter's sticky protocol-error flags. +case=N:
// 0=W early WLAST, 1=BID mismatch, 2=R early RLAST, 3=RID mismatch,
// 4=defensive AW overflow, 5=defensive AR overflow,
// 6=W missing final WLAST, 7=R missing final RLAST,
// 8=B response with no outstanding AW, 9=R response with no outstanding AR.
module tb_axi_protocol_errors;
    localparam int ID_WIDTH=4,ADDR_WIDTH=64,DATA_WIDTH=128,DEPTH=1,INGRESS_IDX_WIDTH=4;
    logic ACLK=0,ARESETn=0;always #5 ACLK=~ACLK;
    logic M0_AWVALID,M0_AWREADY;logic [ID_WIDTH-1:0] M0_AWID;logic [ADDR_WIDTH-1:0] M0_AWADDR;logic [7:0] M0_AWLEN;
    logic M0_WVALID,M0_WREADY;logic [DATA_WIDTH-1:0] M0_WDATA;logic [DATA_WIDTH/8-1:0] M0_WSTRB='1;logic M0_WLAST;
    logic M0_BVALID,M0_BREADY;logic [ID_WIDTH-1:0] M0_BID;logic [1:0] M0_BRESP;
    logic M0_ARVALID,M0_ARREADY;logic [ID_WIDTH-1:0] M0_ARID;logic [ADDR_WIDTH-1:0] M0_ARADDR;logic [7:0] M0_ARLEN;
    logic M0_RVALID,M0_RREADY;logic [ID_WIDTH-1:0] M0_RID;logic [DATA_WIDTH-1:0] M0_RDATA;logic M0_RLAST;logic [1:0] M0_RRESP;
    logic M1_AWVALID,M1_AWREADY;logic [ID_WIDTH-1:0] M1_AWID;logic [ADDR_WIDTH-1:0] M1_AWADDR;logic [7:0] M1_AWLEN;
    logic M1_WVALID,M1_WREADY;logic [DATA_WIDTH-1:0] M1_WDATA;logic [DATA_WIDTH/8-1:0] M1_WSTRB='1;logic M1_WLAST;
    logic M1_BVALID,M1_BREADY;logic [ID_WIDTH-1:0] M1_BID;logic [1:0] M1_BRESP;
    logic M1_ARVALID,M1_ARREADY;logic [ID_WIDTH-1:0] M1_ARID;logic [ADDR_WIDTH-1:0] M1_ARADDR;logic [7:0] M1_ARLEN;
    logic M1_RVALID,M1_RREADY;logic [ID_WIDTH-1:0] M1_RID;logic [DATA_WIDTH-1:0] M1_RDATA;logic M1_RLAST;logic [1:0] M1_RRESP;
    logic S_AWVALID,S_AWREADY;logic [ID_WIDTH:0] S_AWID;logic [ADDR_WIDTH-1:0] S_AWADDR;logic [7:0] S_AWLEN;
    logic S_WVALID,S_WREADY;logic [DATA_WIDTH-1:0] S_WDATA;logic [DATA_WIDTH/8-1:0] S_WSTRB;logic S_WLAST;
    logic S_BVALID,S_BREADY;logic [ID_WIDTH:0] S_BID;logic [1:0] S_BRESP;
    logic S_ARVALID,S_ARREADY;logic [ID_WIDTH:0] S_ARID;logic [ADDR_WIDTH-1:0] S_ARADDR;logic [7:0] S_ARLEN;
    logic S_RVALID,S_RREADY;logic [ID_WIDTH:0] S_RID;logic [DATA_WIDTH-1:0] S_RDATA;logic S_RLAST;logic [1:0] S_RRESP;
    logic [INGRESS_IDX_WIDTH-1:0] M1_AWINGRESS_IDX,M1_BINGRESS_IDX;logic M1_BFIRE,axi_idle;
    logic aw_grant_locked,ar_grant_locked,aw_locked_route,ar_locked_route;
    logic protocol_error_wlast,protocol_error_rlast,protocol_error_bid_order;
    logic protocol_error_rid_order,protocol_error_outstanding_overflow;
    int error_case;

    axi4_simple_2to1_bus_arbiter #(.ID_WIDTH(ID_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DATA_WIDTH(DATA_WIDTH),
        .MAX_OUTSTANDING_TRANSACTIONS(DEPTH),.INGRESS_IDX_WIDTH(INGRESS_IDX_WIDTH)) dut(.*);

    task automatic tick;@(posedge ACLK);@(negedge ACLK);endtask
    task automatic accept_aw(input logic [7:0] len);
        M0_AWID=4'h3;M0_AWADDR=64'h1000;M0_AWLEN=len;M0_AWVALID=1;
        do @(posedge ACLK);while(!M0_AWREADY);
        @(negedge ACLK);M0_AWVALID=0;
    endtask
    task automatic accept_ar(input logic [7:0] len);
        M0_ARID=4'h5;M0_ARADDR=64'h2000;M0_ARLEN=len;M0_ARVALID=1;
        do @(posedge ACLK);while(!M0_ARREADY);
        @(negedge ACLK);M0_ARVALID=0;
    endtask

    initial begin
        M0_AWVALID=0;M0_AWID=0;M0_AWADDR=0;M0_AWLEN=0;M0_WVALID=0;M0_WDATA=0;M0_WLAST=0;M0_BREADY=1;
        M0_ARVALID=0;M0_ARID=0;M0_ARADDR=0;M0_ARLEN=0;M0_RREADY=1;
        M1_AWVALID=0;M1_AWID=0;M1_AWADDR=0;M1_AWLEN=0;M1_WVALID=0;M1_WDATA=0;M1_WLAST=0;M1_BREADY=1;
        M1_ARVALID=0;M1_ARID=0;M1_ARADDR=0;M1_ARLEN=0;M1_RREADY=1;M1_AWINGRESS_IDX=0;
        S_AWREADY=1;S_WREADY=1;S_BVALID=0;S_BID=0;S_BRESP=0;
        S_ARREADY=1;S_RVALID=0;S_RID=0;S_RDATA=0;S_RLAST=0;S_RRESP=0;
        if(!$value$plusargs("case=%d",error_case)) error_case=0;
        repeat(3) tick();ARESETn=1;tick();
        case(error_case)
            0: begin
                accept_aw(1);M0_WDATA='h55;M0_WLAST=1;M0_WVALID=1;
                do @(posedge ACLK);while(!M0_WREADY);
                @(negedge ACLK);M0_WVALID=0;M0_WLAST=0;
                assert(protocol_error_wlast) else $fatal(1,"PROTOCOL_WLAST_NOT_DETECTED");
            end
            1: begin
                accept_aw(0);S_BID={1'b0,4'h4};S_BVALID=1;
                do @(posedge ACLK);while(!S_BREADY);
                @(negedge ACLK);S_BVALID=0;
                assert(protocol_error_bid_order) else $fatal(1,"PROTOCOL_BID_NOT_DETECTED");
            end
            2: begin
                accept_ar(1);S_RID={1'b0,4'h5};S_RLAST=1;S_RVALID=1;
                do @(posedge ACLK);while(!S_RREADY);
                @(negedge ACLK);S_RVALID=0;S_RLAST=0;
                assert(protocol_error_rlast) else $fatal(1,"PROTOCOL_RLAST_NOT_DETECTED");
            end
            3: begin
                accept_ar(0);S_RID={1'b0,4'h6};S_RLAST=1;S_RVALID=1;
                do @(posedge ACLK);while(!S_RREADY);
                @(negedge ACLK);S_RVALID=0;S_RLAST=0;
                assert(protocol_error_rid_order) else $fatal(1,"PROTOCOL_RID_NOT_DETECTED");
            end
            4: begin
                // Port-level admission prevents overflow. Force the internal
                // defensive condition for one edge to cover its sticky flag.
                force dut.wr_count=1;force dut.aw_hs=1;tick();
                release dut.aw_hs;release dut.wr_count;
                assert(protocol_error_outstanding_overflow) else $fatal(1,"PROTOCOL_AW_OVERFLOW_NOT_DETECTED");
            end
            5: begin
                force dut.rd_count=1;force dut.ar_hs=1;tick();
                release dut.ar_hs;release dut.rd_count;
                assert(protocol_error_outstanding_overflow) else $fatal(1,"PROTOCOL_AR_OVERFLOW_NOT_DETECTED");
            end
            6: begin
                accept_aw(0);M0_WDATA='h66;M0_WLAST=0;M0_WVALID=1;
                do @(posedge ACLK);while(!M0_WREADY);
                @(negedge ACLK);M0_WVALID=0;
                assert(protocol_error_wlast) else $fatal(1,"PROTOCOL_FINAL_WLAST_NOT_DETECTED");
            end
            7: begin
                accept_ar(0);S_RID={1'b0,4'h5};S_RLAST=0;S_RVALID=1;
                do @(posedge ACLK);while(!S_RREADY);
                @(negedge ACLK);S_RVALID=0;
                assert(protocol_error_rlast) else $fatal(1,"PROTOCOL_FINAL_RLAST_NOT_DETECTED");
            end
            8: begin
                S_BID={1'b0,4'h3};S_BVALID=1;
                do @(posedge ACLK);while(!S_BREADY);
                @(negedge ACLK);S_BVALID=0;
                assert(protocol_error_bid_order) else $fatal(1,"PROTOCOL_EMPTY_B_NOT_DETECTED");
            end
            9: begin
                S_RID={1'b0,4'h5};S_RLAST=1;S_RVALID=1;
                do @(posedge ACLK);while(!S_RREADY);
                @(negedge ACLK);S_RVALID=0;S_RLAST=0;
                assert(protocol_error_rid_order) else $fatal(1,"PROTOCOL_EMPTY_R_NOT_DETECTED");
            end
            default:$fatal(1,"unknown protocol detector case");
        endcase
        // All protocol flags are sticky until reset.
        repeat(3) tick();
        case(error_case)
            0,6: assert(protocol_error_wlast);
            1,8: assert(protocol_error_bid_order);
            2,7: assert(protocol_error_rlast);
            3,9: assert(protocol_error_rid_order);
            4,5: assert(protocol_error_outstanding_overflow);
            default:$fatal(1,"unknown sticky-check case");
        endcase
        $display("PASS AXI protocol detector case=%0d",error_case);$finish;
    end
    initial begin #10000;$fatal(1,"AXI protocol detector timeout");end
endmodule
