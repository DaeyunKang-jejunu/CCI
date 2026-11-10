`include "cci_pkg.sv"
// Ordered coherent M1 read ingress.  Every conventional accepted read owns a tracker from
// acceptance through the real RLAST handshake.  CleanInvalid completion (and
// any dirty writeback B handled by the ACE service) releases the entry to AXI.
module coh_read_ingress import cci_pkg::*; #(
    parameter int ID_WIDTH=4,
    parameter int DEPTH=16,
    parameter int TRACKERS=16,
    parameter bit USE_RANGE=0,
    parameter int IW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int TW=(TRACKERS<2 ? 1 : $clog2(TRACKERS))
)(
    input  logic clk, rst_n,
    input  logic in_valid,
    output logic in_ready,
    input  logic [ID_WIDTH-1:0] in_id,
    input  logic [63:0] in_addr,
    input  logic [7:0] in_len,
    output logic out_valid,
    input  logic out_ready,
    output logic [ID_WIDTH-1:0] out_id,
    output logic [63:0] out_addr,
    output logic [7:0] out_len,
    input  logic retire_valid,
    input  logic [1:0] retire_resp,

    input  range_ctx_t range_ctx,
    input  logic read_release,
    output logic range_reserve_fire,
    output logic [5:0] range_reserve_idx,
    output logic range_done_fire,
    output logic [5:0] range_done_idx,

    output logic nq_valid,
    input  logic nq_ready,
    output logic [63:0] nq_addr,
    output logic [TW-1:0] nq_tracker,
    input  logic nq_rsp_valid,
    output logic nq_rsp_ready,
    input  logic [TW-1:0] nq_rsp_tracker,
    input  logic [4:0] nq_rsp_resp,

    input  logic m0_ar_probe_valid,
    input  logic [63:0] m0_ar_probe_addr,
    input  logic m0_aw_probe_valid,
    input  logic [63:0] m0_aw_probe_addr,
    input  logic ace_ar_probe_valid,
    input  logic [63:0] ace_ar_probe_addr,
    input  logic ace_aw_probe_valid,
    input  logic [63:0] ace_aw_probe_addr,
    output logic m0_ar_hazard,
    output logic m0_aw_hazard,
    output logic ace_ar_hazard,
    output logic ace_aw_hazard,
    input  logic m1_aw_probe_valid,
    input  logic [63:0] m1_aw_probe_addr,
    output logic m1_aw_hazard,
    output logic [$clog2(DEPTH+1)-1:0] ingress_count,
    output logic [$clog2(TRACKERS+1)-1:0] tracker_count,
    output logic tracker_full_stall,
    output logic config_fault,
    output logic service_fault,
    output logic read_error
);
    typedef struct packed {
        logic valid, allocated, issued, path_range;
        logic [ID_WIDTH-1:0] id;
        logic [63:0] addr;
        logic [7:0] len;
        logic [TW-1:0] tracker;
    } entry_t;
    typedef struct packed {
        logic valid, snoop_issued, snoop_done;
        logic [IW-1:0] entry;
    } tracker_t;

    entry_t entries[DEPTH];
    tracker_t trackers[TRACKERS];
    logic [IW-1:0] tail, issue_head, retire_head;
    logic alloc_found, free_found, sched_found, nq_hold;
    logic [IW-1:0] alloc_entry;
    logic [TW-1:0] free_tracker, sched_tracker, nq_tracker_q;
    logic [63:0] nq_addr_q;
    logic [DEPTH-1:0] need_alloc;

    wire malformed=in_addr[5:0]!=0 || in_len!=8'd3;
    wire classify_range=USE_RANGE && range_ctx.valid && range_ctx.op==RANGE_OP_READ &&
        in_addr[63:12]==range_ctx.base_page && range_ctx.line_mask[in_addr[11:6]] &&
        !range_ctx.wr_issued_mask[in_addr[11:6]];
    wire push=in_valid && in_ready;
    wire issue=out_valid && out_ready;
    wire retire=retire_valid;
    wire nq_fire=nq_valid && nq_ready;
    wire nq_rsp_fire=nq_rsp_valid && nq_rsp_ready;

    function automatic [IW-1:0] inc(input [IW-1:0] p);
        return p==IW'(DEPTH-1) ? '0 : p+1'b1;
    endfunction

    assign in_ready=int'(ingress_count)<DEPTH && !config_fault && !service_fault &&
        (!in_valid || !malformed);
    assign out_valid=entries[issue_head].valid && !entries[issue_head].issued &&
        (entries[issue_head].path_range ? read_release :
         (entries[issue_head].allocated && trackers[entries[issue_head].tracker].snoop_done));
    assign out_id=entries[issue_head].id;
    assign out_addr=entries[issue_head].addr;
    assign out_len=entries[issue_head].len;
    assign nq_valid=nq_hold;
    assign nq_addr=nq_addr_q;
    assign nq_tracker=nq_tracker_q;
    assign nq_rsp_ready=1'b1; // accepted service work must drain even after fault
    assign tracker_full_stall=alloc_found && !free_found;
    assign range_reserve_fire=push && classify_range;
    assign range_reserve_idx=in_addr[11:6];
    assign range_done_fire=retire && entries[retire_head].path_range;
    assign range_done_idx=entries[retire_head].addr[11:6];

    always_comb begin
        alloc_found=0; alloc_entry=0; free_found=0; free_tracker=0;
        sched_found=0; sched_tracker=0; tracker_count=0; need_alloc='0;
        m0_ar_hazard=0; m0_aw_hazard=0; ace_ar_hazard=0; ace_aw_hazard=0; m1_aw_hazard=0;
        for(int t=0;t<TRACKERS;t++) begin
            if(trackers[t].valid) begin
                tracker_count=tracker_count+1'b1;
                if(!sched_found && !trackers[t].snoop_issued) begin
                    sched_found=1; sched_tracker=TW'(t);
                end
            end else if(!free_found) begin
                free_found=1; free_tracker=TW'(t);
            end
        end
        for(int e=0;e<DEPTH;e++) begin
            if(entries[e].valid) begin
                need_alloc[e]=!entries[e].path_range && !entries[e].allocated;
                if(m0_ar_probe_valid && entries[e].addr[63:6]==m0_ar_probe_addr[63:6]) m0_ar_hazard=1;
                if(m0_aw_probe_valid && entries[e].addr[63:6]==m0_aw_probe_addr[63:6]) m0_aw_hazard=1;
                if(ace_ar_probe_valid && entries[e].addr[63:6]==ace_ar_probe_addr[63:6]) ace_ar_hazard=1;
                if(ace_aw_probe_valid && entries[e].addr[63:6]==ace_aw_probe_addr[63:6]) ace_aw_hazard=1;
                if(m1_aw_probe_valid && entries[e].addr[63:6]==m1_aw_probe_addr[63:6]) m1_aw_hazard=1;
            end
        end
        // A READ range owns every unfinished target line before its M1 AR is
        // accepted, so cached accesses and M1 writes cannot refill/modify it
        // between CleanInvalid and the corresponding RLAST.
        if(USE_RANGE && range_ctx.valid && range_ctx.op==RANGE_OP_READ) begin
            if(m0_ar_probe_valid && m0_ar_probe_addr[63:12]==range_ctx.base_page &&
               range_ctx.line_mask[m0_ar_probe_addr[11:6]] && !range_ctx.done_mask[m0_ar_probe_addr[11:6]]) m0_ar_hazard=1;
            if(m0_aw_probe_valid && m0_aw_probe_addr[63:12]==range_ctx.base_page &&
               range_ctx.line_mask[m0_aw_probe_addr[11:6]] && !range_ctx.done_mask[m0_aw_probe_addr[11:6]]) m0_aw_hazard=1;
            if(ace_ar_probe_valid && ace_ar_probe_addr[63:12]==range_ctx.base_page &&
               range_ctx.line_mask[ace_ar_probe_addr[11:6]] && !range_ctx.done_mask[ace_ar_probe_addr[11:6]]) ace_ar_hazard=1;
            if(ace_aw_probe_valid && ace_aw_probe_addr[63:12]==range_ctx.base_page &&
               range_ctx.line_mask[ace_aw_probe_addr[11:6]] && !range_ctx.done_mask[ace_aw_probe_addr[11:6]]) ace_aw_hazard=1;
            if(m1_aw_probe_valid && m1_aw_probe_addr[63:12]==range_ctx.base_page &&
               range_ctx.line_mask[m1_aw_probe_addr[11:6]] && !range_ctx.done_mask[m1_aw_probe_addr[11:6]]) m1_aw_hazard=1;
        end
        // Oldest unallocated entry, with retire_head defining ring age.
        for(int e=DEPTH-1;e>=0;e--) if(need_alloc[e]) begin
            alloc_found=1; alloc_entry=IW'(e);
        end
        for(int e=DEPTH-1;e>=0;e--) if(IW'(e)>=retire_head && need_alloc[e])
            alloc_entry=IW'(e);
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            tail<=0; issue_head<=0; retire_head<=0; ingress_count<=0;
            nq_hold<=0; nq_tracker_q<=0; nq_addr_q<=0;
            config_fault<=0; service_fault<=0; read_error<=0;
            for(int e=0;e<DEPTH;e++) entries[e]<='0;
            for(int t=0;t<TRACKERS;t++) trackers[t]<='0;
        end else begin
            if(in_valid && malformed) config_fault<=1;
            if(push) begin
                entries[tail]<='{valid:1'b1,allocated:1'b0,issued:1'b0,path_range:classify_range,
                    id:in_id,addr:in_addr,len:in_len,tracker:'0};
                tail<=inc(tail);
            end
            if(alloc_found && free_found) begin
                entries[alloc_entry].allocated<=1;
                entries[alloc_entry].tracker<=free_tracker;
                trackers[free_tracker]<='{valid:1'b1,snoop_issued:1'b0,
                    snoop_done:1'b0,entry:alloc_entry};
            end
            if(!nq_hold && sched_found) begin
                nq_hold<=1; nq_tracker_q<=sched_tracker;
                nq_addr_q<={entries[trackers[sched_tracker].entry].addr[63:6],6'b0};
            end
            if(nq_fire) begin
                nq_hold<=0;
                trackers[nq_tracker_q].snoop_issued<=1;
            end
            if(nq_rsp_fire) begin
                if(int'(nq_rsp_tracker)>=TRACKERS || !trackers[nq_rsp_tracker].valid ||
                   !trackers[nq_rsp_tracker].snoop_issued) service_fault<=1;
                else begin
                    trackers[nq_rsp_tracker].snoop_done<=1;
                    if(nq_rsp_resp[1]) service_fault<=1;
                end
            end
            if(issue) begin
                entries[issue_head].issued<=1;
                issue_head<=inc(issue_head);
            end
            if(retire) begin
                if(!entries[retire_head].valid || !entries[retire_head].issued) service_fault<=1;
                else begin
                    if(!entries[retire_head].path_range)
                        trackers[entries[retire_head].tracker].valid<=0;
                    entries[retire_head].valid<=0;
                    retire_head<=inc(retire_head);
                    if(retire_resp!=0) read_error<=1;
                end
            end
            unique case({push,retire})
                2'b10:ingress_count<=ingress_count+1'b1;
                2'b01:ingress_count<=ingress_count-1'b1;
                default:;
            endcase
        end
    end

    initial begin
        assert(DEPTH>0 && TRACKERS>0) else $fatal(1,"COH_READ_GEOMETRY");
        assert(TRACKERS<=DEPTH) else $fatal(1,"COH_READ_TRACKERS_LE_DEPTH");
    end
`ifndef SYNTHESIS
    always @(posedge clk) if(rst_n) begin
        assert(int'(ingress_count)<=DEPTH) else $fatal(1,"COH_READ_INGRESS_OVERFLOW");
        assert(int'(tracker_count)<=TRACKERS) else $fatal(1,"COH_READ_TRACKER_OVERFLOW");
        if(issue) assert(entries[issue_head].len==3 && entries[issue_head].addr[5:0]==0)
            else $fatal(1,"COH_READ_FORMAT");
        if(issue && entries[issue_head].path_range) assert(read_release)
            else $fatal(1,"RANGE_READ_EARLY_ISSUE");
    end
    assert property(@(posedge clk) disable iff(!rst_n) nq_valid && !nq_ready |=>
        nq_valid && $stable({nq_addr,nq_tracker})) else $fatal(1,"COH_READ_NQ_STABILITY");
`endif
endmodule
