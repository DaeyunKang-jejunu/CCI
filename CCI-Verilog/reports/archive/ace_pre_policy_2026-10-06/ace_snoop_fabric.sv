// Broadcast/filtered ACE snoop fanout with one aggregate transaction in flight.
// Directory updates are authoritative when FILTER_ENABLE=1: every cache
// allocation and eviction must be reported through sf_update_*.
module ace_snoop_fabric import ace_snoop_pkg::*; #(
    parameter int TARGETS=2,
    parameter int FILTER_ENTRIES=16,
    parameter int TI=(TARGETS<2?1:$clog2(TARGETS)),
    parameter int FI=(FILTER_ENTRIES<2?1:$clog2(FILTER_ENTRIES))
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
    typedef enum logic [2:0] {IDLE,SEND_AC,COLLECT,SEND_CR,SEND_CD} state_t;
    state_t state;
    logic [63:0] addr;logic [3:0] snoop;
    logic [TARGETS-1:0] selected,ac_pending,cr_seen;
    logic [TARGETS-1:0][4:0] responses;
    logic [TARGETS-1:0][2:0] cd_count;
    logic [TARGETS-1:0][511:0] line_data;
    logic [4:0] aggregate;logic [511:0] selected_data;logic [1:0] send_beat;
    logic [4:0] aggregate_next;logic [511:0] selected_data_next;
    logic aggregate_internal_error;
    logic [57-FI:0] sf_tags[FILTER_ENTRIES];
    logic [TARGETS-1:0] sf_sharers[FILTER_ENTRIES];
    logic sf_valid[FILTER_ENTRIES],sf_overflow[FILTER_ENTRIES];
    wire [FI-1:0] request_index=(FILTER_ENTRIES==1)?'0:ac_addr[6+:FI];
    wire [FI-1:0] update_index=(FILTER_ENTRIES==1)?'0:sf_update_addr[6+:FI];
    wire [57-FI:0] request_tag=ac_addr[63:6+FI];
    wire [57-FI:0] update_tag=sf_update_addr[63:6+FI];
    logic [TARGETS-1:0] lookup_mask;
    logic collection_done;

    always_comb begin
        if(dvm(ac_snoop)) lookup_mask=active_mask;
        else if(filter_enable)
            lookup_mask=sf_overflow[request_index] ? active_mask :
                (sf_valid[request_index] && sf_tags[request_index]==request_tag) ?
                (sf_sharers[request_index] & active_mask):'0;
        else lookup_mask=active_mask;
        collection_done=(cr_seen==selected);
        for(int i=0;i<TARGETS;i++)
            if(selected[i] && cr_seen[i] && responses[i][0] && cd_count[i]!=4)
                collection_done=0;
        aggregate_next='0;selected_data_next='0;aggregate_internal_error=0;
        begin
            logic have_data;int dirty_count;
            have_data=0;dirty_count=0;
            for(int i=0;i<TARGETS;i++) if(selected[i]) begin
                aggregate_next|=responses[i];
                if(cd_count[i]!=0 && !responses[i][0]) begin
                    aggregate_next[1]=1;aggregate_internal_error=1;
                end
                if(responses[i][2]) dirty_count++;
                if(responses[i][0]) begin
                    if(!have_data) begin selected_data_next=line_data[i];have_data=1;end
                    else if(selected_data_next!=line_data[i]) begin
                        aggregate_next[1]=1;aggregate_internal_error=1;
                    end
                end
            end
            if(dirty_count>1) begin aggregate_next[1]=1;aggregate_internal_error=1;end
        end
    end
    assign ac_ready=state==IDLE;
    assign idle=state==IDLE && !ac_valid;
    always_comb begin
        for(int i=0;i<TARGETS;i++) begin
            m_ac_valid[i]=state==SEND_AC && ac_pending[i];
            m_ac_addr[i]=addr;m_ac_snoop[i]=snoop;
            m_cr_ready[i]=state==COLLECT && selected[i] && !cr_seen[i];
            m_cd_ready[i]=state==COLLECT && selected[i] && cd_count[i]<4;
        end
        cr_valid=state==SEND_CR;cr_resp=aggregate;
        cd_valid=state==SEND_CD;cd_data=selected_data[128*int'(send_beat)+:128];cd_last=send_beat==3;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state<=IDLE;addr<=0;snoop<=0;selected<=0;ac_pending<=0;cr_seen<=0;
            responses<='0;cd_count<='0;line_data<='0;aggregate<=0;selected_data<=0;
            send_beat<=0;protocol_error<=0;
            for(int i=0;i<FILTER_ENTRIES;i++) begin
                sf_valid[i]<=0;sf_overflow[i]<=0;sf_tags[i]<=0;sf_sharers[i]<=0;
            end
        end else begin
            if(sf_update_valid) begin
                if(int'(sf_update_target)>=TARGETS) protocol_error<=1;
                else if(sf_overflow[update_index]) ; // Sticky conservative broadcast until reset.
                else if(sf_update_present) begin
                    if(sf_valid[update_index] && sf_tags[update_index]!=update_tag &&
                       (sf_sharers[update_index] & ~(TARGETS'(1)<<sf_update_target))!='0) begin
                        // A direct-mapped replacement cannot discard another
                        // target's colliding line. Fall back to broadcast.
                        sf_overflow[update_index]<=1;
                    end else if(!sf_valid[update_index] || sf_tags[update_index]!=update_tag) begin
                        sf_valid[update_index]<=1;sf_tags[update_index]<=update_tag;
                        sf_sharers[update_index]<='0;sf_sharers[update_index][sf_update_target]<=1;
                    end else sf_sharers[update_index][sf_update_target]<=1;
                end else if(sf_valid[update_index] && sf_tags[update_index]==update_tag) begin
                    sf_sharers[update_index][sf_update_target]<=0;
                    if((sf_sharers[update_index] & ~(TARGETS'(1)<<sf_update_target))=='0)
                        sf_valid[update_index]<=0;
                end
            end
            if(sf_update_valid && ac_valid && ac_ready) protocol_error<=1;
            case(state)
                IDLE:if(ac_valid && ac_ready) begin
                    addr<=ac_addr;snoop<=ac_snoop;selected<=lookup_mask;ac_pending<=lookup_mask;
                    cr_seen<=0;responses<='0;cd_count<='0;line_data<='0;aggregate<=0;
                    selected_data<=0;send_beat<=0;
                    state<=lookup_mask=='0?SEND_CR:SEND_AC;
                end
                SEND_AC:begin
                    for(int i=0;i<TARGETS;i++) if(m_ac_valid[i] && m_ac_ready[i]) ac_pending[i]<=0;
                    if((ac_pending & ~m_ac_ready)=='0) state<=COLLECT;
                end
                COLLECT:begin
                    for(int i=0;i<TARGETS;i++) begin
                        if(m_cr_valid[i] && m_cr_ready[i]) begin
                            responses[i]<=m_cr_resp[i];cr_seen[i]<=1;
                        end
                        if(m_cd_valid[i] && m_cd_ready[i]) begin
                            line_data[i][128*int'(cd_count[i])+:128]<=m_cd_data[i];
                            if(m_cd_last[i]!=(cd_count[i]==3)) protocol_error<=1;
                            cd_count[i]<=cd_count[i]+1'b1;
                        end
                    end
                    if(collection_done) begin
                        aggregate<=aggregate_next;selected_data<=selected_data_next;
                        if(aggregate_internal_error) protocol_error<=1;
                        state<=SEND_CR;
                    end
                end
                SEND_CR:if(cr_ready) begin
                    if(aggregate[0] && !aggregate[1]) begin send_beat<=0;state<=SEND_CD;end
                    else state<=IDLE;
                end
                SEND_CD:if(cd_ready) begin
                    if(cd_last) state<=IDLE;else send_beat<=send_beat+1'b1;
                end
                default:begin state<=IDLE;protocol_error<=1;end
            endcase
        end
    end
    initial begin
        assert(TARGETS>0 && FILTER_ENTRIES>0 && (FILTER_ENTRIES&(FILTER_ENTRIES-1))==0)
            else $fatal(1,"ACE_SNOOP_FABRIC_GEOMETRY");
    end
    assert property(@(posedge clk) disable iff(!rst_n) cr_valid && !cr_ready |=> cr_valid && $stable(cr_resp));
    assert property(@(posedge clk) disable iff(!rst_n) cd_valid && !cd_ready |=> cd_valid && $stable({cd_data,cd_last}));
    for(genvar g=0;g<TARGETS;g++)
        assert property(@(posedge clk) disable iff(!rst_n) m_ac_valid[g] && !m_ac_ready[g] |=>
            m_ac_valid[g] && $stable({m_ac_addr[g],m_ac_snoop[g]}));
endmodule
