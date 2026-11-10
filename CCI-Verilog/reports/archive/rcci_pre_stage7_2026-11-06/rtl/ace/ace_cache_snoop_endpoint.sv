// Ordered multi-outstanding ACE snoop endpoint. AC has no transaction ID, so
// CR/CD are returned in AC acceptance order. State changes happen at AC
// acceptance; response metadata and the data snapshot are retained per entry.
// Local line commands remain an integration boundary, not an AXI fill path.
module ace_cache_snoop_endpoint import ace_snoop_pkg::*; #(
    parameter int LINES=8, parameter int OUTSTANDING=4,
    parameter int IW=(LINES<2?1:$clog2(LINES)),
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING))
)(
    input logic clk,rst_n,
    input logic local_valid, output logic local_ready,
    input logic [1:0] local_op,
    input logic [63:0] local_addr, input logic [511:0] local_wdata,
    input cache_state_t local_state,
    output logic local_rsp_valid, input logic local_rsp_ready,
    output logic local_error,local_hit, output cache_state_t local_rstate,
    output logic [511:0] local_rdata,
    input logic ac_valid, output logic ac_ready,
    input logic [63:0] ac_addr, input logic [3:0] ac_snoop,
    output logic cr_valid,input logic cr_ready,output logic [4:0] cr_resp,
    output logic cd_valid,input logic cd_ready,output logic [127:0] cd_data,output logic cd_last,
    output logic idle
);
    cache_state_t states[LINES];logic [57:0] tags[LINES];logic [511:0] data[LINES];
    wire [IW-1:0] ai=(LINES==1)?'0:ac_addr[6+:IW];
    wire [IW-1:0] li=(LINES==1)?'0:local_addr[6+:IW];
    logic hit;logic [4:0] decoded;cache_state_t next_state;

    logic [4:0] response_q[OUTSTANDING];
    logic [511:0] snapshot_q[OUTSTANDING];
    logic cr_pending_q[OUTSTANDING],cd_pending_q[OUTSTANDING];
    logic [QW-1:0] head,tail;logic [$clog2(OUTSTANDING+1)-1:0] count;
    logic [1:0] beat;
    wire push=ac_valid&&ac_ready;
    wire cr_fire=cr_valid&&cr_ready;
    wire cd_fire=cd_valid&&cd_ready;
    wire pop=count!=0 && (!cr_pending_q[head] || cr_fire) &&
        (!cd_pending_q[head] || (cd_fire&&cd_last));
    function automatic [QW-1:0] qinc(input [QW-1:0] p);
        return p==QW'(OUTSTANDING-1)?'0:p+1'b1;
    endfunction

    always_comb begin
        hit=states[ai]!=INVALID && tags[ai]==ac_addr[63:6];
        decoded=0;next_state=states[ai];
        if(dvm(ac_snoop)) begin
            if(ac_snoop==DVM_COMPLETE && ac_addr!=0) decoded[1]=1;
        end else if(!supported(ac_snoop) || ac_addr[5:0]!=0) decoded[1]=1;
        else if(hit) begin
            decoded[4]=unique_line(states[ai]);
            case(ac_snoop)
                READ_ONCE: begin decoded[0]=1;decoded[3]=1;end
                READ_SHARED,READ_CLEAN,READ_NOT_SHARED_DIRTY: begin
                    decoded[0]=1;decoded[2]=dirty(states[ai]);decoded[3]=1;next_state=SHARED_CLEAN;
                end
                READ_UNIQUE: begin decoded[0]=1;decoded[2]=dirty(states[ai]);next_state=INVALID;end
                CLEAN_INVALID: begin decoded[0]=dirty(states[ai]);decoded[2]=dirty(states[ai]);next_state=INVALID;end
                CLEAN_SHARED: begin
                    decoded[0]=dirty(states[ai]);decoded[2]=dirty(states[ai]);decoded[3]=1;next_state=SHARED_CLEAN;
                end
                MAKE_INVALID: next_state=INVALID;
                default: decoded[1]=1;
            endcase
        end
    end
    assign ac_ready=int'(count)<OUTSTANDING && !local_rsp_valid;
    assign local_ready=count==0 && !local_rsp_valid && !ac_valid;
    assign cr_valid=count!=0 && cr_pending_q[head];
    assign cr_resp=count!=0?response_q[head]:'0;
    assign cd_valid=count!=0 && cd_pending_q[head];
    assign cd_data=count!=0?snapshot_q[head][128*int'(beat)+:128]:'0;
    assign cd_last=beat==3;
    assign idle=count==0 && !local_rsp_valid && !ac_valid;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            head<=0;tail<=0;count<=0;beat<=0;local_rsp_valid<=0;
            local_error<=0;local_hit<=0;local_rstate<=INVALID;local_rdata<=0;
            for(int q=0;q<OUTSTANDING;q++) begin
                response_q[q]<=0;snapshot_q[q]<=0;cr_pending_q[q]<=0;cd_pending_q[q]<=0;
            end
            for(int i=0;i<LINES;i++) begin states[i]<=INVALID;tags[i]<=0;data[i]<=0;end
        end else begin
            if(local_rsp_valid&&local_rsp_ready) local_rsp_valid<=0;
            if(cr_fire) cr_pending_q[head]<=0;
            if(cd_fire) begin
                if(cd_last) cd_pending_q[head]<=0;else beat<=beat+1'b1;
            end
            if(pop) begin head<=qinc(head);beat<=0;end
            if(push) begin
                response_q[tail]<=decoded;snapshot_q[tail]<=hit?data[ai]:'0;
                cr_pending_q[tail]<=1;cd_pending_q[tail]<=decoded[0];tail<=qinc(tail);
                if(hit&&!decoded[1]) states[ai]<=next_state;
            end
            unique case({push,pop})
                2'b10:count<=count+1'b1;
                2'b01:count<=count-1'b1;
                default:;
            endcase
            if(local_valid&&local_ready) begin
                local_rsp_valid<=1;local_error<=0;
                local_hit<=states[li]!=INVALID&&tags[li]==local_addr[63:6];
                local_rstate<=(tags[li]==local_addr[63:6])?states[li]:INVALID;
                local_rdata<=data[li];
                if(local_addr[5:0]!=0) local_error<=1;
                else case(local_op)
                    0:;
                    1: begin
                        if(dirty(states[li]) || !(local_state inside
                            {INVALID,SHARED_CLEAN,UNIQUE_CLEAN,SHARED_DIRTY,UNIQUE_DIRTY})) local_error<=1;
                        else begin tags[li]<=local_addr[63:6];data[li]<=local_wdata;states[li]<=local_state;end
                    end
                    2: begin
                        if(tags[li]!=local_addr[63:6]||!unique_line(states[li])) local_error<=1;
                        else begin data[li]<=local_wdata;states[li]<=UNIQUE_DIRTY;end
                    end
                    3: begin
                        if(tags[li]==local_addr[63:6]) begin
                            if(dirty(states[li])) local_error<=1;else states[li]<=INVALID;
                        end
                    end
                endcase
            end
        end
    end
    initial begin
        assert(LINES>0&&(LINES&(LINES-1))==0) else $fatal(1,"ACE_CACHE_GEOMETRY");
        assert(OUTSTANDING>0) else $fatal(1,"ACE_CACHE_OUTSTANDING");
    end
    assert property(@(posedge clk) disable iff(!rst_n) cr_valid&&!cr_ready |=>
        cr_valid&&$stable(cr_resp));
    assert property(@(posedge clk) disable iff(!rst_n) cd_valid&&!cd_ready |=>
        cd_valid&&$stable({cd_data,cd_last}));
    assert property(@(posedge clk) disable iff(!rst_n) int'(count)<=OUTSTANDING);
endmodule
