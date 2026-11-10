`include "cci_pkg.sv"
// Ordered coherent M1 read ingress. A ReadRange request owns one ingress entry
// for the whole burst and up to RANGE_WINDOW line trackers. Internal memory
// reads are one cache line; miss_last marks the external range RLAST.
module coh_read_ingress import cci_pkg::*; #(
    parameter int ID_WIDTH=4, DEPTH=16, TRACKERS=16,
    parameter bit USE_RANGE=0,
    parameter int RANGE_WINDOW=TRACKERS,
    parameter int IW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int TW=(TRACKERS<2 ? 1 : $clog2(TRACKERS))
)(
    input logic clk,rst_n,input logic in_valid,output logic in_ready,
    input logic [ID_WIDTH-1:0] in_id,input logic [63:0] in_addr,
    input logic [7:0] in_len,input logic in_range,input logic in_attr_ok,
    output logic out_valid,input logic out_ready,output logic [ID_WIDTH-1:0] out_id,
    output logic [63:0] out_addr,output logic [7:0] out_len,
    input logic retire_valid,input logic [1:0] retire_resp,output logic miss_last,
    input range_ctx_t range_ctx,input logic read_release,
    output logic range_reserve_fire,output logic [5:0] range_reserve_idx,
    output logic range_done_fire,output logic [5:0] range_done_idx,
    output logic nq_valid,input logic nq_ready,output logic [63:0] nq_addr,
    output logic [TW-1:0] nq_tracker,input logic nq_rsp_valid,output logic nq_rsp_ready,
    input logic [TW-1:0] nq_rsp_tracker,input logic [4:0] nq_rsp_resp,
    input logic [511:0] nq_rsp_data,
    output logic hit_valid,input logic hit_ready,output logic [ID_WIDTH-1:0] hit_id,
    output logic [127:0] hit_data,output logic hit_last,output logic [1:0] hit_resp,
    input logic m0_ar_probe_valid,input logic [63:0] m0_ar_probe_addr,
    input logic m0_aw_probe_valid,input logic [63:0] m0_aw_probe_addr,
    input logic ace_ar_probe_valid,input logic [63:0] ace_ar_probe_addr,
    input logic ace_aw_probe_valid,input logic [63:0] ace_aw_probe_addr,
    output logic m0_ar_hazard,output logic m0_aw_hazard,
    output logic ace_ar_hazard,output logic ace_aw_hazard,
    input logic m1_aw_probe_valid,input logic [63:0] m1_aw_probe_addr,
    output logic m1_aw_hazard,
    output logic [$clog2(DEPTH+1)-1:0] ingress_count,
    output logic [$clog2(TRACKERS+1)-1:0] tracker_count,
    output logic tracker_full_stall,output logic config_fault,
    output logic service_fault,output logic read_error
);
    typedef struct packed {
        logic valid,setup_range,kind_range,setup_issued;
        logic [ID_WIDTH-1:0] id; logic [63:0] addr; logic [7:0] len;
        logic [6:0] lines,issue_idx,out_idx;
    } entry_t;
    typedef struct packed {
        logic valid,snoop_issued,snoop_done,hit,mem_issued;
        logic [IW-1:0] entry; logic [6:0] line_idx; logic [511:0] data;
    } tracker_t;
    entry_t entries[DEPTH]; tracker_t trackers[TRACKERS];
    logic [IW-1:0] tail,issue_head,send_head,retire_head;
    logic [6:0] send_idx;
    logic free_found,head_tracker_found,send_tracker_found,alloc_wait;
    logic [TW-1:0] free_tracker,head_tracker,send_tracker;
    logic [TW-1:0] nq_fifo[TRACKERS],nq_head,nq_tail;
    logic [$clog2(TRACKERS+1)-1:0] nq_count;
    logic [1:0] hit_beat;

    wire [8:0] request_beats={1'b0,in_len}+9'd1;
    wire [12:0] request_bytes={request_beats,4'b0000};
    wire range_format_bad=!USE_RANGE || in_addr[5:0]!=0 || request_beats[1:0]!=0 ||
        ({1'b0,in_addr[11:0]}+request_bytes)>13'd4096;
    wire malformed=!in_attr_ok || (in_range ? range_format_bad :
        (in_addr[5:0]!=0 || in_len!=8'd3));
    wire classify_setup_range=!in_range && USE_RANGE && range_ctx.valid &&
        range_ctx.op==RANGE_OP_READ && in_addr[63:12]==range_ctx.base_page &&
        range_ctx.line_mask[in_addr[11:6]] && !range_ctx.wr_issued_mask[in_addr[11:6]];
    wire push=in_valid&&in_ready,issue=out_valid&&out_ready,retire=retire_valid;
    wire nq_fire=nq_valid&&nq_ready,nq_rsp_fire=nq_rsp_valid&&nq_rsp_ready;
    wire hit_fire=hit_valid&&hit_ready,hit_line_last=hit_beat==2'd3;
    wire head_final_line=entries[retire_head].out_idx+7'd1==entries[retire_head].lines;
    wire hit_retire=hit_fire&&hit_line_last,retire_any=retire||hit_retire;
    wire can_allocate=alloc_wait&&free_found&&int'(tracker_count)<RANGE_WINDOW;
    wire send_hit_advance=entries[send_head].valid&&!entries[send_head].setup_range&&
        send_tracker_found&&trackers[send_tracker].snoop_done&&trackers[send_tracker].hit;
    wire source_advance=issue||send_hit_advance;
    function automatic [IW-1:0] inc(input [IW-1:0] p);
        return p==IW'(DEPTH-1)?'0:p+1'b1;
    endfunction
    function automatic [TW-1:0] tinc(input [TW-1:0] p);
        return p==TW'(TRACKERS-1)?'0:p+1'b1;
    endfunction
    function automatic logic same_line(input logic [63:0] a,input logic [63:0] b);
        return a[63:6]==b[63:6];
    endfunction

    always_comb begin
        free_found=0;free_tracker=0;head_tracker_found=0;head_tracker=0;
        send_tracker_found=0;send_tracker=0;tracker_count=0;
        m0_ar_hazard=0;m0_aw_hazard=0;ace_ar_hazard=0;ace_aw_hazard=0;m1_aw_hazard=0;
        for(int t=0;t<TRACKERS;t++) begin
            if(trackers[t].valid) begin
                tracker_count=tracker_count+1'b1;
                if(trackers[t].entry==retire_head &&
                   trackers[t].line_idx==entries[retire_head].out_idx) begin
                    head_tracker_found=1;head_tracker=TW'(t);
                end
                if(trackers[t].entry==send_head&&trackers[t].line_idx==send_idx)begin
                    send_tracker_found=1;send_tracker=TW'(t);
                end
                if(m0_ar_probe_valid&&same_line(m0_ar_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))m0_ar_hazard=1;
                if(m0_aw_probe_valid&&same_line(m0_aw_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))m0_aw_hazard=1;
                if(ace_ar_probe_valid&&same_line(ace_ar_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))ace_ar_hazard=1;
                if(ace_aw_probe_valid&&same_line(ace_aw_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))ace_aw_hazard=1;
                if(m1_aw_probe_valid&&same_line(m1_aw_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))m1_aw_hazard=1;
            end else if(!free_found) begin free_found=1;free_tracker=TW'(t);end
        end
        // Conventional one-line entries own their line immediately at AR
        // acceptance, including the interval before a tracker is allocated.
        for(int e=0;e<DEPTH;e++) if(entries[e].valid&&!entries[e].kind_range) begin
            if(m0_ar_probe_valid&&same_line(entries[e].addr,m0_ar_probe_addr))m0_ar_hazard=1;
            if(m0_aw_probe_valid&&same_line(entries[e].addr,m0_aw_probe_addr))m0_aw_hazard=1;
            if(ace_ar_probe_valid&&same_line(entries[e].addr,ace_ar_probe_addr))ace_ar_hazard=1;
            if(ace_aw_probe_valid&&same_line(entries[e].addr,ace_aw_probe_addr))ace_aw_hazard=1;
            if(m1_aw_probe_valid&&same_line(entries[e].addr,m1_aw_probe_addr))m1_aw_hazard=1;
        end
        // Compatibility hazard for the setup-based READ path.
        if(USE_RANGE&&range_ctx.valid&&range_ctx.op==RANGE_OP_READ) begin
            if(m0_ar_probe_valid&&m0_ar_probe_addr[63:12]==range_ctx.base_page&&range_ctx.line_mask[m0_ar_probe_addr[11:6]]&&!range_ctx.done_mask[m0_ar_probe_addr[11:6]])m0_ar_hazard=1;
            if(m0_aw_probe_valid&&m0_aw_probe_addr[63:12]==range_ctx.base_page&&range_ctx.line_mask[m0_aw_probe_addr[11:6]]&&!range_ctx.done_mask[m0_aw_probe_addr[11:6]])m0_aw_hazard=1;
            if(ace_ar_probe_valid&&ace_ar_probe_addr[63:12]==range_ctx.base_page&&range_ctx.line_mask[ace_ar_probe_addr[11:6]]&&!range_ctx.done_mask[ace_ar_probe_addr[11:6]])ace_ar_hazard=1;
            if(ace_aw_probe_valid&&ace_aw_probe_addr[63:12]==range_ctx.base_page&&range_ctx.line_mask[ace_aw_probe_addr[11:6]]&&!range_ctx.done_mask[ace_aw_probe_addr[11:6]])ace_aw_hazard=1;
            if(m1_aw_probe_valid&&m1_aw_probe_addr[63:12]==range_ctx.base_page&&range_ctx.line_mask[m1_aw_probe_addr[11:6]]&&!range_ctx.done_mask[m1_aw_probe_addr[11:6]])m1_aw_hazard=1;
        end
    end
    assign alloc_wait=entries[issue_head].valid&&!entries[issue_head].setup_range&&entries[issue_head].issue_idx<entries[issue_head].lines;
    assign in_ready=int'(ingress_count)<DEPTH&&!config_fault&&!service_fault&&(!in_valid||!malformed);
    assign out_valid=entries[send_head].valid&&(entries[send_head].setup_range?
        (!entries[send_head].setup_issued&&read_release):
        (send_tracker_found&&trackers[send_tracker].snoop_done&&!trackers[send_tracker].hit&&!trackers[send_tracker].mem_issued));
    assign out_id=entries[send_head].id;
    assign out_addr=entries[send_head].setup_range?entries[send_head].addr:
        entries[send_head].addr+64'(send_idx*64);
    assign out_len=entries[send_head].setup_range?entries[send_head].len:8'd3;
    assign miss_last=entries[retire_head].valid&&head_final_line;
    assign nq_valid=nq_count!=0;
    assign nq_tracker=nq_fifo[nq_head];
    assign nq_addr=entries[trackers[nq_fifo[nq_head]].entry].addr+
        64'(trackers[nq_fifo[nq_head]].line_idx*64);
    assign nq_rsp_ready=1'b1;
    assign hit_valid=entries[retire_head].valid&&!entries[retire_head].setup_range&&head_tracker_found&&trackers[head_tracker].snoop_done&&trackers[head_tracker].hit;
    assign hit_id=entries[retire_head].id;
    assign hit_data=trackers[head_tracker].data[128*int'(hit_beat)+:128];
    assign hit_last=hit_line_last&&head_final_line;assign hit_resp=2'b00;
    assign tracker_full_stall=alloc_wait&&(!free_found||int'(tracker_count)>=RANGE_WINDOW);
    assign range_reserve_fire=push&&classify_setup_range;assign range_reserve_idx=in_addr[11:6];
    assign range_done_fire=retire&&entries[retire_head].setup_range;assign range_done_idx=entries[retire_head].addr[11:6];

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            tail<=0;issue_head<=0;send_head<=0;send_idx<=0;retire_head<=0;ingress_count<=0;
            nq_head<=0;nq_tail<=0;nq_count<=0;hit_beat<=0;
            config_fault<=0;service_fault<=0;read_error<=0;
            for(int e=0;e<DEPTH;e++)entries[e]<='0;
            for(int t=0;t<TRACKERS;t++)trackers[t]<='0;
        end else begin
            if(in_valid&&malformed)config_fault<=1;
            if(push) begin
                entries[tail].valid<=1;entries[tail].setup_range<=classify_setup_range;entries[tail].kind_range<=in_range;entries[tail].setup_issued<=0;
                entries[tail].id<=in_id;entries[tail].addr<=in_addr;entries[tail].len<=in_len;
                entries[tail].lines<=in_range?7'(request_beats>>2):7'd1;entries[tail].issue_idx<=0;entries[tail].out_idx<=0;tail<=inc(tail);
            end
            if(entries[issue_head].valid&&entries[issue_head].setup_range)issue_head<=inc(issue_head);
            else if(can_allocate) begin
                trackers[free_tracker].valid<=1;trackers[free_tracker].snoop_issued<=0;trackers[free_tracker].snoop_done<=0;
                trackers[free_tracker].hit<=0;trackers[free_tracker].mem_issued<=0;trackers[free_tracker].entry<=issue_head;
                trackers[free_tracker].line_idx<=entries[issue_head].issue_idx;trackers[free_tracker].data<='0;
                nq_fifo[nq_tail]<=free_tracker;nq_tail<=tinc(nq_tail);
                entries[issue_head].issue_idx<=entries[issue_head].issue_idx+1'b1;
                if(entries[issue_head].issue_idx+7'd1==entries[issue_head].lines)issue_head<=inc(issue_head);
            end
            if(nq_fire)begin nq_head<=tinc(nq_head);trackers[nq_tracker].snoop_issued<=1;end
            unique case({can_allocate,nq_fire})
                2'b10:nq_count<=nq_count+1'b1;2'b01:nq_count<=nq_count-1'b1;default:;
            endcase
            if(nq_rsp_fire) begin
                if(int'(nq_rsp_tracker)>=TRACKERS||!trackers[nq_rsp_tracker].valid||
                   !(trackers[nq_rsp_tracker].snoop_issued||(nq_fire&&nq_rsp_tracker==nq_tracker)))service_fault<=1;
                else begin trackers[nq_rsp_tracker].snoop_done<=1;trackers[nq_rsp_tracker].hit<=nq_rsp_resp[0];
                    trackers[nq_rsp_tracker].data<=nq_rsp_data;if(nq_rsp_resp[1])service_fault<=1;end
            end
            if(issue) begin
                if(entries[send_head].setup_range)entries[send_head].setup_issued<=1;
                else if(send_tracker_found)trackers[send_tracker].mem_issued<=1;else service_fault<=1;
            end
            if(source_advance) begin
                if(send_idx+7'd1==entries[send_head].lines)begin send_head<=inc(send_head);send_idx<=0;end
                else send_idx<=send_idx+1'b1;
            end
            if(hit_fire)begin if(hit_line_last)hit_beat<=0;else hit_beat<=hit_beat+1'b1;end
            if(retire_any) begin
                if(!entries[retire_head].valid||(!entries[retire_head].setup_range&&
                   (!head_tracker_found||(retire&&!trackers[head_tracker].mem_issued)||(hit_retire&&!trackers[head_tracker].hit))))service_fault<=1;
                else begin
                    if(!entries[retire_head].setup_range)trackers[head_tracker].valid<=0;
                    if(head_final_line)begin
                        entries[retire_head].out_idx<=entries[retire_head].lines;
                        entries[retire_head].valid<=0;retire_head<=inc(retire_head);
                    end
                    else entries[retire_head].out_idx<=entries[retire_head].out_idx+1'b1;
                    if(retire&&retire_resp!=0)read_error<=1;
                end
            end
            unique case({push,(retire_any&&head_final_line)})
                2'b10:ingress_count<=ingress_count+1'b1;2'b01:ingress_count<=ingress_count-1'b1;default:;
            endcase
        end
    end
    initial begin
        assert(DEPTH>0&&TRACKERS>0)else $fatal(1,"COH_READ_GEOMETRY");
        assert(RANGE_WINDOW>0&&RANGE_WINDOW<=TRACKERS)else $fatal(1,"COH_READ_WINDOW_GEOMETRY");
    end
`ifndef SYNTHESIS
    always @(posedge clk)if(rst_n)begin
        assert(int'(ingress_count)<=DEPTH)else $fatal(1,"COH_READ_INGRESS_OVERFLOW");
        assert(int'(tracker_count)<=TRACKERS)else $fatal(1,"COH_READ_TRACKER_OVERFLOW");
        assert(int'(tracker_count)<=RANGE_WINDOW)else $fatal(1,"RANGE_READ_WINDOW_OVERFLOW");
        assert(int'(nq_count)<=int'(tracker_count))else $fatal(1,"COH_READ_NQ_COUNT");
        for(int e=0;e<DEPTH;e++)if(entries[e].valid)begin
            assert(entries[e].out_idx<=entries[e].issue_idx&&
                   entries[e].issue_idx<=entries[e].lines)
                else $fatal(1,"RANGE_READ_POINTER_ORDER");
            assert(int'(entries[e].issue_idx)-int'(entries[e].out_idx)<=RANGE_WINDOW)
                else $fatal(1,"RANGE_READ_POINTER_WINDOW");
            if(!entries[e].kind_range)assert(entries[e].lines==1)
                else $fatal(1,"COH_READ_LINE_COUNT");
        end
        if(issue)assert(out_len==3&&out_addr[5:0]==0)else $fatal(1,"COH_READ_FORMAT");
        if(issue&&entries[retire_head].setup_range)assert(read_release)else $fatal(1,"RANGE_READ_EARLY_ISSUE");
        if(retire)assert(!hit_valid)else $fatal(1,"COH_READ_MEMORY_R_DURING_HIT");
    end
    assert property(@(posedge clk)disable iff(!rst_n)nq_valid&&!nq_ready|=>nq_valid&&$stable({nq_addr,nq_tracker}))else $fatal(1,"COH_READ_NQ_STABILITY");
    assert property(@(posedge clk)disable iff(!rst_n)hit_valid&&!hit_ready|=>hit_valid&&$stable({hit_id,hit_data,hit_last,hit_resp}))else $fatal(1,"COH_READ_HIT_STABILITY");
`endif
endmodule
