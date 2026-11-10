// Ordered coherent line-write ingress. Range decomposition is owned by
// coh_write_range_adapter; every request seen here is one aligned 64-byte line.
module coh_write_ingress #(
    parameter bit TAGGED_NQ=0,
    parameter int ID_WIDTH=4, DEPTH=16, TRACKERS=16, AC_DEPTH=TRACKERS,
    parameter int IW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int TW=(TRACKERS<2 ? 1 : $clog2(TRACKERS)),
    parameter int FW=(AC_DEPTH<2 ? 1 : $clog2(AC_DEPTH))
)(
    input logic clk, rst_n,
    input logic aw_valid, output logic aw_ready,
    input logic [ID_WIDTH-1:0] aw_id, input logic [63:0] aw_addr,
    input logic [7:0] aw_len,
    output logic out_valid, input logic out_ready,
    output logic [ID_WIDTH-1:0] out_id, output logic [63:0] out_addr,
    output logic [7:0] out_len, output logic [IW-1:0] out_idx,
    output logic drop_valid,output logic [ID_WIDTH-1:0] drop_id,
    output logic [IW-1:0] drop_idx,input logic drop_done,
    output logic drop_retire_ready,
    input logic b_fire, input logic [IW-1:0] b_idx,
    input logic [63:0] m0_araddr, m0_awaddr,
    output logic ar_hazard, aw_hazard,
    input logic ace_ar_probe_valid,input logic [63:0] ace_ar_probe_addr,
    input logic ace_aw_probe_valid,input logic [63:0] ace_aw_probe_addr,
    input logic [58:0] ace_ar_probe_last,input logic [58:0] ace_aw_probe_last,
    input logic m1_ar_probe_valid,input logic [63:0] m1_ar_probe_addr,
    input logic [7:0] m1_ar_probe_len,
    output logic ace_ar_hazard,ace_aw_hazard,m1_ar_hazard,
    output logic ac_valid, input logic ac_ready,
    output logic [63:0] ac_addr, output logic [3:0] ac_snoop,
    input logic cr_valid, output logic cr_ready, input logic [1:0] cr_resp,
    output logic nq_valid, input logic nq_ready, output logic [63:0] nq_addr,
    output logic [TW-1:0] nq_tracker,
    input logic nq_rsp_valid, output logic nq_rsp_ready,
    input logic [TW-1:0] nq_rsp_tracker, input logic [4:0] nq_rsp_resp,
    output logic service_fault,
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
        logic valid, ac_issued, snoop_done, line_error;
        logic [IW-1:0] ingress_idx;
    } tracker_t;
    ingress_t entries [DEPTH];
    tracker_t trackers [TRACKERS];
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
    logic [DEPTH-1:0] need_alloc, need_ac;

    wire push=aw_valid&&aw_ready;
    wire issue=out_valid&&out_ready;
    wire issue_any=issue||(drop_valid&&drop_done);
    wire ac_fire=ac_hold&&(TAGGED_NQ?nq_ready:ac_ready)&&!service_fault;
    wire rsp_fire=TAGGED_NQ?nq_rsp_valid:(cr_valid&&cr_ready);
    function automatic [IW-1:0] inc(input [IW-1:0] p);
        return p==IW'(DEPTH-1)?'0:p+1'b1;
    endfunction
    function automatic [FW-1:0] finc(input [FW-1:0] p);
        return p==FW'(AC_DEPTH-1)?'0:p+1'b1;
    endfunction
    // RCCI_PLAN 14.3-2 (R5): an ACE request owns [first,last] 64 B lines.
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

    assign aw_ready=int'(ingress_count)<DEPTH&&!service_fault;
    assign out_valid=!service_fault&&entries[issue_head].valid&&!entries[issue_head].issued&&
        entries[issue_head].allocated&&trackers[entries[issue_head].tracker].snoop_done&&
        !trackers[entries[issue_head].tracker].line_error;
    assign out_id=entries[issue_head].id;
    assign out_addr=entries[issue_head].addr;
    assign out_len=entries[issue_head].len;
    assign out_idx=issue_head;
    assign drop_valid=!service_fault&&entries[issue_head].valid&&!entries[issue_head].issued&&
        entries[issue_head].allocated&&trackers[entries[issue_head].tracker].snoop_done&&
        trackers[entries[issue_head].tracker].line_error;
    assign drop_id=entries[issue_head].id;
    assign drop_idx=issue_head;
    assign drop_retire_ready=entries[retire_head].valid&&entries[retire_head].issued&&
        entries[retire_head].allocated&&trackers[entries[retire_head].tracker].line_error;
    assign tracker_full_stall=alloc_found&&!free_found;

    always_comb begin
        alloc_found=0;alloc_idx=0;free_found=0;free_idx=0;
        sched_found=0;sched_idx=0;tracker_count=0;
        need_alloc='0;need_ac='0;ar_hazard=0;aw_hazard=0;
        ace_ar_hazard=0;ace_aw_hazard=0;m1_ar_hazard=0;
        for(int t=0;t<TRACKERS;t++) begin
            if(trackers[t].valid)tracker_count=tracker_count+1'b1;
            else if(!free_found)begin free_found=1;free_idx=TW'(t);end
        end
        for(int e=0;e<DEPTH;e++)if(entries[e].valid)begin
            need_alloc[e]=!entries[e].allocated;
            need_ac[e]=entries[e].allocated&&!trackers[entries[e].tracker].ac_issued&&
                !(ac_hold&&entries[e].tracker==ac_selected);
            ar_hazard|=entries[e].addr[63:6]==m0_araddr[63:6];
            aw_hazard|=entries[e].addr[63:6]==m0_awaddr[63:6];
            if(ace_ar_probe_valid&&in_span(entries[e].addr,ace_ar_probe_addr,ace_ar_probe_last))ace_ar_hazard=1;
            if(ace_aw_probe_valid&&in_span(entries[e].addr,ace_aw_probe_addr,ace_aw_probe_last))ace_aw_hazard=1;
            if(m1_ar_probe_valid&&line_in_burst(entries[e].addr,m1_ar_probe_addr,m1_ar_probe_len))m1_ar_hazard=1;
        end
        for(int e=DEPTH-1;e>=0;e--)begin
            if(need_alloc[e])begin alloc_found=1;alloc_idx=IW'(e);end
            if(need_ac[e])begin sched_found=1;sched_idx=entries[e].tracker;end
        end
        for(int e=DEPTH-1;e>=0;e--)if(IW'(e)>=retire_head)begin
            if(need_alloc[e])alloc_idx=IW'(e);
            if(need_ac[e])sched_idx=entries[e].tracker;
        end
    end

    assign ac_valid=!TAGGED_NQ&&ac_hold&&!service_fault;
    assign ac_addr=ac_payload;
    assign ac_snoop=4'd13;
    assign cr_ready=!TAGGED_NQ&&ac_count!=0;
    assign nq_valid=TAGGED_NQ&&ac_hold&&!service_fault;
    assign nq_addr=ac_payload;
    assign nq_tracker=ac_selected;
    assign nq_rsp_ready=TAGGED_NQ;

    always_ff @(posedge clk)if(rst_n&&ac_fire)ac_fifo[ac_tail]<=ac_selected;
    always_ff @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            tail<=0;issue_head<=0;retire_head<=0;ingress_count<=0;
            ac_head<=0;ac_tail<=0;ac_count<=0;ac_hold<=0;ac_selected<=0;ac_payload<=0;
            service_fault<=0;
            for(int e=0;e<DEPTH;e++)entries[e]<='0;
            for(int t=0;t<TRACKERS;t++)trackers[t]<='0;
        end else begin
            if(push)begin
                entries[tail]<='{valid:1'b1,allocated:1'b0,issued:1'b0,
                    id:aw_id,addr:aw_addr,len:aw_len,tracker:'0};
                tail<=inc(tail);
            end
            if(alloc_found&&free_found)begin
                entries[alloc_idx].allocated<=1;entries[alloc_idx].tracker<=free_idx;
                trackers[free_idx]<='{valid:1'b1,ac_issued:1'b0,snoop_done:1'b0,line_error:1'b0,
                    ingress_idx:alloc_idx};
            end
            if(!ac_hold||ac_fire)begin
                ac_hold<=0;
                if(sched_found&&int'(ac_count)+int'(ac_fire)-int'(rsp_fire)<AC_DEPTH)begin
                    ac_hold<=1;ac_selected<=sched_idx;
                    ac_payload<={entries[trackers[sched_idx].ingress_idx].addr[63:6],6'b0};
                end
            end
            if(ac_fire)begin
                trackers[ac_selected].ac_issued<=1;ac_tail<=finc(ac_tail);
            end
            if(rsp_fire)begin
                if(TAGGED_NQ)begin
                    if(int'(nq_rsp_tracker)<TRACKERS&&trackers[nq_rsp_tracker].valid&&
                       trackers[nq_rsp_tracker].ac_issued)begin
                        if(nq_rsp_resp[1]&&(nq_rsp_resp[0]||nq_rsp_resp[2]))service_fault<=1;
                        else begin
                            trackers[nq_rsp_tracker].snoop_done<=0;
                            trackers[nq_rsp_tracker].line_error<=nq_rsp_resp[1];
                        end
                    end else service_fault<=1;
                end else begin
                    if(cr_resp==0)trackers[ac_fifo[ac_head]].snoop_done<=1;
                    else service_fault<=1;
                    ac_head<=finc(ac_head);
                end
            end
            unique case({ac_fire,rsp_fire})
                2'b10:ac_count<=ac_count+1'b1;
                2'b01:ac_count<=ac_count-1'b1;
                default:;
            endcase
            if(issue_any)begin entries[issue_head].issued<=1;issue_head<=inc(issue_head);end
            if(b_fire)begin
                trackers[entries[b_idx].tracker].valid<=0;
                entries[b_idx].valid<=0;retire_head<=inc(retire_head);
            end
            unique case({push,b_fire})
                2'b10:ingress_count<=ingress_count+1'b1;
                2'b01:ingress_count<=ingress_count-1'b1;
                default:;
            endcase
        end
    end
`ifndef SYNTHESIS
    initial assert(DEPTH>0&&TRACKERS>0&&AC_DEPTH>0)else $fatal(1,"COH_WRITE_GEOMETRY");
    always @(posedge clk)if(rst_n)begin
        assert(int'(ingress_count)<=DEPTH&&int'(ac_count)<=AC_DEPTH&&int'(ac_count)<=TRACKERS)
            else $fatal(1,"COH_WRITE_QUEUE_BOUNDS");
        if(push)assert(aw_addr[5:0]==0&&aw_len==3)else $fatal(1,"COH_WRITE_FORMAT");
        if(alloc_found&&free_found)for(int age=0;age<DEPTH;age++)begin
            automatic int e=(int'(retire_head)+age)%DEPTH;
            if(age<((int'(alloc_idx)-int'(retire_head)+DEPTH)%DEPTH))
                assert(!entries[e].valid||entries[e].allocated)
                    else $fatal(1,"COH_WRITE_ALLOCATION_ORDER");
        end
        for(int t=0;t<TRACKERS;t++)if(trackers[t].valid)
            assert(entries[trackers[t].ingress_idx].valid&&entries[trackers[t].ingress_idx].allocated&&
                   entries[trackers[t].ingress_idx].tracker==TW'(t))
                else $fatal(1,"TRACKER_INGRESS_LIFETIME");
        if(b_fire)assert(b_idx==retire_head&&entries[b_idx].valid&&entries[b_idx].issued)
            else $fatal(1,"B_INGRESS_ASSOCIATION");
        if(drop_done)assert(drop_valid)else $fatal(1,"COH_WRITE_ERROR_DRAIN_ASSOCIATION");
        if(ac_fire)assert(int'(ac_count)<AC_DEPTH&&trackers[ac_selected].valid)
            else $fatal(1,"AC_FIFO_OVERFLOW");
        if(rsp_fire&&!TAGGED_NQ)assert(trackers[ac_fifo[ac_head]].ac_issued&&cr_resp==0)
            else $fatal(1,"CR_ASSOCIATION");
        if(rsp_fire&&TAGGED_NQ)assert(int'(nq_rsp_tracker)<TRACKERS&&
            trackers[nq_rsp_tracker].valid&&trackers[nq_rsp_tracker].ac_issued)
            else $fatal(1,"WRITE_NQ_ASSOCIATION");
    end
    assert property(@(posedge clk)disable iff(!rst_n)nq_valid&&!nq_ready|=>
        nq_valid&&$stable({nq_addr,nq_tracker}))else $fatal(1,"WRITE_NQ_STABILITY");
`endif
endmodule
