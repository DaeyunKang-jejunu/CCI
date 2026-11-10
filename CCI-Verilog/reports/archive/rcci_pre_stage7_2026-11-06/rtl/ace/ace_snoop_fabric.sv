// Broadcast/filtered ACE snoop fanout with an ordered context FIFO.
// AC/CR/CD have no transaction ID. Requests are issued to every target in
// upstream acceptance order and each target's ordered CR/CD stream is matched
// to the oldest unfinished context for that target. Aggregate responses are
// returned upstream in acceptance order.
module ace_snoop_fabric import ace_snoop_pkg::*; #(
    parameter int TARGETS=2, parameter int FILTER_ENTRIES=16,
    parameter int OUTSTANDING=4,
    parameter int TI=(TARGETS<2?1:$clog2(TARGETS)),
    parameter int FI=(FILTER_ENTRIES<2?1:$clog2(FILTER_ENTRIES)),
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING))
)(
    input logic clk,rst_n,
    input logic [TARGETS-1:0] active_mask,input logic filter_enable,
    input logic sf_update_valid,input logic [TI-1:0] sf_update_target,
    input logic [63:0] sf_update_addr,input logic sf_update_present,
    input logic ac_valid,output logic ac_ready,input logic [63:0] ac_addr,input logic [3:0] ac_snoop,
    output logic cr_valid,input logic cr_ready,output logic [4:0] cr_resp,
    output logic cd_valid,input logic cd_ready,output logic [127:0] cd_data,output logic cd_last,
    output logic [TARGETS-1:0] m_ac_valid,input logic [TARGETS-1:0] m_ac_ready,
    output logic [TARGETS-1:0][63:0] m_ac_addr,output logic [TARGETS-1:0][3:0] m_ac_snoop,
    input logic [TARGETS-1:0] m_cr_valid,output logic [TARGETS-1:0] m_cr_ready,
    input logic [TARGETS-1:0][4:0] m_cr_resp,
    input logic [TARGETS-1:0] m_cd_valid,output logic [TARGETS-1:0] m_cd_ready,
    input logic [TARGETS-1:0][127:0] m_cd_data,input logic [TARGETS-1:0] m_cd_last,
    output logic idle,output logic protocol_error
);
    logic [57-FI:0] sf_tags[FILTER_ENTRIES];
    logic [TARGETS-1:0] sf_sharers[FILTER_ENTRIES];
    logic sf_valid[FILTER_ENTRIES],sf_overflow[FILTER_ENTRIES];
    wire [FI-1:0] request_index=(FILTER_ENTRIES==1)?'0:ac_addr[6+:FI];
    wire [FI-1:0] update_index=(FILTER_ENTRIES==1)?'0:sf_update_addr[6+:FI];
    wire [57-FI:0] request_tag=ac_addr[63:6+FI];
    wire [57-FI:0] update_tag=sf_update_addr[63:6+FI];
    logic [TARGETS-1:0] lookup_mask;

    logic q_valid[OUTSTANDING],issued_q[OUTSTANDING],response_ready_q[OUTSTANDING],cr_sent_q[OUTSTANDING];
    logic [63:0] addr_q[OUTSTANDING];logic [3:0] snoop_q[OUTSTANDING];
    logic [TARGETS-1:0] selected_q[OUTSTANDING],ac_pending_q[OUTSTANDING],cr_seen_q[OUTSTANDING];
    logic [TARGETS-1:0][4:0] responses_q[OUTSTANDING];
    logic [TARGETS-1:0][2:0] cd_count_q[OUTSTANDING];
    logic [TARGETS-1:0][511:0] line_data_q[OUTSTANDING];
    logic [4:0] aggregate_q[OUTSTANDING];logic [511:0] selected_data_q[OUTSTANDING];
    logic [QW-1:0] head,tail;logic [$clog2(OUTSTANDING+1)-1:0] count;
    logic [1:0] send_beat;
    logic send_found;logic [QW-1:0] send_pick;
    logic [TARGETS-1:0] cr_pick_valid,cd_pick_valid;
    logic [TARGETS-1:0][QW-1:0] cr_pick,cd_pick;
    logic head_collection_done;logic [4:0] head_aggregate;logic [511:0] head_data;
    logic head_internal_error;
    wire push=ac_valid&&ac_ready;
    wire cr_fire=cr_valid&&cr_ready;
    wire cd_fire=cd_valid&&cd_ready;
    wire pop=count!=0 && ((cr_fire&&(!aggregate_q[head][0]||aggregate_q[head][1])) ||
        (cd_fire&&cd_last));
    function automatic [QW-1:0] qinc(input [QW-1:0] p);
        return p==QW'(OUTSTANDING-1)?'0:p+1'b1;
    endfunction

    always_comb begin
        if(dvm(ac_snoop)) lookup_mask=active_mask;
        else if(filter_enable)
            lookup_mask=sf_overflow[request_index]?active_mask:
                (sf_valid[request_index]&&sf_tags[request_index]==request_tag)?
                (sf_sharers[request_index]&active_mask):'0;
        else lookup_mask=active_mask;

        send_found=0;send_pick=0;
        for(int off=0;off<OUTSTANDING;off++) begin
            int qi;qi=(int'(head)+off)%OUTSTANDING;
            if(!send_found&&q_valid[qi]&&!issued_q[qi]) begin send_found=1;send_pick=QW'(qi);end
        end
        m_ac_valid='0;m_ac_addr='0;m_ac_snoop='0;m_cr_ready='0;m_cd_ready='0;
        if(send_found) for(int t=0;t<TARGETS;t++) begin
            m_ac_valid[t]=ac_pending_q[send_pick][t];
            m_ac_addr[t]=addr_q[send_pick];m_ac_snoop[t]=snoop_q[send_pick];
        end

        cr_pick_valid='0;cd_pick_valid='0;cr_pick='0;cd_pick='0;
        for(int t=0;t<TARGETS;t++) begin
            logic crf,cdf,stop;crf=0;cdf=0;stop=0;
            for(int off=0;off<OUTSTANDING;off++) begin
                int qi;qi=(int'(head)+off)%OUTSTANDING;
                if(!crf&&q_valid[qi]&&issued_q[qi]&&selected_q[qi][t]&&!cr_seen_q[qi][t]) begin
                    crf=1;cr_pick_valid[t]=1;cr_pick[t]=QW'(qi);
                end
            end
            m_cr_ready[t]=cr_pick_valid[t];
            // REVIEW 10.4: CR and CD are independent (IHI 0022H D3.9). A CD beat
            // belongs to the oldest context whose CR says DataTransfer=1 and whose
            // data is incomplete. The CR handshaking in this cycle is bypassed, and
            // CD is held off while an older context's CR is still unknown.
            for(int off=0;off<OUTSTANDING;off++) begin
                int qi;logic seen,data;qi=(int'(head)+off)%OUTSTANDING;
                if(!cdf&&!stop&&q_valid[qi]&&issued_q[qi]&&selected_q[qi][t]) begin
                    seen=cr_seen_q[qi][t]||(m_cr_valid[t]&&cr_pick_valid[t]&&cr_pick[t]==QW'(qi));
                    data=cr_seen_q[qi][t]?responses_q[qi][t][0]:m_cr_resp[t][0];
                    if(!seen) stop=1;
                    else if(data&&cd_count_q[qi][t]!=4) begin cdf=1;cd_pick_valid[t]=1;cd_pick[t]=QW'(qi);end
                end
            end
            m_cd_ready[t]=cd_pick_valid[t];
        end

        head_collection_done=count!=0&&issued_q[head];
        head_aggregate='0;head_data='0;head_internal_error=0;
        begin logic have_data;int dirty_count;have_data=0;dirty_count=0;
            for(int t=0;t<TARGETS;t++) if(count!=0&&selected_q[head][t]) begin
                logic target_done;
                target_done=cr_seen_q[head][t]&&
                    (!responses_q[head][t][0]||cd_count_q[head][t]==4);
                if(!target_done) head_collection_done=0;
                head_aggregate|=responses_q[head][t];
                if(cd_count_q[head][t]!=0&&!responses_q[head][t][0]) begin
                    head_aggregate[1]=1;head_internal_error=1;
                end
                if(responses_q[head][t][2]) dirty_count++;
                if(responses_q[head][t][0]) begin
                    if(!have_data) begin head_data=line_data_q[head][t];have_data=1;end
                    else if(head_data!=line_data_q[head][t]) begin
                        head_aggregate[1]=1;head_internal_error=1;
                    end
                end
            end
            if(dirty_count>1) begin head_aggregate[1]=1;head_internal_error=1;end
        end

        ac_ready=int'(count)<OUTSTANDING&&!sf_update_valid;
        idle=count==0&&!ac_valid;
        cr_valid=count!=0&&response_ready_q[head]&&!cr_sent_q[head];
        cr_resp=count!=0?aggregate_q[head]:'0;
        cd_valid=count!=0&&response_ready_q[head]&&cr_sent_q[head]&&
            aggregate_q[head][0]&&!aggregate_q[head][1];
        cd_data=count!=0?selected_data_q[head][128*int'(send_beat)+:128]:'0;
        cd_last=send_beat==3;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            head<=0;tail<=0;count<=0;send_beat<=0;protocol_error<=0;
            for(int q=0;q<OUTSTANDING;q++) begin
                q_valid[q]<=0;issued_q[q]<=0;response_ready_q[q]<=0;cr_sent_q[q]<=0;
                addr_q[q]<=0;snoop_q[q]<=0;selected_q[q]<=0;ac_pending_q[q]<=0;cr_seen_q[q]<=0;
                responses_q[q]<='0;cd_count_q[q]<='0;line_data_q[q]<='0;
                aggregate_q[q]<=0;selected_data_q[q]<=0;
            end
            for(int i=0;i<FILTER_ENTRIES;i++) begin
                sf_valid[i]<=0;sf_overflow[i]<=0;sf_tags[i]<=0;sf_sharers[i]<=0;
            end
        end else begin
            if(sf_update_valid) begin
                if(int'(sf_update_target)>=TARGETS) protocol_error<=1;
                else if(sf_overflow[update_index]);
                else if(sf_update_present) begin
                    if(sf_valid[update_index]&&sf_tags[update_index]!=update_tag&&
                       sf_sharers[update_index]!='0) sf_overflow[update_index]<=1;
                    else if(!sf_valid[update_index]||sf_tags[update_index]!=update_tag) begin
                        sf_valid[update_index]<=1;sf_tags[update_index]<=update_tag;
                        sf_sharers[update_index]<='0;sf_sharers[update_index][sf_update_target]<=1;
                    end else sf_sharers[update_index][sf_update_target]<=1;
                end else if(sf_valid[update_index]&&sf_tags[update_index]==update_tag) begin
                    sf_sharers[update_index][sf_update_target]<=0;
                    if((sf_sharers[update_index]&~(TARGETS'(1)<<sf_update_target))=='0)
                        sf_valid[update_index]<=0;
                end
            end
            if(push) begin
                q_valid[tail]<=1;issued_q[tail]<=lookup_mask=='0;response_ready_q[tail]<=0;cr_sent_q[tail]<=0;
                addr_q[tail]<=ac_addr;snoop_q[tail]<=ac_snoop;selected_q[tail]<=lookup_mask;
                ac_pending_q[tail]<=lookup_mask;cr_seen_q[tail]<=0;responses_q[tail]<='0;
                cd_count_q[tail]<='0;line_data_q[tail]<='0;aggregate_q[tail]<=0;selected_data_q[tail]<=0;
                tail<=qinc(tail);
            end
            if(send_found) begin
                for(int t=0;t<TARGETS;t++)
                    if(m_ac_valid[t]&&m_ac_ready[t]) ac_pending_q[send_pick][t]<=0;
                if((ac_pending_q[send_pick]&~m_ac_ready)=='0) issued_q[send_pick]<=1;
            end
            for(int t=0;t<TARGETS;t++) begin
                if(m_cr_valid[t]&&m_cr_ready[t]) begin
                    responses_q[cr_pick[t]][t]<=m_cr_resp[t];cr_seen_q[cr_pick[t]][t]<=1;
                end
                if(m_cd_valid[t]&&m_cd_ready[t]) begin
                    line_data_q[cd_pick[t]][t][128*int'(cd_count_q[cd_pick[t]][t])+:128]<=m_cd_data[t];
                    if(m_cd_last[t]!=(cd_count_q[cd_pick[t]][t]==3)) protocol_error<=1;
                    cd_count_q[cd_pick[t]][t]<=cd_count_q[cd_pick[t]][t]+1'b1;
                end
            end
            if(count!=0&&head_collection_done&&!response_ready_q[head]) begin
                aggregate_q[head]<=head_aggregate;selected_data_q[head]<=head_data;
                response_ready_q[head]<=1;if(head_internal_error) protocol_error<=1;
            end
            if(cr_fire&&aggregate_q[head][0]&&!aggregate_q[head][1]) begin
                cr_sent_q[head]<=1;send_beat<=0;
            end
            if(cd_fire&&!cd_last) send_beat<=send_beat+1'b1;
            if(pop) begin q_valid[head]<=0;head<=qinc(head);send_beat<=0;end
            unique case({push,pop})
                2'b10:count<=count+1'b1;
                2'b01:count<=count-1'b1;
                default:;
            endcase
        end
    end
    initial begin
        assert(TARGETS>0&&FILTER_ENTRIES>0&&(FILTER_ENTRIES&(FILTER_ENTRIES-1))==0)
            else $fatal(1,"ACE_SNOOP_FABRIC_GEOMETRY");
        assert(OUTSTANDING>0) else $fatal(1,"ACE_SNOOP_FABRIC_OUTSTANDING");
    end
    assert property(@(posedge clk) disable iff(!rst_n) cr_valid&&!cr_ready |=>
        cr_valid&&$stable(cr_resp));
    assert property(@(posedge clk) disable iff(!rst_n) cd_valid&&!cd_ready |=>
        cd_valid&&$stable({cd_data,cd_last}));
    // CD is only ever stored into a context whose CR announced DataTransfer.
    for(genvar g=0;g<TARGETS;g++)
        assert property(@(posedge clk) disable iff(!rst_n) m_cd_valid[g]&&m_cd_ready[g] |->
            (cr_seen_q[cd_pick[g]][g] ? responses_q[cd_pick[g]][g][0] : m_cr_resp[g][0]))
            else $fatal(1,"FABRIC_CD_ASSOCIATION");
    for(genvar g=0;g<TARGETS;g++)
        assert property(@(posedge clk) disable iff(!rst_n) m_ac_valid[g]&&!m_ac_ready[g] |=>
            m_ac_valid[g]&&$stable({m_ac_addr[g],m_ac_snoop[g]}));
endmodule
