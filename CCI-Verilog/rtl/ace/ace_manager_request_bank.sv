// Multi-context wrapper around the verified single-transaction ACE manager.
//
// IDs are mapped to fixed slots.  This deliberately serializes requests that
// map to the same slot (and therefore every repeated ID) while allowing
// different slots to make progress independently.  The external R/B channels
// are locked from the first response beat through RACK/WACK.  AXI4 W data is
// routed in AW acceptance order because W has no ID.
module ace_manager_request_bank import ace_snoop_pkg::*; #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int LINE_BYTES=64, parameter int CONTEXTS=4,
    parameter int TOKEN_WIDTH=1,
    parameter int CW=(CONTEXTS<2?1:$clog2(CONTEXTS))
)(
    input logic clk,rst_n,input logic accept_enable,
    input logic ar_admission_enable,input logic aw_admission_enable,
    input logic ar_tokenized,input logic aw_tokenized,
    input logic [TOKEN_WIDTH-1:0] ar_token_tag,input logic [TOKEN_WIDTH-1:0] aw_token_tag,

    input logic ar_valid,output logic ar_ready,input logic [ID_WIDTH-1:0] ar_id,
    input logic [ADDR_WIDTH-1:0] ar_addr,input logic [7:0] ar_len,
    input logic [2:0] ar_size,input logic [1:0] ar_burst,
    input logic [3:0] ar_snoop,input logic [1:0] ar_domain,
    input logic [1:0] ar_bar,input logic [3:0] ar_cache,input logic ar_lock,
    output logic r_valid,input logic r_ready,output logic [ID_WIDTH-1:0] r_id,
    output logic [DATA_WIDTH-1:0] r_data,output logic r_last,
    output logic [3:0] r_resp,input logic r_ack,

    input logic aw_valid,output logic aw_ready,input logic [ID_WIDTH-1:0] aw_id,
    input logic [ADDR_WIDTH-1:0] aw_addr,input logic [7:0] aw_len,
    input logic [2:0] aw_size,input logic [1:0] aw_burst,
    input logic [2:0] aw_snoop,input logic [1:0] aw_domain,
    input logic [1:0] aw_bar,input logic [3:0] aw_cache,input logic aw_lock,input logic aw_unique,
    input logic w_valid,output logic w_ready,input logic [DATA_WIDTH-1:0] w_data,
    input logic [DATA_WIDTH/8-1:0] w_strb,input logic w_last,
    output logic b_valid,input logic b_ready,output logic [ID_WIDTH-1:0] b_id,
    output logic [1:0] b_resp,input logic w_ack,

    output logic snoop_req_valid,input logic snoop_req_ready,
    output logic [63:0] snoop_req_addr,output logic [3:0] snoop_req_snoop,
    input logic snoop_rsp_valid,output logic snoop_rsp_ready,
    input logic [4:0] snoop_rsp_resp,input logic [511:0] snoop_rsp_data,

    output logic mem_aw_valid,input logic mem_aw_ready,output logic [63:0] mem_aw_addr,
    output logic [7:0] mem_aw_len,output logic [2:0] mem_aw_size,output logic [1:0] mem_aw_burst,
    output logic mem_w_valid,input logic mem_w_ready,output logic [DATA_WIDTH-1:0] mem_w_data,
    output logic [DATA_WIDTH/8-1:0] mem_w_strb,output logic mem_w_last,
    input logic mem_b_valid,output logic mem_b_ready,input logic [1:0] mem_b_resp,
    output logic mem_ar_valid,input logic mem_ar_ready,output logic [63:0] mem_ar_addr,
    output logic [7:0] mem_ar_len,output logic [2:0] mem_ar_size,output logic [1:0] mem_ar_burst,
    input logic mem_r_valid,output logic mem_r_ready,input logic [DATA_WIDTH-1:0] mem_r_data,
    input logic mem_r_last,input logic [1:0] mem_r_resp,
    input logic [1:0] reservation_kill_valid,input logic [1:0][63:0] reservation_kill_addr,
    output logic busy,output logic protocol_error,output logic [1:0] token_release_count,
    output logic [1:0] token_release_valid,
    output logic [1:0][TOKEN_WIDTH-1:0] token_release_tag,
    output logic [CW:0] outstanding_count,
    // RCCI_PLAN 14.3-2: per-context address ownership span (RACK/WACK lifetime).
    output logic [CONTEXTS-1:0] own_valid,
    output logic [CONTEXTS-1:0][58:0] own_first_line,own_last_line
);
    localparam int WQW=(CONTEXTS<2?1:$clog2(CONTEXTS));
    logic [CW-1:0] ar_slot,aw_slot;
    assign ar_slot=CW'(ar_id);
    assign aw_slot=CW'(aw_id);

    logic [CONTEXTS-1:0] c_busy,c_error;
    logic [CONTEXTS-1:0] c_ar_valid,c_ar_ready,c_aw_valid,c_aw_ready;
    logic [CONTEXTS-1:0] c_w_valid,c_w_ready,c_r_valid,c_r_ready,c_r_last,c_b_valid,c_b_ready;
    logic [CONTEXTS-1:0] c_r_ack,c_w_ack;
    logic [CONTEXTS-1:0][ID_WIDTH-1:0] c_r_id,c_b_id;
    logic [CONTEXTS-1:0][DATA_WIDTH-1:0] c_r_data;
    logic [CONTEXTS-1:0][3:0] c_r_resp;
    logic [CONTEXTS-1:0][1:0] c_b_resp;

    logic [CONTEXTS-1:0] c_sreq_valid,c_sreq_ready,c_srsp_valid,c_srsp_ready;
    logic [CONTEXTS-1:0][63:0] c_sreq_addr;
    logic [CONTEXTS-1:0][3:0] c_sreq_snoop;
    logic [CONTEXTS-1:0][4:0] c_srsp_resp;
    logic [CONTEXTS-1:0][511:0] c_srsp_data;

    logic [CONTEXTS-1:0] c_maw_valid,c_maw_ready,c_mw_valid,c_mw_ready,c_mb_valid,c_mb_ready;
    logic [CONTEXTS-1:0][63:0] c_maw_addr;
    logic [CONTEXTS-1:0][7:0] c_maw_len;
    logic [CONTEXTS-1:0][2:0] c_maw_size;
    logic [CONTEXTS-1:0][1:0] c_maw_burst;
    logic [CONTEXTS-1:0][DATA_WIDTH-1:0] c_mw_data;
    logic [CONTEXTS-1:0][DATA_WIDTH/8-1:0] c_mw_strb;
    logic [CONTEXTS-1:0] c_mw_last;
    logic [CONTEXTS-1:0] c_mar_valid,c_mar_ready,c_mr_valid,c_mr_ready;
    logic [CONTEXTS-1:0][63:0] c_mar_addr;
    logic [CONTEXTS-1:0][7:0] c_mar_len;
    logic [CONTEXTS-1:0][2:0] c_mar_size;
    logic [CONTEXTS-1:0][1:0] c_mar_burst;

    logic global_active;
    logic [CW-1:0] global_slot;
    wire all_idle=!(|c_busy);
    wire ar_global=ar_bar[0] || dvm(ar_snoop);
    wire aw_global=aw_bar[0];
    wire [CW-1:0] ar_target=(ar_bar[0] || global_active)?global_slot:ar_slot;
    wire [CW-1:0] aw_target=(aw_bar[0] || global_active)?global_slot:aw_slot;
    // REVIEW 10.1: at most one exclusive store (ARLOCK CleanUnique) is in flight,
    // so two threads cannot both pass the shared monitor before either commits.
    logic [CONTEXTS-1:0] c_ex_store_busy;
    wire ar_ex_store=ar_lock && ar_snoop==CLEAN_UNIQUE;
    wire ar_admit=accept_enable && ar_admission_enable && (!global_active ? (!ar_global || all_idle) : ar_bar[0]) &&
        !(ar_ex_store && |c_ex_store_busy);
    wire aw_admit=accept_enable && aw_admission_enable && (!global_active ? (!aw_global || all_idle) : aw_bar[0]);

    // W has no ID.  Queue every data-bearing AW and route its beats to the
    // corresponding context in acceptance order.
    logic [CW-1:0] wq_slot[CONTEXTS];
    logic [7:0] wq_len[CONTEXTS];
    logic [WQW-1:0] wq_head,wq_tail;
    logic [CW:0] wq_count;
    logic [7:0] wq_beat;
    wire aw_data_bearing=!aw_bar[0] && aw_snoop!=EVICT;
    wire aw_fire=aw_valid && aw_ready;
    wire w_fire=w_valid && w_ready;
    wire ar_fire_global=ar_valid && ar_ready && ar_global;
    wire aw_fire_global=aw_valid && aw_ready && aw_global;

    logic snoop_owner_valid,mar_owner_valid,maw_owner_valid;
    logic [CW-1:0] snoop_owner,mar_owner,maw_owner;
    logic r_owner_valid,r_wait_ack,b_owner_valid,b_wait_ack;
    logic [CW-1:0] r_owner,b_owner;
    logic [CW-1:0] snoop_pick,mar_pick,r_pick,b_pick;
    logic snoop_found,mar_found,r_found,b_found;
    // REVIEW 10.2: a source shown with VALID && !READY keeps the grant until
    // its handshake, so a later lower-index request cannot change the payload.
    logic snoop_hold_valid,mar_hold_valid;logic [CW-1:0] snoop_hold,mar_hold;
    logic [CONTEXTS-1:0] context_tokenized;
    logic [CONTEXTS-1:0][TOKEN_WIDTH-1:0] context_token_tag;

    always_comb begin
        c_ar_valid='0;c_aw_valid='0;c_w_valid='0;c_r_ready='0;c_b_ready='0;
        c_r_ack='0;c_w_ack='0;c_srsp_valid='0;c_srsp_resp='0;c_srsp_data='0;
        c_maw_ready='0;c_mw_ready='0;c_mb_valid='0;c_mar_ready='0;c_mr_valid='0;
        ar_ready=0;aw_ready=0;w_ready=0;
        r_valid=0;r_id=0;r_data=0;r_last=0;r_resp=0;
        b_valid=0;b_id=0;b_resp=0;
        snoop_req_valid=0;snoop_req_addr=0;snoop_req_snoop=0;snoop_rsp_ready=0;
        mem_aw_valid=0;mem_aw_addr=0;mem_aw_len=0;mem_aw_size=0;mem_aw_burst=0;
        mem_w_valid=0;mem_w_data=0;mem_w_strb=0;mem_w_last=0;mem_b_ready=0;
        mem_ar_valid=0;mem_ar_addr=0;mem_ar_len=0;mem_ar_size=0;mem_ar_burst=0;mem_r_ready=0;
        token_release_valid[0]=r_owner_valid&&r_wait_ack&&r_ack&&context_tokenized[r_owner];
        token_release_valid[1]=b_owner_valid&&b_wait_ack&&w_ack&&context_tokenized[b_owner];
        token_release_tag[0]=context_token_tag[r_owner];
        token_release_tag[1]=context_token_tag[b_owner];
        token_release_count=2'(token_release_valid[0])+2'(token_release_valid[1]);

        if(ar_admit) begin c_ar_valid[ar_target]=ar_valid;ar_ready=c_ar_ready[ar_target];end
        if(aw_admit && (!aw_data_bearing || int'(wq_count)<CONTEXTS)) begin
            c_aw_valid[aw_target]=aw_valid;aw_ready=c_aw_ready[aw_target];
        end
        if(wq_count!=0) begin
            c_w_valid[wq_slot[wq_head]]=w_valid;
            w_ready=c_w_ready[wq_slot[wq_head]];
        end

        snoop_found=0;snoop_pick=0;
        for(int i=0;i<CONTEXTS;i++) if(!snoop_found && c_sreq_valid[i]) begin snoop_found=1;snoop_pick=CW'(i);end
        if(snoop_hold_valid) begin snoop_found=1;snoop_pick=snoop_hold;end
        if(snoop_owner_valid) snoop_pick=snoop_owner;
        if(snoop_owner_valid || snoop_found) begin
            snoop_req_valid=c_sreq_valid[snoop_pick];snoop_req_addr=c_sreq_addr[snoop_pick];
            snoop_req_snoop=c_sreq_snoop[snoop_pick];
            c_srsp_valid[snoop_pick]=snoop_rsp_valid;c_srsp_resp[snoop_pick]=snoop_rsp_resp;
            c_srsp_data[snoop_pick]=snoop_rsp_data;snoop_rsp_ready=c_srsp_ready[snoop_pick];
        end

        mar_found=0;mar_pick=0;
        for(int i=0;i<CONTEXTS;i++) if(!mar_found && c_mar_valid[i]) begin mar_found=1;mar_pick=CW'(i);end
        if(mar_hold_valid) begin mar_found=1;mar_pick=mar_hold;end
        if(mar_owner_valid) mar_pick=mar_owner;
        if(!mar_owner_valid && mar_found) begin
            mem_ar_valid=c_mar_valid[mar_pick];mem_ar_addr=c_mar_addr[mar_pick];mem_ar_len=c_mar_len[mar_pick];
            mem_ar_size=c_mar_size[mar_pick];mem_ar_burst=c_mar_burst[mar_pick];c_mar_ready[mar_pick]=mem_ar_ready;
        end
        if(mar_owner_valid) begin
            c_mr_valid[mar_owner]=mem_r_valid;mem_r_ready=c_mr_ready[mar_owner];
        end

        // A memory write is granted only to the oldest AW whose W stream is at
        // the head. This preserves the AXI4 W ordering contract without WID.
        if(!maw_owner_valid && wq_count!=0) begin
            mem_aw_valid=c_maw_valid[wq_slot[wq_head]];mem_aw_addr=c_maw_addr[wq_slot[wq_head]];
            mem_aw_len=c_maw_len[wq_slot[wq_head]];mem_aw_size=c_maw_size[wq_slot[wq_head]];
            mem_aw_burst=c_maw_burst[wq_slot[wq_head]];c_maw_ready[wq_slot[wq_head]]=mem_aw_ready;
        end
        if(maw_owner_valid) begin
            mem_w_valid=c_mw_valid[maw_owner];mem_w_data=c_mw_data[maw_owner];
            mem_w_strb=c_mw_strb[maw_owner];mem_w_last=c_mw_last[maw_owner];c_mw_ready[maw_owner]=mem_w_ready;
            c_mb_valid[maw_owner]=mem_b_valid;mem_b_ready=c_mb_ready[maw_owner];
        end

        r_found=0;r_pick=0;
        for(int i=0;i<CONTEXTS;i++) if(!r_found && c_r_valid[i]) begin r_found=1;r_pick=CW'(i);end
        if(r_owner_valid) r_pick=r_owner;
        if((r_owner_valid || r_found) && !r_wait_ack) begin
            r_valid=c_r_valid[r_pick];r_id=c_r_id[r_pick];r_data=c_r_data[r_pick];
            r_last=c_r_last[r_pick];r_resp=c_r_resp[r_pick];c_r_ready[r_pick]=r_ready;
        end
        if(r_owner_valid && r_wait_ack) c_r_ack[r_owner]=r_ack;

        b_found=0;b_pick=0;
        for(int i=0;i<CONTEXTS;i++) if(!b_found && c_b_valid[i]) begin b_found=1;b_pick=CW'(i);end
        if(b_owner_valid) b_pick=b_owner;
        if((b_owner_valid || b_found) && !b_wait_ack) begin
            b_valid=c_b_valid[b_pick];b_id=c_b_id[b_pick];b_resp=c_b_resp[b_pick];c_b_ready[b_pick]=b_ready;
        end
        if(b_owner_valid && b_wait_ack) c_w_ack[b_owner]=w_ack;
    end
    always_comb begin
        c_sreq_ready='0;
        if(snoop_owner_valid||snoop_found) c_sreq_ready[snoop_pick]=snoop_req_ready;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            global_active<=0;global_slot<=0;wq_head<=0;wq_tail<=0;wq_count<=0;wq_beat<=0;
            snoop_owner_valid<=0;snoop_owner<=0;mar_owner_valid<=0;mar_owner<=0;
            snoop_hold_valid<=0;snoop_hold<=0;mar_hold_valid<=0;mar_hold<=0;
            maw_owner_valid<=0;maw_owner<=0;r_owner_valid<=0;r_owner<=0;r_wait_ack<=0;
            b_owner_valid<=0;b_owner<=0;b_wait_ack<=0;context_tokenized<='0;context_token_tag<='0;
        end else begin
            // REVIEW 10.5: isolate until the context that actually received the
            // global operation (barrier: global_slot, DVM: its ID slot) is idle.
            if((ar_fire_global || aw_fire_global) && !global_active) begin
                global_active<=1;global_slot<=ar_fire_global?ar_target:aw_target;
            end
            if(ar_valid&&ar_ready) begin
                context_tokenized[ar_target]<=ar_tokenized;
                context_token_tag[ar_target]<=ar_token_tag;
            end
            if(aw_valid&&aw_ready) begin
                context_tokenized[aw_target]<=aw_tokenized;
                context_token_tag[aw_target]<=aw_token_tag;
            end
            if(global_active && !c_busy[global_slot]) global_active<=0;
            if(aw_fire && aw_data_bearing) begin
                wq_slot[wq_tail]<=aw_target;wq_len[wq_tail]<=aw_len;
                wq_tail<=wq_tail==WQW'(CONTEXTS-1)?'0:wq_tail+1'b1;
            end
            if(w_fire) begin
                if(wq_beat==wq_len[wq_head]) begin
                    wq_head<=wq_head==WQW'(CONTEXTS-1)?'0:wq_head+1'b1;
                    wq_beat<=0;
                end else wq_beat<=wq_beat+1'b1;
            end
            case ({aw_fire && aw_data_bearing,
                   w_fire && (wq_beat==wq_len[wq_head])})
                2'b10: wq_count<=wq_count+1'b1;
                2'b01: wq_count<=wq_count-1'b1;
                default: wq_count<=wq_count;
            endcase
            if(!snoop_owner_valid && snoop_req_valid && !snoop_req_ready) begin snoop_hold_valid<=1;snoop_hold<=snoop_pick;end
            if(!snoop_owner_valid && snoop_req_valid && snoop_req_ready) begin
                snoop_owner_valid<=1;snoop_owner<=snoop_pick;snoop_hold_valid<=0;
            end
            if(snoop_owner_valid && snoop_rsp_valid && snoop_rsp_ready) snoop_owner_valid<=0;
            if(!mar_owner_valid && mem_ar_valid && !mem_ar_ready) begin mar_hold_valid<=1;mar_hold<=mar_pick;end
            if(!mar_owner_valid && mem_ar_valid && mem_ar_ready) begin
                mar_owner_valid<=1;mar_owner<=mar_pick;mar_hold_valid<=0;
            end
            if(mar_owner_valid && mem_r_valid && mem_r_ready && mem_r_last) mar_owner_valid<=0;
            if(!maw_owner_valid && mem_aw_valid && mem_aw_ready) begin maw_owner_valid<=1;maw_owner<=wq_slot[wq_head];end
            if(maw_owner_valid && mem_b_valid && mem_b_ready) maw_owner_valid<=0;
            if(!r_owner_valid && r_found) begin r_owner_valid<=1;r_owner<=r_pick;end
            if(r_valid && r_ready && r_last) r_wait_ack<=1;
            if(r_owner_valid && r_wait_ack && r_ack) begin
                context_tokenized[r_owner]<=0;r_owner_valid<=0;r_wait_ack<=0;
            end
            if(!b_owner_valid && b_found) begin b_owner_valid<=1;b_owner<=b_pick;end
            if(b_valid && b_ready) b_wait_ack<=1;
            if(b_owner_valid && b_wait_ack && w_ack) begin
                context_tokenized[b_owner]<=0;b_owner_valid<=0;b_wait_ack<=0;
            end
        end
    end
    // REVIEW 10.1: one ID/thread exclusive monitor shared by every context.
    localparam int EX_THREADS=1<<ID_WIDTH;
    logic [EX_THREADS-1:0] ex_valid;logic [EX_THREADS-1:0][57:0] ex_line;
    logic [CONTEXTS-1:0] c_ex_set_valid,c_ex_commit_valid,c_ex_wclear_valid;
    logic [CONTEXTS-1:0][ID_WIDTH-1:0] c_ex_set_id,c_ex_commit_id;
    logic [CONTEXTS-1:0][57:0] c_ex_set_line,c_ex_commit_line,c_ex_wclear_line;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin ex_valid<='0;ex_line<='0;end
        else for(int i=0;i<EX_THREADS;i++) begin
            // Clears first; a registration in the same cycle wins (as before).
            for(int k=0;k<2;k++)
                if(reservation_kill_valid[k] && ex_line[i]==reservation_kill_addr[k][63:6]) ex_valid[i]<=0;
            for(int c=0;c<CONTEXTS;c++) begin
                if(c_ex_wclear_valid[c] && ex_line[i]==c_ex_wclear_line[c]) ex_valid[i]<=0;
                if(c_ex_commit_valid[c] && i!=int'(c_ex_commit_id[c]) && ex_line[i]==c_ex_commit_line[c])
                    ex_valid[i]<=0;
            end
            for(int c=0;c<CONTEXTS;c++)
                if(c_ex_set_valid[c] && int'(c_ex_set_id[c])==i) begin ex_valid[i]<=1;ex_line[i]<=c_ex_set_line[c];end
        end
    end

    always_comb begin
        outstanding_count='0;
        for(int i=0;i<CONTEXTS;i++) if(c_busy[i]) outstanding_count=outstanding_count+1'b1;
    end
    assign busy=|c_busy;
    assign protocol_error=|c_error;

    for(genvar g=0;g<CONTEXTS;g++) begin:G_CONTEXT
        ace_manager_request_controller #(.ID_WIDTH(ID_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),
            .DATA_WIDTH(DATA_WIDTH),.LINE_BYTES(LINE_BYTES),.EXTERNAL_MONITOR(1'b1)) u_context(
            .clk,.rst_n,.accept_enable(1'b1),.reservation_kill_valid,.reservation_kill_addr,
            .ar_valid(c_ar_valid[g]),.ar_ready(c_ar_ready[g]),.ar_id,.ar_addr,.ar_len,.ar_size,.ar_burst,
            .ar_snoop,.ar_domain,.ar_bar,.ar_cache,.ar_lock,
            .r_valid(c_r_valid[g]),.r_ready(c_r_ready[g]),.r_id(c_r_id[g]),.r_data(c_r_data[g]),
            .r_last(c_r_last[g]),.r_resp(c_r_resp[g]),.r_ack(c_r_ack[g]),
            .aw_valid(c_aw_valid[g]),.aw_ready(c_aw_ready[g]),.aw_id,.aw_addr,.aw_len,.aw_size,.aw_burst,
            .aw_snoop,.aw_domain,.aw_bar,.aw_cache,.aw_lock,.aw_unique,
            .w_valid(c_w_valid[g]),.w_ready(c_w_ready[g]),.w_data,.w_strb,.w_last,
            .b_valid(c_b_valid[g]),.b_ready(c_b_ready[g]),.b_id(c_b_id[g]),.b_resp(c_b_resp[g]),.w_ack(c_w_ack[g]),
            .snoop_req_valid(c_sreq_valid[g]),.snoop_req_ready(c_sreq_ready[g]),
            .snoop_req_addr(c_sreq_addr[g]),.snoop_req_snoop(c_sreq_snoop[g]),
            .snoop_rsp_valid(c_srsp_valid[g]),.snoop_rsp_ready(c_srsp_ready[g]),
            .snoop_rsp_resp(c_srsp_resp[g]),.snoop_rsp_data(c_srsp_data[g]),
            .mem_aw_valid(c_maw_valid[g]),.mem_aw_ready(c_maw_ready[g]),.mem_aw_addr(c_maw_addr[g]),
            .mem_aw_len(c_maw_len[g]),.mem_aw_size(c_maw_size[g]),.mem_aw_burst(c_maw_burst[g]),
            .mem_w_valid(c_mw_valid[g]),.mem_w_ready(c_mw_ready[g]),.mem_w_data(c_mw_data[g]),
            .mem_w_strb(c_mw_strb[g]),.mem_w_last(c_mw_last[g]),.mem_b_valid(c_mb_valid[g]),
            .mem_b_ready(c_mb_ready[g]),.mem_b_resp,
            .mem_ar_valid(c_mar_valid[g]),.mem_ar_ready(c_mar_ready[g]),.mem_ar_addr(c_mar_addr[g]),
            .mem_ar_len(c_mar_len[g]),.mem_ar_size(c_mar_size[g]),.mem_ar_burst(c_mar_burst[g]),
            .mem_r_valid(c_mr_valid[g]),.mem_r_ready(c_mr_ready[g]),.mem_r_data,.mem_r_last,.mem_r_resp,
            .ex_valid_in(ex_valid),.ex_line_in(ex_line),
            .ex_set_valid(c_ex_set_valid[g]),.ex_set_id(c_ex_set_id[g]),.ex_set_line(c_ex_set_line[g]),
            .ex_commit_valid(c_ex_commit_valid[g]),.ex_commit_id(c_ex_commit_id[g]),.ex_commit_line(c_ex_commit_line[g]),
            .ex_wclear_valid(c_ex_wclear_valid[g]),.ex_wclear_line(c_ex_wclear_line[g]),
            .ex_store_busy(c_ex_store_busy[g]),
            .busy(c_busy[g]),.protocol_error(c_error[g]),
            .own_valid(own_valid[g]),.own_first_line(own_first_line[g]),.own_last_line(own_last_line[g]));
    end

    initial begin
        assert(CONTEXTS>1 && CONTEXTS<=(1<<ID_WIDTH) && (CONTEXTS&(CONTEXTS-1))==0)
            else $fatal(1,"ACE_MANAGER_CONTEXT_GEOMETRY");
    end
    assert property(@(posedge clk) disable iff(!rst_n) r_valid && !r_ready |=>
        r_valid && $stable({r_id,r_data,r_last,r_resp}));
    assert property(@(posedge clk) disable iff(!rst_n) b_valid && !b_ready |=>
        b_valid && $stable({b_id,b_resp}));
    assert property(@(posedge clk) disable iff(!rst_n) int'(outstanding_count)<=CONTEXTS);
    // REVIEW 10.2: downstream payload stability while waiting for READY.
    assert property(@(posedge clk) disable iff(!rst_n) mem_ar_valid && !mem_ar_ready |=>
        mem_ar_valid && $stable({mem_ar_addr,mem_ar_len,mem_ar_size,mem_ar_burst}))
        else $fatal(1,"MEM_AR_PAYLOAD_STABILITY");
    assert property(@(posedge clk) disable iff(!rst_n) mem_aw_valid && !mem_aw_ready |=>
        mem_aw_valid && $stable({mem_aw_addr,mem_aw_len,mem_aw_size,mem_aw_burst}))
        else $fatal(1,"MEM_AW_PAYLOAD_STABILITY");
    assert property(@(posedge clk) disable iff(!rst_n) snoop_req_valid && !snoop_req_ready |=>
        snoop_req_valid && $stable({snoop_req_addr,snoop_req_snoop}))
        else $fatal(1,"SNOOP_REQ_PAYLOAD_STABILITY");
    // REVIEW 10.1: never two exclusive stores in flight.
    assert property(@(posedge clk) disable iff(!rst_n) $onehot0(c_ex_store_busy))
        else $fatal(1,"EXCLUSIVE_STORE_OVERLAP");
endmodule
