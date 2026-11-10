`include "cci_pkg.sv"
// Shared B1/P ingress, ordered tracker allocator, AC scheduler and AC-order FIFO.
// issue_head advances at downstream AW; retire_head advances only on actual B.
// Consequently metadata remains live throughout W and B backpressure.
module coh_write_ingress import cci_pkg::*; #(
    parameter bit USE_RANGE=0,
    parameter bit ENABLE_RANGE_READ=0,
    parameter int ID_WIDTH=4, DEPTH=16, TRACKERS=16, AC_DEPTH=TRACKERS,
    parameter int RANGE_MAX_ACTIVE_CYCLES=100000,
    parameter int IW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int TW=(TRACKERS<2 ? 1 : $clog2(TRACKERS)),
    parameter int FW=(AC_DEPTH<2 ? 1 : $clog2(AC_DEPTH))
)(
    input logic clk, rst_n,
    input logic aw_valid,
    output logic aw_ready,
    input logic [ID_WIDTH-1:0] aw_id,
    input logic [63:0] aw_addr,
    input logic [7:0] aw_len,
    output logic out_valid,
    input logic out_ready,
    output logic [ID_WIDTH-1:0] out_id,
    output logic [63:0] out_addr,
    output logic [7:0] out_len,
    output logic [IW-1:0] out_idx,
    input logic b_fire,
    input logic [IW-1:0] b_idx,
    input logic [63:0] m0_araddr, m0_awaddr,
    output logic ar_hazard, aw_hazard,
    input logic setup_valid,
    output logic setup_ready,
    input logic [63:0] setup_addr, setup_mask,
    input logic [6:0] setup_count,
    input logic [3:0] setup_source,
    input logic [1:0] setup_op,
    output logic setup_error,
    input logic axi_idle, snoop_idle,
    output logic admission_freeze,
    output logic ac_valid,
    input logic ac_ready,
    output logic [63:0] ac_addr,
    output logic [3:0] ac_snoop,
    input logic cr_valid,
    output logic cr_ready,
    input logic [1:0] cr_resp,
    input logic read_reserve_fire,
    input logic [5:0] read_reserve_idx,
    input logic read_done_fire,
    input logic [5:0] read_done_idx,
    output logic read_prep_valid,
    input logic read_prep_ready,
    output logic [63:0] read_prep_addr,
    input logic read_prep_rsp_valid,
    output logic read_prep_rsp_ready,
    input logic [4:0] read_prep_rsp,
    output range_ctx_t range_ctx,
    output logic write_release,
    output logic read_release,
    output logic range_fault,
    output logic [$clog2(DEPTH+1)-1:0] ingress_count,
    output logic [$clog2(TRACKERS+1)-1:0] tracker_count,
    output logic tracker_full_stall
);
    typedef struct packed {
        logic valid, allocated, issued;
        logic [ID_WIDTH-1:0] id;
        logic [63:0] addr;
        logic [7:0] len;
        logic [TW-1:0] tracker;
    } ingress_t;
    typedef struct packed {
        logic valid, ac_issued, snoop_done;
        logic [IW-1:0] ingress_idx;
    } tracker_t;
    ingress_t entries [DEPTH];
    tracker_t trackers [TRACKERS];
    wire [DEPTH-1:0] path;
    logic [IW-1:0] tail, issue_head, retire_head;
    logic [TW-1:0] ac_fifo [AC_DEPTH];
    logic [FW-1:0] ac_head, ac_tail;
    logic [$clog2(AC_DEPTH+1)-1:0] ac_count;
    logic ac_hold;
    logic [TW-1:0] ac_selected;
    logic [63:0] ac_payload;
    logic alloc_found, free_found, sched_found;
    logic [IW-1:0] alloc_idx;
    logic [TW-1:0] free_idx, sched_idx;
    logic pending, activate, classify_range;
    logic [51:0] pending_page, decoded_page;
    logic [63:0] pending_mask, decoded_mask;
    logic [3:0] pending_source;
    range_op_e pending_op;
    logic decoded_valid;
    logic range_acvalid, range_acready, range_crready;
    logic [63:0] range_acaddr;
    logic [3:0] range_acsnoop;
    logic range_arhazard, range_awhazard;
    wire invalidating = USE_RANGE && range_ctx.valid && range_ctx.state == ST_INVALIDATING;
    wire write_preparing = invalidating && range_ctx.op == RANGE_OP_WRITE;
    wire push = aw_valid && aw_ready;
    wire issue = out_valid && out_ready;
    wire conv_acfire = !write_preparing && ac_valid && ac_ready;
    wire conv_crfire = !write_preparing && cr_valid && cr_ready;
    wire setup_fire = setup_valid && setup_ready;
    function automatic [IW-1:0] inc(input [IW-1:0] p);
        return p == IW'(DEPTH-1) ? '0 : p+1'b1;
    endfunction
    function automatic [FW-1:0] finc(input [FW-1:0] p);
        return p == FW'(AC_DEPTH-1) ? '0 : p+1'b1;
    endfunction
    assign aw_ready = int'(ingress_count) < DEPTH && !admission_freeze;
    assign out_valid = entries[issue_head].valid && !entries[issue_head].issued &&
                       (path[issue_head] ? write_release :
                        (entries[issue_head].allocated && trackers[entries[issue_head].tracker].snoop_done));
    assign out_id = entries[issue_head].id;
    assign out_addr = entries[issue_head].addr;
    assign out_len = entries[issue_head].len;
    assign out_idx = issue_head;
    assign tracker_full_stall = alloc_found && !free_found;

    // Physical-index eligibility followed by a two-part rotating priority
    // encoder. [retire_head, DEPTH) is older than [0, retire_head). This avoids
    // rotating whole address records through variable-index muxes just to find
    // the oldest candidate, while preserving the exact same age policy.
    logic [DEPTH-1:0] need_alloc, need_ac;
    always_comb begin
        alloc_found=0; alloc_idx=0; free_found=0; free_idx=0;
        sched_found=0; sched_idx=0; tracker_count=0;
        need_alloc='0; need_ac='0;
        ar_hazard=range_arhazard; aw_hazard=range_awhazard;
        for (int t=0;t<TRACKERS;t++) begin
            if (trackers[t].valid) begin
                tracker_count=tracker_count+1'b1;
            end else if (!free_found) begin free_found=1; free_idx=TW'(t); end
        end
        for (int e=0;e<DEPTH;e++) begin
            if (entries[e].valid && !path[e]) begin
                need_alloc[e]=!entries[e].allocated;
                need_ac[e]=entries[e].allocated && !trackers[entries[e].tracker].ac_issued &&
                    !(ac_hold && entries[e].tracker == ac_selected);
                // Protect accepted conventional writes even before allocation.
                ar_hazard |= entries[e].addr[63:6] == m0_araddr[63:6];
                aw_hazard |= entries[e].addr[63:6] == m0_awaddr[63:6];
            end
        end
        for (int e=DEPTH-1;e>=0;e--) begin
            if (need_alloc[e]) begin alloc_found=1; alloc_idx=IW'(e); end
            if (need_ac[e]) begin sched_found=1; sched_idx=entries[e].tracker; end
        end
        // Override wrapped candidates with the oldest pre-wrap candidate.
        for (int e=DEPTH-1;e>=0;e--) begin
            if (IW'(e)>=retire_head) begin
                if (need_alloc[e]) alloc_idx=IW'(e);
                if (need_ac[e]) sched_idx=entries[e].tracker;
            end
        end
    end
    assign ac_valid = write_preparing ? range_acvalid : ac_hold;
    assign ac_addr = write_preparing ? range_acaddr : ac_payload;
    assign ac_snoop = write_preparing ? range_acsnoop : ACSNOOP_MAKEINVALID;
    assign range_acready = write_preparing && ac_ready;
    assign cr_ready = write_preparing ? range_crready : ac_count != 0;

    if (USE_RANGE) begin : proposed
        logic [DEPTH-1:0] path_q;
        assign path = path_q;
        always_ff @(posedge clk or negedge rst_n)
            if (!rst_n) path_q <= 0;
            else if (push) path_q[tail] <= classify_range;
        cci_range_req_decoder decoder (
            .req_base_addr(setup_addr), .req_line_count(setup_count), .req_line_mask(setup_mask),
            .d_base_page(decoded_page), .d_line_mask(decoded_mask), .valid(decoded_valid)
        );
        assign setup_ready = !pending && !range_ctx.valid;
        assign admission_freeze = pending || setup_fire;
        assign activate = pending && ingress_count == 0 && tracker_count == 0 &&
                          ac_count == 0 && !ac_hold && axi_idle && snoop_idle;
        assign classify_range = range_ctx.valid && range_ctx.op == RANGE_OP_WRITE &&
                                aw_addr[63:12] == range_ctx.base_page &&
                                range_ctx.line_mask[aw_addr[11:6]] &&
                                !range_ctx.wr_issued_mask[aw_addr[11:6]];
        always_ff @(posedge clk or negedge rst_n) begin
            if (!rst_n) begin
                pending<=0; pending_page<=0; pending_mask<=0; pending_source<=0;
                pending_op<=RANGE_OP_WRITE; setup_error<=0;
            end else begin
                setup_error<=0;
                if (setup_fire) begin
                    if (decoded_valid && setup_source == 4'd1 &&
                        (setup_op == RANGE_OP_WRITE ||
                         (ENABLE_RANGE_READ && setup_op == RANGE_OP_READ))) begin
                        pending<=1; pending_page<=decoded_page;
                        pending_mask<=decoded_mask; pending_source<=setup_source;
                        pending_op<=range_op_e'(setup_op);
                    end else setup_error<=1;
                end
                if (activate) pending<=0;
            end
        end
        cci_range_rim_tracker #(.RANGE_MAX_ACTIVE_CYCLES(RANGE_MAX_ACTIVE_CYCLES)) rim (
            .clk, .rst_n, .alloc_en(activate), .d_base_page(pending_page),
            .d_line_mask(pending_mask), .d_source_id(pending_source), .d_op(pending_op),
            .reserve_fire((push && classify_range) || read_reserve_fire),
            .reserve_idx(read_reserve_fire ? read_reserve_idx : aw_addr[11:6]),
            .b_fire((b_fire && path[b_idx]) || read_done_fire),
            .b_idx(read_done_fire ? read_done_idx : entries[b_idx].addr[11:6]),
            .ac_valid(range_acvalid), .ac_ready(range_acready),
            .ac_addr(range_acaddr), .ac_snoop(range_acsnoop),
            .cr_valid(cr_valid && write_preparing), .cr_ready(range_crready), .cr_resp,
            .rd_prep_valid(read_prep_valid), .rd_prep_ready(read_prep_ready),
            .rd_prep_addr(read_prep_addr), .rd_prep_rsp_valid(read_prep_rsp_valid),
            .rd_prep_rsp_ready(read_prep_rsp_ready), .rd_prep_rsp(read_prep_rsp),
            .ctx(range_ctx), .write_release, .read_release, .range_fault
        );
        cci_range_hazard_checker ar_check (
            .ctx(range_ctx), .probe_valid(1'b1), .probe_addr(m0_araddr),
            .probe_source_id(4'd0), .probe_stall(range_arhazard)
        );
        cci_range_hazard_checker aw_check (
            .ctx(range_ctx), .probe_valid(1'b1), .probe_addr(m0_awaddr),
            .probe_source_id(4'd0), .probe_stall(range_awhazard)
        );
    end else begin : conventional
        assign path='0;
        assign range_ctx='0;
        assign {setup_ready,setup_error,admission_freeze,activate,classify_range}=0;
        assign {range_acvalid,range_acaddr,range_acsnoop,range_crready,write_release,read_release,range_fault}=0;
        assign {read_prep_valid,read_prep_addr,read_prep_rsp_ready}=0;
        assign {range_arhazard,range_awhazard}=0;
    end

    always_ff @(posedge clk)
        if (rst_n && conv_acfire) ac_fifo[ac_tail] <= ac_selected;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tail<=0; issue_head<=0; retire_head<=0; ingress_count<=0;
            ac_head<=0; ac_tail<=0; ac_count<=0; ac_hold<=0; ac_selected<=0; ac_payload<=0;
            for (int i=0;i<DEPTH;i++) entries[i]<='0;
            for (int t=0;t<TRACKERS;t++) trackers[t]<='0;
        end else begin
            if (push) begin
                entries[tail] <= '{valid:1'b1, allocated:1'b0, issued:1'b0,
                    id:aw_id, addr:aw_addr, len:aw_len, tracker:'0};
                tail<=inc(tail);
            end
            if (alloc_found && free_found) begin
                entries[alloc_idx].allocated<=1; entries[alloc_idx].tracker<=free_idx;
                trackers[free_idx]<='{valid:1'b1, ac_issued:1'b0, snoop_done:1'b0,
                    ingress_idx:alloc_idx};
            end
            // Retire and refill the held AC in the same cycle. The next payload
            // reserves one FIFO slot after this cycle's AC/CR handshakes.
            // Exclude the currently held tracker from the scheduler to avoid
            // issuing it twice before its ac_issued register is updated.
            if (!write_preparing && (!ac_hold || conv_acfire)) begin
                ac_hold<=0;
                if (sched_found && int'(ac_count)+int'(conv_acfire)-int'(conv_crfire) < AC_DEPTH) begin
                    ac_hold<=1; ac_selected<=sched_idx;
                    ac_payload<={entries[trackers[sched_idx].ingress_idx].addr[63:6],6'b0};
                end
            end
            if (conv_acfire) begin
                trackers[ac_selected].ac_issued<=1;
                ac_tail<=finc(ac_tail);
            end
            if (conv_crfire) begin
                trackers[ac_fifo[ac_head]].snoop_done<=1; ac_head<=finc(ac_head);
            end
            case ({conv_acfire,conv_crfire})
                2'b10: ac_count<=ac_count+1'b1;
                2'b01: ac_count<=ac_count-1'b1;
                default: ;
            endcase
            if (issue) begin entries[issue_head].issued<=1; issue_head<=inc(issue_head); end
            if (b_fire) begin
                if (!path[b_idx]) trackers[entries[b_idx].tracker].valid<=0;
                entries[b_idx].valid<=0; retire_head<=retire_head;
            end
            case ({push,b_fire})
                2'b10: ingress_count<=ingress_count+1'b1;
                2'b01: ingress_count<=ingress_count-1'b1;
                default: ;
            endcase
        end
    end
`ifndef SYNTHESIS
    initial assert (DEPTH>0 && TRACKERS>0 && AC_DEPTH>0) else $fatal(1,"coherence depths");
    always @(posedge clk) if (rst_n) begin
        assert (int'(ingress_count)<=DEPTH && int'(ac_count)<=AC_DEPTH && int'(ac_count)<=TRACKERS)
            else $fatal(1,"queue bounds");
        if (push) assert (aw_addr[5:0]==0 && aw_len==3)
            else $fatal(1,"M1 coherent writes require aligned 64-byte, four-beat bursts");
        if (alloc_found && free_found) begin
            assert (!path[alloc_idx]) else $fatal(1,"range allocated conventional tracker");
            for (int age=0;age<DEPTH;age++) begin
                automatic int e=(int'(retire_head)+age)%DEPTH;
                if (age < ((int'(alloc_idx)-int'(retire_head)+DEPTH)%DEPTH))
                    assert (!entries[e].valid || path[e] || entries[e].allocated)
                        else $fatal(1,"younger tracker allocation overtook older conventional entry");
            end
        end
        // Every tracker is backed by one live conventional ingress entry;
        // the entry CAM therefore covers both allocated and unallocated writes.
        for (int t=0;t<TRACKERS;t++) if (trackers[t].valid)
            assert (entries[trackers[t].ingress_idx].valid &&
                    !path[trackers[t].ingress_idx] &&
                    entries[trackers[t].ingress_idx].allocated &&
                    entries[trackers[t].ingress_idx].tracker == TW'(t))
                else $fatal(1,"TRACKER_INGRESS_LIFETIME");
        if (b_fire) assert (b_idx==retire_head && entries[b_idx].valid && entries[b_idx].issued)
            else $fatal(1,"B ingress association/lifetime");
        if (conv_acfire) assert (int'(ac_count)<AC_DEPTH && !write_preparing && trackers[ac_selected].valid)
            else $fatal(1,"AC FIFO overflow/source");
        if (conv_crfire) assert (trackers[ac_fifo[ac_head]].ac_issued && cr_resp==0)
            else $fatal(1,"CR association/response");
        if (issue && path[issue_head]) assert (write_release) else $fatal(1,"range early issue");
    end
`endif
endmodule
