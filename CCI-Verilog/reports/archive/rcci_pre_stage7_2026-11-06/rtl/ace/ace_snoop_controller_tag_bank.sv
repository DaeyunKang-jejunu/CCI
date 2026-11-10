// Tagged multi-context snoop service bank.
//
// AC/CR/CD association remains ordered at the ACE pins. Completion delivery
// and context lifetime are tag based: status is queued per owner, CD data is
// selected by tag, and only an explicit release returns the context.
module ace_snoop_controller_tag_bank #(
    parameter int OUTSTANDING=4,
    parameter int OWNERS=5,
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING)),
    parameter int OW=(OWNERS<2?1:$clog2(OWNERS))
)(
    input logic clk,rst_n,
    input logic req_valid,output logic req_ready,input logic [63:0] req_addr,
    input logic [3:0] req_snoop,input logic [OW-1:0] req_owner,output logic [QW-1:0] req_tag,
    output logic [OWNERS-1:0] status_valid,input logic [OWNERS-1:0] status_ready,
    output logic [OWNERS-1:0][QW-1:0] status_tag,
    output logic [OWNERS-1:0][4:0] status_resp,
    input logic data_select_valid,output logic data_select_ready,
    input logic [OW-1:0] data_select_owner,input logic [QW-1:0] data_select_tag,
    output logic data_valid,output logic [QW-1:0] data_tag,
    output logic [511:0] data,input logic data_done,
    input logic release_valid,output logic release_ready,
    input logic [OW-1:0] release_owner,input logic [QW-1:0] release_tag,
    output logic fault,output logic idle,
    output logic ac_valid,input logic ac_ready,output logic [63:0] ac_addr,output logic [3:0] ac_snoop,
    input logic cr_valid,output logic cr_ready,input logic [4:0] cr_resp,
    input logic cd_valid,output logic cd_ready,input logic [127:0] cd_data,input logic cd_last,
    output logic aw_valid,input logic aw_ready,output logic [63:0] aw_addr,
    output logic [7:0] aw_len,output logic [2:0] aw_size,output logic [1:0] aw_burst,
    output logic w_valid,input logic w_ready,output logic [127:0] w_data,
    output logic [15:0] w_strb,output logic w_last,
    input logic b_valid,output logic b_ready,input logic [1:0] b_resp,
    output logic [$clog2(OUTSTANDING+1)-1:0] outstanding_count
);
    localparam int SCW=$clog2(OUTSTANDING+1);
    logic [OUTSTANDING-1:0] c_req_valid,c_req_ready,c_rsp_valid,c_rsp_ready,c_fault,c_idle;
    logic [OUTSTANDING-1:0][4:0] c_rsp_resp;
    logic [OUTSTANDING-1:0][511:0] c_rsp_data;
    logic [OUTSTANDING-1:0] c_ac_valid,c_ac_ready,c_cr_valid,c_cr_ready,c_cd_valid,c_cd_ready,c_cd_last;
    logic [OUTSTANDING-1:0][63:0] c_ac_addr;logic [OUTSTANDING-1:0][3:0] c_ac_snoop;
    logic [OUTSTANDING-1:0][4:0] c_cr_resp;logic [OUTSTANDING-1:0][127:0] c_cd_data;
    logic [OUTSTANDING-1:0] c_aw_valid,c_aw_ready,c_w_valid,c_w_ready,c_w_last,c_b_valid,c_b_ready;
    logic [OUTSTANDING-1:0][63:0] c_aw_addr;logic [OUTSTANDING-1:0][7:0] c_aw_len;
    logic [OUTSTANDING-1:0][2:0] c_aw_size;logic [OUTSTANDING-1:0][1:0] c_aw_burst;
    logic [OUTSTANDING-1:0][127:0] c_w_data;logic [OUTSTANDING-1:0][15:0] c_w_strb;

    logic [QW-1:0] req_order[OUTSTANDING],ac_order[OUTSTANDING];
    logic [QW-1:0] req_tail,iss_head,ac_head,ac_tail;
    logic [SCW-1:0] req_count,unissued,ac_count;
    logic ac_cr_seen[OUTSTANDING],ac_need_cd[OUTSTANDING],ac_cd_done[OUTSTANDING];
    logic free_found,ac_found,aw_found;logic [QW-1:0] free_pick,ac_pick,aw_pick;
    logic wb_owner_valid;logic [QW-1:0] wb_owner;
    logic aw_hold_valid;logic [QW-1:0] aw_hold;

    logic [OUTSTANDING-1:0] tag_live,status_sent,data_consumed;
    logic [OUTSTANDING-1:0][OW-1:0] tag_owner;
    logic [OWNERS-1:0][QW-1:0] status_q_tag[OUTSTANDING];
    logic [OWNERS-1:0][4:0] status_q_resp[OUTSTANDING];
    logic [OWNERS-1:0][QW-1:0] status_head,status_tail;
    logic [OWNERS-1:0][SCW-1:0] status_count;
    logic data_hold;logic [QW-1:0] data_hold_tag;logic [OW-1:0] data_hold_owner;
    logic protocol_fault;

    wire req_fire=req_valid&&req_ready;
    wire ac_fire=ac_valid&&ac_ready;
    wire cr_fire=cr_valid&&cr_ready;
    wire cd_fire=cd_valid&&cd_ready;
    wire release_fire=release_valid&&release_ready;
    wire data_select_fire=data_select_valid&&data_select_ready;
    wire ac_head_cr_done=ac_count!=0&&(ac_cr_seen[ac_head]||cr_fire);
    wire ac_head_need_cd=ac_count!=0&&(cr_fire?cr_resp[0]:ac_need_cd[ac_head]);
    wire ac_head_cd_done=ac_count!=0&&(ac_cd_done[ac_head]||(cd_fire&&cd_last));
    wire ac_pop=ac_count!=0&&ac_head_cr_done&&(!ac_head_need_cd||ac_head_cd_done);
    function automatic [QW-1:0] qinc(input [QW-1:0] p);
        return p==QW'(OUTSTANDING-1)?'0:p+1'b1;
    endfunction

    always_comb begin
        free_found=0;free_pick=0;ac_found=0;ac_pick=0;aw_found=0;aw_pick=0;
        for(int i=0;i<OUTSTANDING;i++) begin
            if(!free_found&&c_req_ready[i]&&!tag_live[i]) begin free_found=1;free_pick=QW'(i);end
            if(!aw_found&&c_aw_valid[i]) begin aw_found=1;aw_pick=QW'(i);end
        end
        if(aw_hold_valid) begin aw_found=1;aw_pick=aw_hold;end
        if(unissued!=0) begin ac_pick=req_order[iss_head];ac_found=c_ac_valid[ac_pick];end
        c_req_valid='0;c_rsp_ready='0;c_ac_ready='0;c_cr_valid='0;c_cr_resp='0;
        c_cd_valid='0;c_cd_data='0;c_cd_last='0;c_w_ready='0;c_b_valid='0;
        req_ready=free_found&&int'(req_count)<OUTSTANDING&&!fault;
        req_tag=free_pick;
        if(req_ready)c_req_valid[free_pick]=req_valid;

        status_valid='0;status_tag='0;status_resp='0;
        for(int o=0;o<OWNERS;o++) if(status_count[o]!=0) begin
            status_valid[o]=1;
            status_tag[o]=status_q_tag[status_head[o]][o];
            status_resp[o]=status_q_resp[status_head[o]][o];
        end

        data_select_ready=!data_hold && int'(data_select_tag)<OUTSTANDING &&
            tag_live[data_select_tag] && status_sent[data_select_tag] &&
            tag_owner[data_select_tag]==data_select_owner && c_rsp_resp[data_select_tag][0] &&
            !data_consumed[data_select_tag] && !fault;
        data_valid=data_hold;data_tag=data_hold_tag;
        data=data_hold?c_rsp_data[data_hold_tag]:'0;
        release_ready=int'(release_tag)<OUTSTANDING && tag_live[release_tag] &&
            status_sent[release_tag] && tag_owner[release_tag]==release_owner &&
            (!c_rsp_resp[release_tag][0] || data_consumed[release_tag]) && !fault;
        if(release_valid&&release_ready)c_rsp_ready[release_tag]=1;

        ac_valid=ac_found&&int'(ac_count)<OUTSTANDING;ac_addr=ac_found?c_ac_addr[ac_pick]:0;
        ac_snoop=ac_found?c_ac_snoop[ac_pick]:0;
        if(ac_valid)c_ac_ready[ac_pick]=ac_ready;
        cr_ready=0;cd_ready=0;
        if(ac_count!=0) begin
            c_cr_valid[ac_order[ac_head]]=cr_valid;c_cr_resp[ac_order[ac_head]]=cr_resp;
            cr_ready=c_cr_ready[ac_order[ac_head]];
            c_cd_valid[ac_order[ac_head]]=cd_valid;c_cd_data[ac_order[ac_head]]=cd_data;
            c_cd_last[ac_order[ac_head]]=cd_last;cd_ready=c_cd_ready[ac_order[ac_head]];
        end
        aw_valid=0;aw_addr=0;aw_len=0;aw_size=0;aw_burst=0;
        w_valid=0;w_data=0;w_strb=0;w_last=0;b_ready=0;
        if(!wb_owner_valid&&aw_found) begin
            aw_valid=c_aw_valid[aw_pick];aw_addr=c_aw_addr[aw_pick];aw_len=c_aw_len[aw_pick];
            aw_size=c_aw_size[aw_pick];aw_burst=c_aw_burst[aw_pick];
        end
        if(wb_owner_valid) begin
            w_valid=c_w_valid[wb_owner];w_data=c_w_data[wb_owner];w_strb=c_w_strb[wb_owner];
            w_last=c_w_last[wb_owner];c_w_ready[wb_owner]=w_ready;
            c_b_valid[wb_owner]=b_valid;b_ready=c_b_ready[wb_owner];
        end
        outstanding_count=req_count;
        idle=req_count==0&&ac_count==0&&!wb_owner_valid&&(&c_idle)&&!req_valid&&!data_hold;
    end
    always_comb begin
        c_aw_ready='0;
        if(!wb_owner_valid&&aw_found)c_aw_ready[aw_pick]=aw_ready;
    end
    assign fault=(|c_fault)||protocol_fault;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            req_tail<=0;req_count<=0;iss_head<=0;unissued<=0;
            ac_head<=0;ac_tail<=0;ac_count<=0;wb_owner_valid<=0;wb_owner<=0;
            aw_hold_valid<=0;aw_hold<=0;tag_live<='0;status_sent<='0;data_consumed<='0;
            tag_owner<='0;status_head<='0;status_tail<='0;status_count<='0;
            data_hold<=0;data_hold_tag<=0;data_hold_owner<=0;protocol_fault<=0;
            for(int q=0;q<OUTSTANDING;q++) begin ac_cr_seen[q]<=0;ac_need_cd[q]<=0;ac_cd_done[q]<=0;end
        end else begin
            if(req_fire) begin
                req_order[req_tail]<=free_pick;req_tail<=qinc(req_tail);
                tag_live[free_pick]<=1;tag_owner[free_pick]<=req_owner;
                status_sent[free_pick]<=0;data_consumed[free_pick]<=0;
            end
            if(release_fire) begin
                tag_live[release_tag]<=0;status_sent[release_tag]<=0;data_consumed[release_tag]<=0;
            end
            unique case({req_fire,release_fire})
                2'b10:req_count<=req_count+1'b1;
                2'b01:req_count<=req_count-1'b1;
                default:;
            endcase

            // Each owner has an S-deep completion queue. Multiple controllers
            // may finish in one cycle, so tail/count updates are accumulated.
            for(int o=0;o<OWNERS;o++) begin
                automatic logic [QW-1:0] tail_tmp=status_tail[o];
                automatic int pushes=0;
                for(int i=0;i<OUTSTANDING;i++)
                    if(c_rsp_valid[i]&&tag_live[i]&&!status_sent[i]&&tag_owner[i]==OW'(o)) begin
                        status_q_tag[tail_tmp][o]<=QW'(i);
                        status_q_resp[tail_tmp][o]<=c_rsp_resp[i];
                        tail_tmp=qinc(tail_tmp);pushes++;
                        status_sent[i]<=1;
                    end
                status_tail[o]<=tail_tmp;
                if(status_valid[o]&&status_ready[o]) status_head[o]<=qinc(status_head[o]);
                status_count[o]<=SCW'(int'(status_count[o])+pushes-
                    int'(status_valid[o]&&status_ready[o]));
                if(int'(status_count[o])+pushes-int'(status_valid[o]&&status_ready[o])>OUTSTANDING)
                    protocol_fault<=1;
            end

            if(data_select_fire) begin
                data_hold<=1;data_hold_tag<=data_select_tag;data_hold_owner<=data_select_owner;
            end
            if(data_done) begin
                if(!data_hold) protocol_fault<=1;
                else begin data_consumed[data_hold_tag]<=1;data_hold<=0;end
            end
            if(data_select_valid&&!data_select_ready) begin
                if(int'(data_select_tag)>=OUTSTANDING || !tag_live[data_select_tag] ||
                   tag_owner[data_select_tag]!=data_select_owner) protocol_fault<=1;
            end
            if(release_valid&&!release_ready) begin
                if(int'(release_tag)>=OUTSTANDING || !tag_live[release_tag] ||
                   tag_owner[release_tag]!=release_owner) protocol_fault<=1;
            end

            if(ac_fire) begin
                ac_order[ac_tail]<=ac_pick;ac_cr_seen[ac_tail]<=0;ac_need_cd[ac_tail]<=0;ac_cd_done[ac_tail]<=0;
                ac_tail<=qinc(ac_tail);iss_head<=qinc(iss_head);
            end
            if(cr_fire) begin ac_cr_seen[ac_head]<=1;ac_need_cd[ac_head]<=cr_resp[0];end
            if(cd_fire&&cd_last)ac_cd_done[ac_head]<=1;
            if(ac_pop)ac_head<=qinc(ac_head);
            unique case({ac_fire,ac_pop})
                2'b10:ac_count<=ac_count+1'b1;
                2'b01:ac_count<=ac_count-1'b1;
                default:;
            endcase
            unique case({req_fire,ac_fire})
                2'b10:unissued<=unissued+1'b1;
                2'b01:unissued<=unissued-1'b1;
                default:;
            endcase
            if(!wb_owner_valid&&aw_valid&&!aw_ready) begin aw_hold_valid<=1;aw_hold<=aw_pick;end
            if(!wb_owner_valid&&aw_valid&&aw_ready) begin wb_owner_valid<=1;wb_owner<=aw_pick;aw_hold_valid<=0;end
            if(wb_owner_valid&&b_valid&&b_ready)wb_owner_valid<=0;
        end
    end

    for(genvar g=0;g<OUTSTANDING;g++) begin:G_CTRL
        ace_snoop_controller u_controller(
            .clk,.rst_n,.req_valid(c_req_valid[g]),.req_ready(c_req_ready[g]),.req_addr,.req_snoop,
            .rsp_valid(c_rsp_valid[g]),.rsp_ready(c_rsp_ready[g]),.rsp_resp(c_rsp_resp[g]),
            .rsp_data(c_rsp_data[g]),.fault(c_fault[g]),.idle(c_idle[g]),
            .ac_valid(c_ac_valid[g]),.ac_ready(c_ac_ready[g]),.ac_addr(c_ac_addr[g]),.ac_snoop(c_ac_snoop[g]),
            .cr_valid(c_cr_valid[g]),.cr_ready(c_cr_ready[g]),.cr_resp(c_cr_resp[g]),
            .cd_valid(c_cd_valid[g]),.cd_ready(c_cd_ready[g]),.cd_data(c_cd_data[g]),.cd_last(c_cd_last[g]),
            .aw_valid(c_aw_valid[g]),.aw_ready(c_aw_ready[g]),.aw_addr(c_aw_addr[g]),.aw_len(c_aw_len[g]),
            .aw_size(c_aw_size[g]),.aw_burst(c_aw_burst[g]),.w_valid(c_w_valid[g]),.w_ready(c_w_ready[g]),
            .w_data(c_w_data[g]),.w_strb(c_w_strb[g]),.w_last(c_w_last[g]),
            .b_valid(c_b_valid[g]),.b_ready(c_b_ready[g]),.b_resp);
    end
    initial assert(OUTSTANDING>1 && OWNERS>1) else $fatal(1,"ACE_TAG_BANK_GEOMETRY");
    assert property(@(posedge clk) disable iff(!rst_n) ac_fire |-> unissued!=0)
        else $fatal(1,"TAG_SNOOP_AC_ORDER");
    assert property(@(posedge clk) disable iff(!rst_n) ac_valid&&!ac_ready |=>
        ac_valid&&$stable({ac_addr,ac_snoop})) else $fatal(1,"TAG_SNOOP_AC_STABILITY");
    assert property(@(posedge clk) disable iff(!rst_n) data_valid&&!data_done |=>
        data_valid&&$stable({data_tag,data})) else $fatal(1,"TAG_DATA_STABILITY");
    always @(posedge clk) if(rst_n) begin
        assert(int'(req_count)<=OUTSTANDING) else $fatal(1,"TAG_REQ_OVERFLOW");
        for(int o=0;o<OWNERS;o++) assert(int'(status_count[o])<=OUTSTANDING)
            else $fatal(1,"TAG_STATUS_OVERFLOW");
        if(release_fire&&c_rsp_resp[release_tag][0]) assert(data_consumed[release_tag])
            else $fatal(1,"TAG_RELEASE_BEFORE_DATA_DONE");
    end
endmodule
