// Ordered coherent M1 read ingress. A ReadRange request owns one ingress entry
// for the whole burst and up to RANGE_WINDOW line trackers. Internal memory
// reads are one cache line.
// RCCI_PLAN 15.4 (보완 13, R8): memory R beats are always accepted into the
// issuing line tracker's 512-bit buffer, and the external M1 R is driven only
// from tracker buffers (snoop hit data or filled memory data). The shared
// in-order memory R path therefore never waits for the DMA's RREADY.
module coh_read_ingress #(
    parameter int ID_WIDTH=4, DEPTH=16, TRACKERS=16,
    parameter bit USE_RANGE=0,
    // RCCI_PLAN 14.4: 1 = per-entry interval hazard [lo_line,hi_line) (rCCI);
    // 0 = per-line tracker/entry CAM (B1 baseline).
    parameter bit INTERVAL_CAM=USE_RANGE,
    parameter int RANGE_WINDOW=TRACKERS,
    parameter int IW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int TW=(TRACKERS<2 ? 1 : $clog2(TRACKERS))
)(
    input logic clk,rst_n,input logic in_valid,output logic in_ready,
    input logic [ID_WIDTH-1:0] in_id,input logic [63:0] in_addr,
    input logic [7:0] in_len,input logic in_range,input logic in_attr_ok,
    output logic out_valid,input logic out_ready,output logic [ID_WIDTH-1:0] out_id,
    output logic [63:0] out_addr,output logic [7:0] out_len,
    input logic mem_r_valid,output logic mem_r_ready,input logic [127:0] mem_r_data,
    input logic [1:0] mem_r_resp,input logic mem_r_last,
    output logic nq_valid,input logic nq_ready,output logic [63:0] nq_addr,
    output logic [TW-1:0] nq_tracker,input logic nq_rsp_valid,output logic nq_rsp_ready,
    input logic [TW-1:0] nq_rsp_tracker,input logic [4:0] nq_rsp_resp,
    input logic [511:0] nq_rsp_data,
    // Buffered external R (snoop hit, Error-only zero data, or filled memory line).
    output logic hit_valid,input logic hit_ready,output logic [ID_WIDTH-1:0] hit_id,
    output logic [127:0] hit_data,output logic hit_last,output logic [1:0] hit_resp,
    input logic m0_ar_probe_valid,input logic [63:0] m0_ar_probe_addr,
    input logic m0_aw_probe_valid,input logic [63:0] m0_aw_probe_addr,
    input logic ace_ar_probe_valid,input logic [63:0] ace_ar_probe_addr,
    input logic ace_aw_probe_valid,input logic [63:0] ace_aw_probe_addr,
    input logic [58:0] ace_ar_probe_last,input logic [58:0] ace_aw_probe_last,
    // RCCI_PLAN 15.3 (R10): M0 bursts are compared by their footprint span.
    input logic [58:0] m0_ar_probe_last,input logic [58:0] m0_aw_probe_last,
    // RCCI_PLAN 14.3-3: next line to allocate and the top's ownership verdict.
    output logic issue_line_valid,output logic [63:0] issue_line_addr,
    input logic issue_block,
    // RCCI_PLAN 14.5: does a read entry own the line the write side wants to reserve?
    input logic wr_issue_probe_valid,input logic [63:0] wr_issue_probe_addr,
    output logic wr_issue_hazard,
    output logic issue_fire,
    output logic alloc_ready,   // a line could be allocated if not blocked
    output logic m0_ar_hazard,output logic m0_aw_hazard,
    output logic ace_ar_hazard,output logic ace_aw_hazard,
    input logic m1_aw_probe_valid,input logic [63:0] m1_aw_probe_addr,
    input logic [7:0] m1_aw_probe_len,
    output logic m1_aw_hazard,
    output logic [$clog2(DEPTH+1)-1:0] ingress_count,
    output logic [$clog2(TRACKERS+1)-1:0] tracker_count,
    output logic tracker_full_stall,output logic config_fault,
    output logic service_fault,output logic read_error
);
    // The line-only baseline has no range counters: one line per entry.
    localparam int LW=USE_RANGE?7:1;
    typedef struct packed {
        logic valid,kind_range;
        logic [ID_WIDTH-1:0] id; logic [63:0] addr; logic [7:0] len;
        logic [LW-1:0] lines,issue_idx,out_idx;
        logic [6:0] lo_line,hi_line;
    } entry_t;
    typedef struct packed {
        logic valid,snoop_issued,snoop_done,hit,mem_issued,filled;
        logic [IW-1:0] entry; logic [LW-1:0] line_idx;
        logic [1:0] resp; logic [3:0][1:0] beat_resp; logic [511:0] data;
    } tracker_t;
    entry_t entries[DEPTH]; tracker_t trackers[TRACKERS];
    logic [IW-1:0] tail,issue_head,send_head,retire_head;
    logic [LW-1:0] send_idx;
    logic free_found,head_tracker_found,send_tracker_found,alloc_wait;
    logic [TW-1:0] free_tracker,head_tracker,send_tracker;
    logic [TW-1:0] nq_fifo[TRACKERS],nq_head,nq_tail;
    logic [$clog2(TRACKERS+1)-1:0] nq_count;
    logic [1:0] hit_beat;
    // Memory-read order FIFO: trackers in M1 memory AR order (R returns in order).
    logic [TW-1:0] mq_fifo[TRACKERS],mq_head,mq_tail;
    logic [$clog2(TRACKERS+1)-1:0] mq_count;
    logic [1:0] mem_beat;

    wire [8:0] request_beats={1'b0,in_len}+9'd1;
    wire [12:0] request_bytes={request_beats,4'b0000};
    wire range_format_bad=!USE_RANGE || in_addr[5:0]!=0 || request_beats[1:0]!=0 ||
        ({1'b0,in_addr[11:0]}+request_bytes)>13'd4096;
    wire malformed=!in_attr_ok || (in_range ? range_format_bad :
        (in_addr[5:0]!=0 || in_len!=8'd3));
    wire push=in_valid&&in_ready,issue=out_valid&&out_ready;
    wire mem_fire=mem_r_valid&&mem_r_ready;
    wire [TW-1:0] mq_tracker=mq_fifo[mq_head];
    wire nq_fire=nq_valid&&nq_ready,nq_rsp_fire=nq_rsp_valid&&nq_rsp_ready;
    wire hit_fire=hit_valid&&hit_ready,hit_line_last=hit_beat==2'd3;
    wire head_final_line=entries[retire_head].out_idx+7'd1==entries[retire_head].lines;
    wire hit_retire=hit_fire&&hit_line_last,retire_any=hit_retire;
    wire can_allocate=alloc_wait&&free_found&&int'(tracker_count)<RANGE_WINDOW&&!issue_block;
    wire send_hit_advance=entries[send_head].valid&&
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
    function automatic logic in_span(input logic [63:0] line_addr,input logic [63:0] first_addr,
        input logic [58:0] last);
        return {1'b0,line_addr[63:6]}>={1'b0,first_addr[63:6]}&&{1'b0,line_addr[63:6]}<=last;
    endfunction
    function automatic logic line_in_burst(input logic [63:0] line_addr,
        input logic [63:0] burst_addr,input logic [7:0] burst_len);
        logic [64:0] burst_first,burst_last,burst_beats,line_first,line_last;
        begin
            burst_first={1'b0,burst_addr};
            burst_beats=65'(burst_len)+65'd1;
            burst_last=burst_first+(burst_beats<<4)-65'd1;
            line_first={1'b0,{line_addr[63:6],6'b0}};
            line_last=line_first+65'd63;
            return burst_first<=line_last&&burst_last>=line_first;
        end
    endfunction

    // Per-line CAM: B1 hazard source, and the simulation reference for the
    // interval CAM (HAZARD_INTERVAL_EQUIV).
    logic ref_m0_ar,ref_m0_aw,ref_ace_ar,ref_ace_aw,ref_m1_aw,ref_wr_issue;
    always_comb begin
        free_found=0;free_tracker=0;head_tracker_found=0;head_tracker=0;
        send_tracker_found=0;send_tracker=0;tracker_count=0;
        ref_m0_ar=0;ref_m0_aw=0;ref_ace_ar=0;ref_ace_aw=0;ref_m1_aw=0;ref_wr_issue=0;
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
                if(m0_ar_probe_valid&&in_span(entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64),m0_ar_probe_addr,m0_ar_probe_last))ref_m0_ar=1;
                if(m0_aw_probe_valid&&in_span(entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64),m0_aw_probe_addr,m0_aw_probe_last))ref_m0_aw=1;
                if(wr_issue_probe_valid&&same_line(wr_issue_probe_addr,entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)))ref_wr_issue=1;
                if(ace_ar_probe_valid&&in_span(entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64),ace_ar_probe_addr,ace_ar_probe_last))ref_ace_ar=1;
                if(ace_aw_probe_valid&&in_span(entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64),ace_aw_probe_addr,ace_aw_probe_last))ref_ace_aw=1;
                if(m1_aw_probe_valid&&line_in_burst(entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64),
                    m1_aw_probe_addr,m1_aw_probe_len))ref_m1_aw=1;
            end else if(!free_found) begin free_found=1;free_tracker=TW'(t);end
        end
        // Conventional one-line entries own their line immediately at AR
        // acceptance, including the interval before a tracker is allocated.
        for(int e=0;e<DEPTH;e++) if(entries[e].valid&&!entries[e].kind_range) begin
            if(m0_ar_probe_valid&&in_span(entries[e].addr,m0_ar_probe_addr,m0_ar_probe_last))ref_m0_ar=1;
            if(m0_aw_probe_valid&&in_span(entries[e].addr,m0_aw_probe_addr,m0_aw_probe_last))ref_m0_aw=1;
            if(wr_issue_probe_valid&&same_line(entries[e].addr,wr_issue_probe_addr))ref_wr_issue=1;
            if(ace_ar_probe_valid&&in_span(entries[e].addr,ace_ar_probe_addr,ace_ar_probe_last))ref_ace_ar=1;
            if(ace_aw_probe_valid&&in_span(entries[e].addr,ace_aw_probe_addr,ace_aw_probe_last))ref_ace_aw=1;
            if(m1_aw_probe_valid&&line_in_burst(entries[e].addr,m1_aw_probe_addr,m1_aw_probe_len))ref_m1_aw=1;
        end
    end
    // RCCI_PLAN 14.4: interval CAM. A conventional entry owns its line from
    // acceptance; a range entry owns [base+out_idx, base+issue_idx).
    logic int_m0_ar,int_m0_aw,int_ace_ar,int_ace_aw,int_m1_aw,int_wr_issue;
    wire [58:0] wr_issue_line={1'b0,wr_issue_probe_addr[63:6]};
    wire [58:0] m0_ar_line={1'b0,m0_ar_probe_addr[63:6]},m0_aw_line={1'b0,m0_aw_probe_addr[63:6]};
    wire [58:0] ace_ar_first={1'b0,ace_ar_probe_addr[63:6]},ace_aw_first={1'b0,ace_aw_probe_addr[63:6]};
    wire [64:0] m1_aw_last_byte={1'b0,m1_aw_probe_addr}+((65'(m1_aw_probe_len)+65'd1)<<4)-65'd1;
    wire [58:0] m1_aw_first={1'b0,m1_aw_probe_addr[63:6]},m1_aw_last=m1_aw_last_byte[64:6];
    always_comb begin
        int_m0_ar=0;int_m0_aw=0;int_ace_ar=0;int_ace_aw=0;int_m1_aw=0;int_wr_issue=0;
        // An empty interval (lo==hi) owns nothing.
        for(int e=0;e<DEPTH;e++)if(entries[e].valid&&entries[e].lo_line<entries[e].hi_line)begin
            if(m0_ar_probe_valid&&m0_ar_line[57:6]==entries[e].addr[63:12]&&{1'b0,m0_ar_line[5:0]}<entries[e].hi_line&&{1'b0,m0_ar_probe_last[5:0]}>=entries[e].lo_line)int_m0_ar=1;
            if(m0_aw_probe_valid&&m0_aw_line[57:6]==entries[e].addr[63:12]&&{1'b0,m0_aw_line[5:0]}<entries[e].hi_line&&{1'b0,m0_aw_probe_last[5:0]}>=entries[e].lo_line)int_m0_aw=1;
            if(wr_issue_probe_valid&&wr_issue_line[57:6]==entries[e].addr[63:12]&&{1'b0,wr_issue_line[5:0]}>=entries[e].lo_line&&{1'b0,wr_issue_line[5:0]}<entries[e].hi_line)int_wr_issue=1;
            if(ace_ar_probe_valid&&ace_ar_first[57:6]==entries[e].addr[63:12]&&{1'b0,ace_ar_first[5:0]}<entries[e].hi_line&&{1'b0,ace_ar_probe_last[5:0]}>=entries[e].lo_line)int_ace_ar=1;
            if(ace_aw_probe_valid&&ace_aw_first[57:6]==entries[e].addr[63:12]&&{1'b0,ace_aw_first[5:0]}<entries[e].hi_line&&{1'b0,ace_aw_probe_last[5:0]}>=entries[e].lo_line)int_ace_aw=1;
            if(m1_aw_probe_valid&&m1_aw_first[57:6]==entries[e].addr[63:12]&&{1'b0,m1_aw_first[5:0]}<entries[e].hi_line&&{1'b0,m1_aw_last[5:0]}>=entries[e].lo_line)int_m1_aw=1;
        end
    end
    // The line CAM of the baseline stays; the range design adds the interval compare.
    assign m0_ar_hazard=int_m0_ar;
    assign m0_aw_hazard=int_m0_aw;
    assign ace_ar_hazard=int_ace_ar;
    assign ace_aw_hazard=int_ace_aw;
    assign m1_aw_hazard=int_m1_aw;
    assign wr_issue_hazard=int_wr_issue;
    assign alloc_wait=entries[issue_head].valid&&entries[issue_head].issue_idx<entries[issue_head].lines;
    assign issue_line_valid=alloc_wait;
    assign issue_fire=can_allocate;
    assign alloc_ready=alloc_wait&&free_found&&int'(tracker_count)<RANGE_WINDOW;
    assign issue_line_addr=entries[issue_head].addr+64'(entries[issue_head].issue_idx*64);
    assign in_ready=int'(ingress_count)<DEPTH&&!config_fault&&!service_fault&&(!in_valid||!malformed);
    assign out_valid=entries[send_head].valid&&send_tracker_found&&
        trackers[send_tracker].snoop_done&&!trackers[send_tracker].hit&&!trackers[send_tracker].mem_issued;
    assign out_id=entries[send_head].id;
    assign out_addr=entries[send_head].addr+64'(send_idx*64);
    assign out_len=8'd3;
    assign mem_r_ready=mq_count!=0;
    assign nq_valid=nq_count!=0;
    assign nq_tracker=nq_fifo[nq_head];
    assign nq_addr=entries[trackers[nq_fifo[nq_head]].entry].addr+
        64'(trackers[nq_fifo[nq_head]].line_idx*64);
    assign nq_rsp_ready=1'b1;
    assign hit_valid=entries[retire_head].valid&&head_tracker_found&&trackers[head_tracker].snoop_done&&
        (trackers[head_tracker].hit||trackers[head_tracker].filled);
    assign hit_id=entries[retire_head].id;
    assign hit_data=trackers[head_tracker].data[128*int'(hit_beat)+:128];
    assign hit_last=hit_line_last&&head_final_line;
    assign hit_resp=trackers[head_tracker].hit?trackers[head_tracker].resp:trackers[head_tracker].beat_resp[hit_beat];
    assign tracker_full_stall=alloc_wait&&(!free_found||int'(tracker_count)>=RANGE_WINDOW);

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            tail<=0;issue_head<=0;send_head<=0;send_idx<=0;retire_head<=0;ingress_count<=0;
            nq_head<=0;nq_tail<=0;nq_count<=0;hit_beat<=0;
            mq_head<=0;mq_tail<=0;mq_count<=0;mem_beat<=0;
            config_fault<=0;service_fault<=0;read_error<=0;
            for(int e=0;e<DEPTH;e++)entries[e]<='0;
            for(int t=0;t<TRACKERS;t++)trackers[t]<='0;
        end else begin
            if(in_valid&&malformed)config_fault<=1;
            if(push) begin
                entries[tail].valid<=1;entries[tail].kind_range<=in_range;
                entries[tail].id<=in_id;entries[tail].addr<=in_addr;entries[tail].len<=in_len;
                entries[tail].lines<=in_range?7'(request_beats>>2):7'd1;entries[tail].issue_idx<=0;entries[tail].out_idx<=0;tail<=inc(tail);
                entries[tail].lo_line<=7'(in_addr[11:6]);
                entries[tail].hi_line<=7'(in_addr[11:6])+7'(!in_range);
            end
            if(can_allocate) begin
                trackers[free_tracker].valid<=1;trackers[free_tracker].snoop_issued<=0;trackers[free_tracker].snoop_done<=0;
                trackers[free_tracker].hit<=0;trackers[free_tracker].mem_issued<=0;trackers[free_tracker].filled<=0;
                trackers[free_tracker].beat_resp<='0;trackers[free_tracker].entry<=issue_head;
                trackers[free_tracker].line_idx<=USE_RANGE?entries[issue_head].issue_idx:'0;
                trackers[free_tracker].resp<=0;trackers[free_tracker].data<='0;
                nq_fifo[nq_tail]<=free_tracker;nq_tail<=tinc(nq_tail);
                entries[issue_head].issue_idx<=entries[issue_head].issue_idx+1'b1;
                if(entries[issue_head].kind_range)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;
                if(entries[issue_head].issue_idx+7'd1==entries[issue_head].lines)issue_head<=inc(issue_head);
            end
            if(nq_fire)begin nq_head<=tinc(nq_head);trackers[nq_tracker].snoop_issued<=1;end
            unique case({can_allocate,nq_fire})
                2'b10:nq_count<=nq_count+1'b1;2'b01:nq_count<=nq_count-1'b1;default:;
            endcase
            if(nq_rsp_fire) begin
                if(int'(nq_rsp_tracker)>=TRACKERS||!trackers[nq_rsp_tracker].valid||
                   !(trackers[nq_rsp_tracker].snoop_issued||(nq_fire&&nq_rsp_tracker==nq_tracker)))service_fault<=1;
                else if(nq_rsp_resp[1]&&(nq_rsp_resp[0]||nq_rsp_resp[2])) service_fault<=1;
                else begin
                    trackers[nq_rsp_tracker].snoop_done<=1;
                    // Error-only is a recoverable line result: synthesize four
                    // zero SLVERR beats and do not issue a memory AR.
                    trackers[nq_rsp_tracker].hit<=nq_rsp_resp[0]||nq_rsp_resp[1];
                    trackers[nq_rsp_tracker].resp<=nq_rsp_resp[1]?2'b10:2'b00;
                    trackers[nq_rsp_tracker].data<=nq_rsp_resp[1]?'0:nq_rsp_data;
                    if(nq_rsp_resp[1])read_error<=1;
                end
            end
            if(issue) begin
                if(send_tracker_found)begin
                    trackers[send_tracker].mem_issued<=1;
                    mq_fifo[mq_tail]<=send_tracker;mq_tail<=tinc(mq_tail);
                end else service_fault<=1;
            end
            // Memory R beat: store into the oldest issued miss line.
            if(mem_fire)begin
                if(!trackers[mq_tracker].valid||!trackers[mq_tracker].mem_issued||trackers[mq_tracker].filled||
                   mem_r_last!=(mem_beat==2'd3))service_fault<=1;
                else begin
                    trackers[mq_tracker].data[128*int'(mem_beat)+:128]<=mem_r_data;
                    trackers[mq_tracker].beat_resp[mem_beat]<=mem_r_resp;
                    if(mem_r_resp!=0)read_error<=1;
                end
                if(mem_beat==2'd3)begin
                    mem_beat<=0;trackers[mq_tracker].filled<=1;mq_head<=tinc(mq_head);
                end else mem_beat<=mem_beat+1'b1;
            end
            unique case({issue&&send_tracker_found,mem_fire&&mem_beat==2'd3})
                2'b10:mq_count<=mq_count+1'b1;2'b01:mq_count<=mq_count-1'b1;default:;
            endcase
            if(source_advance) begin
                if(send_idx+7'd1==entries[send_head].lines)begin send_head<=inc(send_head);send_idx<=0;end
                else send_idx<=send_idx+1'b1;
            end
            if(hit_fire)begin if(hit_line_last)hit_beat<=0;else hit_beat<=hit_beat+1'b1;end
            if(retire_any) begin
                if(!entries[retire_head].valid||!head_tracker_found||
                   !(trackers[head_tracker].hit||trackers[head_tracker].filled))service_fault<=1;
                else begin
                    trackers[head_tracker].valid<=0;
                    if(head_final_line)begin
                        entries[retire_head].out_idx<=entries[retire_head].lines;
                        entries[retire_head].valid<=0;retire_head<=inc(retire_head);
                    end
                    else begin
                        entries[retire_head].out_idx<=entries[retire_head].out_idx+1'b1;
                        entries[retire_head].lo_line<=entries[retire_head].lo_line+7'd1;
                    end
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
        if(INTERVAL_CAM)assert({int_m0_ar,int_m0_aw,int_ace_ar,int_ace_aw,int_m1_aw,int_wr_issue}==
            {ref_m0_ar,ref_m0_aw,ref_ace_ar,ref_ace_aw,ref_m1_aw,ref_wr_issue})
            else $fatal(1,"HAZARD_INTERVAL_EQUIV read int=%b ref=%b",
                {int_m0_ar,int_m0_aw,int_ace_ar,int_ace_aw,int_m1_aw,int_wr_issue},
                {ref_m0_ar,ref_m0_aw,ref_ace_ar,ref_ace_aw,ref_m1_aw,ref_wr_issue});
        for(int e=0;e<DEPTH;e++)if(entries[e].valid&&entries[e].kind_range)
            assert(entries[e].lo_line=={1'b0,entries[e].addr[63:6]}+59'(entries[e].out_idx)&&
                   entries[e].hi_line=={1'b0,entries[e].addr[63:6]}+59'(entries[e].issue_idx))
                else $fatal(1,"RANGE_READ_INTERVAL_POINTER");
        assert(int'(mq_count)<=int'(tracker_count))else $fatal(1,"COH_READ_MQ_COUNT");
        if(mem_fire)assert(mq_count!=0&&mem_r_last==(mem_beat==2'd3))else $fatal(1,"COH_READ_MEM_R_ASSOCIATION");
    end
    assert property(@(posedge clk)disable iff(!rst_n)nq_valid&&!nq_ready|=>nq_valid&&$stable({nq_addr,nq_tracker}))else $fatal(1,"COH_READ_NQ_STABILITY");
    assert property(@(posedge clk)disable iff(!rst_n)hit_valid&&!hit_ready|=>hit_valid&&$stable({hit_id,hit_data,hit_last,hit_resp}))else $fatal(1,"COH_READ_HIT_STABILITY");
`endif
endmodule
