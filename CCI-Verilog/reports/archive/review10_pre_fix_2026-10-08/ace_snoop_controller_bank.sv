// Multi-context wrapper for ace_snoop_controller. Requests and responses are
// ordered because the service interface has no ID. AC requests can be in
// flight concurrently; an AC-order FIFO routes the ordered CR/CD stream back
// to the controller that issued each request. Dirty writebacks are serialized
// on the ID-less memory port while clean contexts may continue.
module ace_snoop_controller_bank #(
    parameter int OUTSTANDING=4,
    parameter int QW=(OUTSTANDING<2?1:$clog2(OUTSTANDING))
)(
    input logic clk,rst_n,
    input logic req_valid,output logic req_ready,input logic [63:0] req_addr,input logic [3:0] req_snoop,
    output logic rsp_valid,input logic rsp_ready,output logic [4:0] rsp_resp,
    output logic [511:0] rsp_data,output logic fault,output logic idle,
    output logic ac_valid,input logic ac_ready,output logic [63:0] ac_addr,output logic [3:0] ac_snoop,
    input logic cr_valid,output logic cr_ready,input logic [4:0] cr_resp,
    input logic cd_valid,output logic cd_ready,input logic [127:0] cd_data,input logic cd_last,
    output logic aw_valid,input logic aw_ready,output logic [63:0] aw_addr,
    output logic [7:0] aw_len,output logic [2:0] aw_size,output logic [1:0] aw_burst,
    output logic w_valid,input logic w_ready,output logic [127:0] w_data,output logic [15:0] w_strb,output logic w_last,
    input logic b_valid,output logic b_ready,input logic [1:0] b_resp,
    output logic [$clog2(OUTSTANDING+1)-1:0] outstanding_count
);
    logic [OUTSTANDING-1:0] c_req_valid,c_req_ready,c_rsp_valid,c_rsp_ready,c_fault,c_idle;
    logic [OUTSTANDING-1:0][4:0] c_rsp_resp;logic [OUTSTANDING-1:0][511:0] c_rsp_data;
    logic [OUTSTANDING-1:0] c_ac_valid,c_ac_ready,c_cr_valid,c_cr_ready,c_cd_valid,c_cd_ready,c_cd_last;
    logic [OUTSTANDING-1:0][63:0] c_ac_addr;logic [OUTSTANDING-1:0][3:0] c_ac_snoop;
    logic [OUTSTANDING-1:0][4:0] c_cr_resp;logic [OUTSTANDING-1:0][127:0] c_cd_data;
    logic [OUTSTANDING-1:0] c_aw_valid,c_aw_ready,c_w_valid,c_w_ready,c_w_last,c_b_valid,c_b_ready;
    logic [OUTSTANDING-1:0][63:0] c_aw_addr;logic [OUTSTANDING-1:0][7:0] c_aw_len;
    logic [OUTSTANDING-1:0][2:0] c_aw_size;logic [OUTSTANDING-1:0][1:0] c_aw_burst;
    logic [OUTSTANDING-1:0][127:0] c_w_data;logic [OUTSTANDING-1:0][15:0] c_w_strb;

    logic [QW-1:0] req_order[OUTSTANDING],ac_order[OUTSTANDING];
    logic [QW-1:0] req_head,req_tail,ac_head,ac_tail;
    logic [$clog2(OUTSTANDING+1)-1:0] req_count,ac_count;
    logic ac_cr_seen[OUTSTANDING],ac_need_cd[OUTSTANDING],ac_cd_done[OUTSTANDING];
    logic free_found,ac_found,aw_found;logic [QW-1:0] free_pick,ac_pick,aw_pick;
    logic wb_owner_valid;logic [QW-1:0] wb_owner;
    wire req_fire=req_valid&&req_ready;
    wire ac_fire=ac_valid&&ac_ready;
    wire cr_fire=cr_valid&&cr_ready;
    wire cd_fire=cd_valid&&cd_ready;
    wire rsp_fire=rsp_valid&&rsp_ready;
    wire any_fault=|c_fault;
    wire ac_head_cr_done=ac_count!=0&&(ac_cr_seen[ac_head]||cr_fire);
    // DataTransfer remains an association/drain obligation even when Error is
    // also set; the controller retains the snapshot for diagnosis/recovery.
    wire ac_head_need_cd=ac_count!=0&&(cr_fire?cr_resp[0]:ac_need_cd[ac_head]);
    wire ac_head_cd_done=ac_count!=0&&(ac_cd_done[ac_head]||(cd_fire&&cd_last));
    wire ac_pop=ac_count!=0&&ac_head_cr_done&&(!ac_head_need_cd||ac_head_cd_done);
    function automatic [QW-1:0] qinc(input [QW-1:0] p);
        return p==QW'(OUTSTANDING-1)?'0:p+1'b1;
    endfunction

    always_comb begin
        free_found=0;free_pick=0;ac_found=0;ac_pick=0;aw_found=0;aw_pick=0;
        for(int i=0;i<OUTSTANDING;i++) begin
            if(!free_found&&c_req_ready[i]) begin free_found=1;free_pick=QW'(i);end
            if(!ac_found&&c_ac_valid[i]) begin ac_found=1;ac_pick=QW'(i);end
            if(!aw_found&&c_aw_valid[i]) begin aw_found=1;aw_pick=QW'(i);end
        end
        c_req_valid='0;c_rsp_ready='0;c_ac_ready='0;c_cr_valid='0;c_cr_resp='0;
        c_cd_valid='0;c_cd_data='0;c_cd_last='0;c_w_ready='0;c_b_valid='0;
        req_ready=free_found&&int'(req_count)<OUTSTANDING&&!any_fault;
        if(req_ready) c_req_valid[free_pick]=req_valid;
        rsp_valid=0;rsp_resp=0;rsp_data=0;
        if(req_count!=0) begin
            rsp_valid=c_rsp_valid[req_order[req_head]];rsp_resp=c_rsp_resp[req_order[req_head]];
            rsp_data=c_rsp_data[req_order[req_head]];c_rsp_ready[req_order[req_head]]=rsp_ready;
        end
        ac_valid=ac_found&&int'(ac_count)<OUTSTANDING;ac_addr=ac_found?c_ac_addr[ac_pick]:0;
        ac_snoop=ac_found?c_ac_snoop[ac_pick]:0;
        if(ac_valid) c_ac_ready[ac_pick]=ac_ready;
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
        idle=req_count==0&&ac_count==0&&!wb_owner_valid&&(&c_idle)&&!req_valid;
    end
    always_comb begin
        c_aw_ready='0;
        if(!wb_owner_valid&&aw_found) c_aw_ready[aw_pick]=aw_ready;
    end
    assign fault=any_fault;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            req_head<=0;req_tail<=0;req_count<=0;ac_head<=0;ac_tail<=0;ac_count<=0;
            wb_owner_valid<=0;wb_owner<=0;
            for(int q=0;q<OUTSTANDING;q++) begin ac_cr_seen[q]<=0;ac_need_cd[q]<=0;ac_cd_done[q]<=0;end
        end else begin
            if(req_fire) begin req_order[req_tail]<=free_pick;req_tail<=qinc(req_tail);end
            if(rsp_fire) req_head<=qinc(req_head);
            unique case({req_fire,rsp_fire})
                2'b10:req_count<=req_count+1'b1;
                2'b01:req_count<=req_count-1'b1;
                default:;
            endcase
            if(ac_fire) begin
                ac_order[ac_tail]<=ac_pick;ac_cr_seen[ac_tail]<=0;ac_need_cd[ac_tail]<=0;ac_cd_done[ac_tail]<=0;
                ac_tail<=qinc(ac_tail);
            end
            if(cr_fire) begin ac_cr_seen[ac_head]<=1;ac_need_cd[ac_head]<=cr_resp[0];end
            if(cd_fire&&cd_last) ac_cd_done[ac_head]<=1;
            if(ac_pop) ac_head<=qinc(ac_head);
            unique case({ac_fire,ac_pop})
                2'b10:ac_count<=ac_count+1'b1;
                2'b01:ac_count<=ac_count-1'b1;
                default:;
            endcase
            if(!wb_owner_valid&&aw_valid&&aw_ready) begin wb_owner_valid<=1;wb_owner<=aw_pick;end
            if(wb_owner_valid&&b_valid&&b_ready) wb_owner_valid<=0;
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
    initial assert(OUTSTANDING>1) else $fatal(1,"ACE_SNOOP_BANK_GEOMETRY");
    assert property(@(posedge clk) disable iff(!rst_n) rsp_valid&&!rsp_ready |=>
        rsp_valid&&$stable({rsp_resp,rsp_data}));
endmodule
