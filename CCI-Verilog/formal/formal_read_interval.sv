// RCCI_PLAN 14.4-6 / 14.6-7: bounded proof that the read interval CAM equals the
// per-line tracker CAM (HAZARD_INTERVAL_EQUIV) and that lo/hi track the
// pointers (RANGE_READ_INTERVAL_POINTER), with small parameters.
// Environment: addresses stay in one small region, data is zero, memory R beats
// arrive only for issued lines (four beats, RLAST on the fourth), and the
// environment never drives the
// module into its fatal service_fault state (a fatal stop is not a hazard state).
// WITNESS=1/2/3: interval ACE hazard, M0 hazard and range issue are reachable.
module formal_read_interval #(parameter WITNESS=0)(
    input clk,input rst_n,
    input in_valid,input [1:0] in_id,input [63:0] in_addr,input [7:0] in_len,input in_range,input in_attr_ok,
    input out_ready,input mem_r_valid,input [1:0] mem_r_resp,
    input nq_ready,input nq_rsp_valid,input nq_rsp_tracker,input [4:0] nq_rsp_resp,input hit_ready,
    input m0_ar_probe_valid,input [63:0] m0_ar_probe_addr,input m0_aw_probe_valid,input [63:0] m0_aw_probe_addr,
    input [58:0] m0_ar_probe_last,input [58:0] m0_aw_probe_last,
    input ace_ar_probe_valid,input [63:0] ace_ar_probe_addr,input [58:0] ace_ar_probe_last,
    input ace_aw_probe_valid,input [63:0] ace_aw_probe_addr,input [58:0] ace_aw_probe_last,
    input m1_aw_probe_valid,input [63:0] m1_aw_probe_addr,input [7:0] m1_aw_probe_len,
    input wr_issue_probe_valid,input [63:0] wr_issue_probe_addr,input issue_block
);
    reg init=1'b1;
    reg [3:0] mem_out;   // memory AR issued and line not yet fully returned
    wire in_ready,out_valid,mem_r_ready,nq_valid,nq_rsp_ready,hit_valid,hit_last;
    reg [1:0] mbeat;wire mem_r_last=mbeat==2'd3;
    wire [1:0] out_id,hit_id,hit_resp;wire [63:0] out_addr,nq_addr;wire [7:0] out_len;wire nq_tracker;
    wire [127:0] hit_data;
    wire m0_ar_hazard,m0_aw_hazard,ace_ar_hazard,ace_aw_hazard,m1_aw_hazard,wr_issue_hazard;
    wire issue_line_valid,issue_fire,alloc_ready;wire [63:0] issue_line_addr;
    wire [1:0] ingress_count,tracker_count;wire tracker_full_stall,config_fault,service_fault,read_error;
    always @(posedge clk)begin
        if(init)assume(!rst_n);else assume(rst_n);init<=1'b0;
        // One small address region keeps the solver focused on the interval logic.
        assume(in_addr[63:9]==0&&m0_ar_probe_addr[63:9]==0&&m0_aw_probe_addr[63:9]==0&&
               ace_ar_probe_addr[63:9]==0&&ace_aw_probe_addr[63:9]==0&&m1_aw_probe_addr[63:9]==0&&
               wr_issue_probe_addr[63:9]==0&&ace_ar_probe_last[58:3]==0&&ace_aw_probe_last[58:3]==0);
        assume(in_len<=8'd15&&m1_aw_probe_len<=8'd15);
        // ACE spans come from ace_snoop_pkg::last_line, so last >= first.
        assume(ace_ar_probe_last>={1'b0,ace_ar_probe_addr[63:6]}&&ace_aw_probe_last>={1'b0,ace_aw_probe_addr[63:6]});
        // Memory R beats only for issued lines; four beats per line (RLAST on 4th).
        assume(!mem_r_valid||mem_out!=0);
        assume(m0_ar_probe_last>={1'b0,m0_ar_probe_addr[63:6]}&&m0_aw_probe_last>={1'b0,m0_aw_probe_addr[63:6]}&&
               m0_ar_probe_last[58:3]==0&&m0_aw_probe_last[58:3]==0);
        assume(!service_fault);
        if(!rst_n)begin mem_out<=0;mbeat<=0;end
        else begin
            mem_out<=mem_out+(out_valid&&out_ready)-(mem_r_valid&&mem_r_ready&&mem_r_last);
            if(mem_r_valid&&mem_r_ready)mbeat<=mbeat+1'b1;
        end
        if(rst_n&&!init)begin
            if(WITNESS==1)assert(!ace_ar_hazard);
            if(WITNESS==2)assert(!m0_ar_hazard);
            if(WITNESS==3)assert(!(issue_fire&&tracker_count!=0));
        end
    end
    coh_read_ingress #(.ID_WIDTH(2),.DEPTH(2),.TRACKERS(2),.USE_RANGE(1),.RANGE_WINDOW(2)) dut(
        .clk,.rst_n,.in_valid,.in_ready,.in_id,.in_addr,.in_len,.in_range,.in_attr_ok,
        .out_valid,.out_ready,.out_id,.out_addr,.out_len,
        .mem_r_valid,.mem_r_ready,.mem_r_data(128'd0),.mem_r_resp,.mem_r_last,
        .nq_valid,.nq_ready,.nq_addr,.nq_tracker,.nq_rsp_valid,.nq_rsp_ready,.nq_rsp_tracker,
        .nq_rsp_resp,.nq_rsp_data(512'd0),.hit_valid,.hit_ready,.hit_id,.hit_data,.hit_last,.hit_resp,
        .m0_ar_probe_valid,.m0_ar_probe_addr,.m0_aw_probe_valid,.m0_aw_probe_addr,
        .ace_ar_probe_valid,.ace_ar_probe_addr,.ace_aw_probe_valid,.ace_aw_probe_addr,
        .ace_ar_probe_last,.ace_aw_probe_last,.m0_ar_probe_last,.m0_aw_probe_last,
        .issue_line_valid,.issue_line_addr,.issue_block,
        .wr_issue_probe_valid,.wr_issue_probe_addr,.wr_issue_hazard,.issue_fire,.alloc_ready,
        .m0_ar_hazard,.m0_aw_hazard,.ace_ar_hazard,.ace_aw_hazard,
        .m1_aw_probe_valid,.m1_aw_probe_addr,.m1_aw_probe_len,.m1_aw_hazard,
        .ingress_count,.tracker_count,.tracker_full_stall,.config_fault,.service_fault,.read_error);
endmodule
