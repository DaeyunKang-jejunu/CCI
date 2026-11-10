// Serialized ACE manager-side request decoder.
//
// This block converts ACE ARSNOOP/AWSNOOP requests to the AC snoops recommended
// by ARM IHI 0022H table D5-1.  It deliberately permits one transaction at a
// time: the surrounding CCI wrapper uses that interval as a global coherence
// serialization point.  LINE_BYTES=64 and DATA_WIDTH=128 are the implemented
// cache-line geometry (four beats).
module ace_manager_request_controller import ace_snoop_pkg::*; #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int LINE_BYTES=64,
    // 1: the exclusive monitor lives in the surrounding bank and is shared by
    // every context (REVIEW 10.1). 0: standalone controller keeps its own.
    parameter bit EXTERNAL_MONITOR=0
)(
    input logic clk,rst_n,input logic accept_enable,

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
    // Any accepted write from another ingress invalidates a matching
    // shareable-exclusive reservation.  The surrounding top drives this from
    // its M0/M1 AW handshakes.
    // Both v9 ingress paths can accept AW in the same cycle. Preserve both
    // addresses so neither matching exclusive reservation survives.
    input logic [1:0] reservation_kill_valid,input logic [1:0][63:0] reservation_kill_addr,
    // Shared monitor view and update events (used when EXTERNAL_MONITOR=1).
    input logic [(1<<ID_WIDTH)-1:0] ex_valid_in,input logic [(1<<ID_WIDTH)-1:0][57:0] ex_line_in,
    output logic ex_set_valid,output logic [ID_WIDTH-1:0] ex_set_id,output logic [57:0] ex_set_line,
    output logic ex_commit_valid,output logic [ID_WIDTH-1:0] ex_commit_id,output logic [57:0] ex_commit_line,
    output logic ex_wclear_valid,output logic [57:0] ex_wclear_line,
    output logic ex_store_busy,
    output logic busy,output logic protocol_error,
    // RCCI_PLAN 14.3-2: address ownership of the active transaction, from
    // acceptance to RACK/WACK. Barrier, DVM and rejected requests own nothing.
    output logic own_valid,output logic [58:0] own_first_line,output logic [58:0] own_last_line
);
    localparam int BEAT_BYTES=DATA_WIDTH/8;
    localparam int LINE_BEATS=LINE_BYTES/BEAT_BYTES;
    localparam logic [7:0] LINE_LEN=8'(LINE_BEATS-1);
    localparam logic [2:0] BEAT_SIZE=3'($clog2(BEAT_BYTES));
    typedef enum logic [4:0] {IDLE,SNOOP_REQ,SNOOP_RSP,MEM_AR,MEM_R,
        SNOOP_R,CLEAN_R,ERROR_R,R_WAIT_ACK,MEM_AW,MEM_W,MEM_B,LOCAL_B,B_WAIT_ACK,
        DISCARD_W,BARRIER_PAIR,BARRIER_RESP,BARRIER_ACK} state_t;
    state_t state;
    logic is_read,no_data,error_latched;
    logic [ID_WIDTH-1:0] txn_id;
    logic [63:0] txn_addr;
    logic [7:0] txn_len;
    logic [2:0] txn_size;
    logic [1:0] txn_burst;
    logic [3:0] mapped_snoop;
    logic [511:0] snoop_data;
    logic [4:0] snoop_resp;
    logic [7:0] beat;
    logic exclusive_txn,exclusive_store,exclusive_pass;
    localparam int EX_THREADS=1<<ID_WIDTH;
    logic [EX_THREADS-1:0] exclusive_valid;
    logic [57:0] exclusive_line[EX_THREADS];
    // Monitor view: the shared bank table or the local one.
    logic [EX_THREADS-1:0] mon_valid;logic [EX_THREADS-1:0][57:0] mon_line;
    always_comb for(int i=0;i<EX_THREADS;i++) begin
        mon_valid[i]=EXTERNAL_MONITOR ? ex_valid_in[i] : exclusive_valid[i];
        mon_line[i]=EXTERNAL_MONITOR ? ex_line_in[i] : exclusive_line[i];
    end
    // A store that passed admission must still own its reservation when the
    // snoop completes: another thread's successful store or a kill in between
    // turns it into a failed exclusive (no reservation generation survives).
    wire ex_still_valid=mon_valid[txn_id] && mon_line[txn_id]==txn_addr[63:6];
    logic barrier_have_ar,barrier_have_aw,barrier_r_done,barrier_b_done;
    logic barrier_r_ack,barrier_w_ack,barrier_error;
    logic [ID_WIDTH-1:0] barrier_ar_id,barrier_aw_id;
    logic [1:0] barrier_kind,barrier_domain;
    logic dvm_part2_pending;logic [ID_WIDTH-1:0] dvm_part2_id;
    // 1-bit round-robin token for simultaneous IDLE AR/AW (1: AR wins a tie).
    logic ar_priority;

    function automatic logic cache_line_shape(input logic [63:0] addr,
        input logic [7:0] len,input logic [2:0] size,input logic [1:0] burst);
        return addr[$clog2(LINE_BYTES)-1:0]=='0 && len==LINE_LEN &&
            size==BEAT_SIZE && burst==2'b01;
    endfunction
    function automatic logic modifiable(input logic [3:0] cache);
        return cache[1];
    endfunction
    function automatic logic normal_bar(input logic [1:0] bar);
        return !bar[0];
    endfunction
    function automatic logic barrier_shape(input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] size,input logic [1:0] burst,input logic [3:0] snoop,
        input logic [3:0] cache,input logic lock);
        return addr==0 && len==0 && size==BEAT_SIZE && burst==2'b01 &&
            snoop==0 && cache==4'b0010 && !lock;
    endfunction
    function automatic logic dvm_shape(input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] size,input logic [1:0] burst,input logic [3:0] snoop,
        input logic [1:0] domain,input logic [1:0] bar,input logic [3:0] cache,input logic lock);
        // AxADDR[0]=1 marks a two-part message. The serialized AC path cannot
        // issue part 2 before part 1's CR (D13.2), so two-part is rejected.
        return dvm(snoop) && (snoop!=DVM_COMPLETE || addr==0) && !addr[0] && len==0 &&
            size==BEAT_SIZE && burst==2'b01 && cache==4'b0010 && !lock &&
            normal_bar(bar) && shareable(domain);
    endfunction
    function automatic logic known_read(input logic [3:0] snoop,input logic [1:0] domain);
        if(snoop==READ_ONCE) return 1;
        if(snoop inside {CLEAN_SHARED,CLEAN_INVALID,MAKE_INVALID}) return domain!=DOMAIN_SYSTEM;
        return shareable(domain) && snoop inside {READ_SHARED,READ_CLEAN,READ_NOT_SHARED_DIRTY,
            READ_UNIQUE,CLEAN_UNIQUE,MAKE_UNIQUE};
    endfunction
    function automatic logic known_write(input logic [2:0] snoop,input logic [1:0] domain);
        if(domain==DOMAIN_SYSTEM) return snoop==WRITE_UNIQUE;
        if(domain==DOMAIN_NONSHAREABLE)
            return snoop inside {WRITE_UNIQUE,WRITE_CLEAN,WRITE_BACK,WRITE_EVICT};
        return snoop inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE,WRITE_CLEAN,WRITE_BACK,EVICT,WRITE_EVICT};
    endfunction
    // Requests whose read response is a single data-less beat.
    function automatic logic dataless_read(input logic [3:0] snoop);
        return snoop inside {CLEAN_UNIQUE,MAKE_UNIQUE,CLEAN_SHARED,CLEAN_INVALID,MAKE_INVALID,
            DVM_COMPLETE,DVM_MESSAGE};
    endfunction
    function automatic logic read_legal(input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] size,input logic [1:0] burst,input logic [3:0] snoop,
        input logic [1:0] domain,input logic [1:0] bar,input logic [3:0] cache,input logic lock);
        logic coherent;
        coherent=shareable(domain);
        if(dvm(snoop)) return dvm_shape(addr,len,size,burst,snoop,domain,bar,cache,lock);
        if(lock) return normal_bar(bar) && modifiable(cache) && coherent &&
            snoop inside {READ_SHARED,READ_CLEAN,CLEAN_UNIQUE} &&
            cache_line_shape(addr,len,size,burst);
        return normal_bar(bar) && modifiable(cache) && known_read(snoop,domain) &&
            ((!coherent && snoop==READ_ONCE && incr_data_shape(addr,len,size,burst,BEAT_SIZE)) ||
             cache_line_shape(addr,len,size,burst));
    endfunction
    function automatic logic write_legal(input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] size,input logic [1:0] burst,input logic [2:0] snoop,
        input logic [1:0] domain,input logic [1:0] bar,input logic [3:0] cache,
        input logic lock,input logic unique_i);
        logic coherent;
        coherent=shareable(domain);
        return normal_bar(bar) && !lock && modifiable(cache) && known_write(snoop,domain) &&
            (snoop!=WRITE_EVICT || unique_i) &&
            ((coherent && snoop==EVICT) ? cache_line_shape(addr,len,size,burst) :
             (burst==2'b01 && size==BEAT_SIZE &&
              64'(addr[5:0])+(64'(len)+64'd1)*64'(BEAT_BYTES)<=64'(LINE_BYTES)));
    endfunction

    assign busy=state!=IDLE;
    // Ownership flag captured at the accepting handshake (RCCI_PLAN 14.3-2).
    logic own_flag;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) own_flag<=0;
        else if(state==IDLE) begin
            if(ar_valid && ar_ready)
                own_flag<=!dvm_part2_pending && !ar_bar[0] && !dvm(ar_snoop) &&
                    read_legal(ar_addr,ar_len,ar_size,ar_burst,ar_snoop,ar_domain,ar_bar,ar_cache,ar_lock);
            else if(aw_valid && aw_ready)
                // Evict has no memory side effect and owns no line (R13).
                own_flag<=!aw_bar[0] && !(shareable(aw_domain)&&aw_snoop==EVICT) &&
                    write_legal(aw_addr,aw_len,aw_size,aw_burst,aw_snoop,aw_domain,aw_bar,aw_cache,aw_lock,aw_unique);
            else own_flag<=0;
        end
    end
    assign own_valid=busy && own_flag;
    assign own_first_line=first_line(txn_addr);
    assign own_last_line=last_line(txn_addr,txn_len,txn_size);
    // Exclusive monitor events, aligned with the local updates below.
    wire idle_ar_fire=state==IDLE && ar_valid && ar_ready;
    wire idle_aw_fire=state==IDLE && !idle_ar_fire && aw_valid && aw_ready;
    assign ex_set_valid=idle_ar_fire && !dvm_part2_pending && !ar_bar[0] && ar_lock &&
        read_legal(ar_addr,ar_len,ar_size,ar_burst,ar_snoop,ar_domain,ar_bar,ar_cache,ar_lock);
    assign ex_set_id=ar_id;assign ex_set_line=ar_addr[63:6];
    assign ex_commit_valid=state==SNOOP_RSP && snoop_rsp_valid && exclusive_store &&
        exclusive_pass && ex_still_valid && !snoop_rsp_resp[1];
    assign ex_commit_id=txn_id;assign ex_commit_line=txn_addr[63:6];
    assign ex_wclear_valid=idle_aw_fire && !aw_bar[0] &&
        write_legal(aw_addr,aw_len,aw_size,aw_burst,aw_snoop,aw_domain,aw_bar,aw_cache,aw_lock,aw_unique) &&
        !(shareable(aw_domain) && aw_snoop==EVICT) &&
        !(shareable(aw_domain) && aw_snoop inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE});
    assign ex_wclear_line=aw_addr[63:6];
    assign ex_store_busy=exclusive_store;
    // A lone VALID is accepted at once; a tie goes to the token holder. The
    // BARRIER_PAIR wait only accepts the missing leg and is not arbitrated.
    assign ar_ready=(state==IDLE && accept_enable && (!aw_valid || ar_priority)) ||
        (state==BARRIER_PAIR && !barrier_have_ar && ar_bar[0]);
    assign aw_ready=(state==IDLE && accept_enable && (!ar_valid || !ar_priority)) ||
        (state==BARRIER_PAIR && !barrier_have_aw && aw_bar[0]);
    assign snoop_req_valid=state==SNOOP_REQ;
    // A DVM message is encoded in the whole address, including bits [5:0]
    // (ASID/VA valid, Leaf, Stage; IHI 0022H table D13-10), so pass it as is.
    assign snoop_req_addr=dvm(mapped_snoop) ? txn_addr : {txn_addr[63:6],6'b0};
    assign snoop_req_snoop=mapped_snoop;
    assign snoop_rsp_ready=state==SNOOP_RSP;

    assign mem_ar_valid=state==MEM_AR;
    assign mem_ar_addr=txn_addr;assign mem_ar_len=txn_len;
    assign mem_ar_size=txn_size;assign mem_ar_burst=txn_burst;
    assign mem_r_ready=state==MEM_R && r_ready;
    assign mem_aw_valid=state==MEM_AW;
    assign mem_aw_addr=txn_addr;assign mem_aw_len=txn_len;
    assign mem_aw_size=txn_size;assign mem_aw_burst=txn_burst;
    assign mem_w_valid=state==MEM_W && w_valid;
    assign mem_w_data=w_data;assign mem_w_strb=w_strb;
    assign mem_w_last=beat==txn_len;
    assign w_ready=(state==MEM_W) ? mem_w_ready : (state==DISCARD_W);
    assign mem_b_ready=state==MEM_B;

    always_comb begin
        r_valid=0;r_id=txn_id;r_data=0;r_last=0;r_resp=0;
        if(state==MEM_R) begin
            r_valid=mem_r_valid;r_data=mem_r_data;r_last=mem_r_last;
            r_resp={2'b00,(exclusive_txn && mem_r_resp==0)?2'b01:mem_r_resp};
        end else if(state==SNOOP_R) begin
            r_valid=1;r_data=snoop_data[DATA_WIDTH*int'(beat)+:DATA_WIDTH];
            r_last=beat==LINE_LEN;
            r_resp={snoop_resp[3],1'b0,exclusive_txn?2'b01:2'b00};
        end else if(state==CLEAN_R) begin
            r_valid=1;r_last=1;
            r_resp={2'b00,error_latched?2'b10:
                (exclusive_txn && exclusive_pass)?2'b01:2'b00};
        end else if(state==ERROR_R) begin
            r_valid=1;r_last=beat==txn_len;r_resp=4'b0010;
        end else if(state==BARRIER_RESP) begin
            r_valid=!barrier_r_done;r_id=barrier_ar_id;r_last=1;
            r_resp={2'b00,barrier_error?2'b10:2'b00};
        end
        b_valid=state==LOCAL_B;b_id=txn_id;
        b_resp=error_latched?2'b10:2'b00;
        if(state==BARRIER_RESP) begin
            b_valid=!barrier_b_done;b_id=barrier_aw_id;
            b_resp=barrier_error?2'b10:2'b00;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state<=IDLE;txn_id<=0;txn_addr<=0;txn_len<=0;txn_size<=0;txn_burst<=0;
            mapped_snoop<=0;snoop_data<=0;snoop_resp<=0;beat<=0;
            is_read<=0;no_data<=0;exclusive_txn<=0;exclusive_store<=0;exclusive_pass<=0;
            exclusive_valid<='0;
            barrier_have_ar<=0;barrier_have_aw<=0;barrier_r_done<=0;barrier_b_done<=0;
            barrier_r_ack<=0;barrier_w_ack<=0;barrier_error<=0;
            barrier_ar_id<=0;barrier_aw_id<=0;barrier_kind<=0;barrier_domain<=0;
            dvm_part2_pending<=0;dvm_part2_id<=0;ar_priority<=1;
            error_latched<=0;protocol_error<=0;
        end else begin
            for(int i=0;i<EX_THREADS;i++)
                for(int k=0;k<2;k++)
                    if(reservation_kill_valid[k] && exclusive_valid[i] &&
                       exclusive_line[i]==reservation_kill_addr[k][63:6])
                        exclusive_valid[i]<=0;
            case(state)
                IDLE: begin
                    error_latched<=0;beat<=0;exclusive_txn<=0;exclusive_store<=0;exclusive_pass<=0;
                    if(ar_valid && ar_ready) begin
                        ar_priority<=1'b0; // next tie goes to AW
                        is_read<=1;txn_id<=ar_id;txn_addr<=ar_addr;txn_len<=ar_len;
                        txn_size<=ar_size;txn_burst<=ar_burst;
                        no_data<=dataless_read(ar_snoop);
                        case(ar_snoop)
                            CLEAN_UNIQUE:mapped_snoop<=CLEAN_INVALID;
                            MAKE_UNIQUE:mapped_snoop<=MAKE_INVALID;
                            default:mapped_snoop<=ar_snoop;
                        endcase
                        if(dvm_part2_pending) begin
                            // Part 2 of a rejected two-part DVM message is the next
                            // AR transfer (D13.2). Give it the same error response.
                            dvm_part2_pending<=0;error_latched<=1;
                            if(ar_snoop!=DVM_MESSAGE || ar_id!=dvm_part2_id) protocol_error<=1;
                            state<=CLEAN_R;
                        end else if(ar_bar[0]) begin
                            barrier_have_ar<=1;barrier_have_aw<=0;barrier_ar_id<=ar_id;
                            barrier_kind<=ar_bar;barrier_domain<=ar_domain;
                            barrier_error<=!barrier_shape(ar_addr,ar_len,ar_size,ar_burst,
                                ar_snoop,ar_cache,ar_lock);
                            state<=BARRIER_PAIR;
                        end else if(!read_legal(ar_addr,ar_len,ar_size,ar_burst,ar_snoop,
                            ar_domain,ar_bar,ar_cache,ar_lock)) begin
                            error_latched<=1;
                            if(ar_snoop==DVM_MESSAGE && ar_addr[0]) begin
                                dvm_part2_pending<=1;dvm_part2_id<=ar_id;
                            end
                            // Only dataless requests complete with one beat. Any other
                            // rejected read, including AxBAR=2, returns ARLEN+1 beats.
                            state<=dataless_read(ar_snoop)?CLEAN_R:ERROR_R;
                        end else if(ar_lock && ar_snoop==CLEAN_UNIQUE) begin
                            exclusive_txn<=1;exclusive_store<=1;
                            exclusive_pass<=mon_valid[ar_id] &&
                                mon_line[ar_id]==ar_addr[63:6];
                            // A failed attempt records a new PoS attempt.  It has
                            // no coherency side effect and can be retried.
                            exclusive_valid[ar_id]<=1;exclusive_line[ar_id]<=ar_addr[63:6];
                            if(mon_valid[ar_id] && mon_line[ar_id]==ar_addr[63:6])
                                state<=SNOOP_REQ;
                            else state<=CLEAN_R;
                        end else if(ar_lock) begin
                            exclusive_txn<=1;exclusive_pass<=1;
                            exclusive_valid[ar_id]<=1;exclusive_line[ar_id]<=ar_addr[63:6];
                            state<=SNOOP_REQ;
                        end else if(shareable(ar_domain) || ar_snoop inside
                            {CLEAN_SHARED,CLEAN_INVALID,MAKE_INVALID,DVM_COMPLETE,DVM_MESSAGE}) state<=SNOOP_REQ;
                        else state<=MEM_AR;
                    end else if(aw_valid && aw_ready) begin
                        ar_priority<=1'b1; // next tie goes to AR
                        is_read<=0;txn_id<=aw_id;txn_addr<=aw_addr;txn_len<=aw_len;
                        txn_size<=aw_size;txn_burst<=aw_burst;no_data<=0;
                        mapped_snoop<=aw_snoop==WRITE_LINE_UNIQUE?MAKE_INVALID:CLEAN_INVALID;
                        if(aw_bar[0]) begin
                            barrier_have_ar<=0;barrier_have_aw<=1;barrier_aw_id<=aw_id;
                            barrier_kind<=aw_bar;barrier_domain<=aw_domain;
                            barrier_error<=!barrier_shape(aw_addr,aw_len,aw_size,aw_burst,
                                {1'b0,aw_snoop},aw_cache,aw_lock);
                            state<=BARRIER_PAIR;
                        end else if(!write_legal(aw_addr,aw_len,aw_size,aw_burst,aw_snoop,
                            aw_domain,aw_bar,aw_cache,aw_lock,aw_unique)) begin
                            error_latched<=1;
                            // Barriers were handled above, so AxBAR=2 here is a
                            // normal write whose W beats must still be drained.
                            state<=(aw_snoop==EVICT)?LOCAL_B:DISCARD_W;
                        end else if(shareable(aw_domain) && aw_snoop==EVICT) state<=LOCAL_B;
                        else if(shareable(aw_domain) &&
                            aw_snoop inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE}) state<=SNOOP_REQ;
                        else begin
                            for(int i=0;i<EX_THREADS;i++)
                                if(exclusive_valid[i] && exclusive_line[i]==aw_addr[63:6])
                                    exclusive_valid[i]<=0;
                            state<=MEM_AW;
                        end
                    end
                end
                SNOOP_REQ:if(snoop_req_ready) state<=SNOOP_RSP;
                SNOOP_RSP:if(snoop_rsp_valid) begin
                    snoop_data<=snoop_rsp_data;snoop_resp<=snoop_rsp_resp;
                    if(snoop_rsp_resp[1]) begin
                        error_latched<=1;
                        if(is_read) state<=no_data?CLEAN_R:ERROR_R;
                        else state<=DISCARD_W;
                    end
                    else if(is_read) begin
                        if(no_data) state<=CLEAN_R;
                        else if(snoop_rsp_resp[0]) begin beat<=0;state<=SNOOP_R;end
                        else state<=MEM_AR;
                    end else state<=MEM_AW;
                    if(exclusive_store) exclusive_pass<=exclusive_pass && ex_still_valid;
                    if(exclusive_store && exclusive_pass && ex_still_valid && !snoop_rsp_resp[1]) begin
                        for(int i=0;i<EX_THREADS;i++)
                            if(i!=int'(txn_id) && exclusive_valid[i] && exclusive_line[i]==txn_addr[63:6])
                                exclusive_valid[i]<=0;
                    end
                end
                MEM_AR:if(mem_ar_ready) state<=MEM_R;
                MEM_R:if(mem_r_valid && mem_r_ready) begin
                    if(mem_r_last!=(beat==txn_len)) begin protocol_error<=1;error_latched<=1;end
                    if(mem_r_last) state<=R_WAIT_ACK;else beat<=beat+1'b1;
                end
                SNOOP_R:if(r_ready) begin
                    if(r_last) state<=R_WAIT_ACK;else beat<=beat+1'b1;
                end
                CLEAN_R:if(r_ready) state<=R_WAIT_ACK;
                ERROR_R:if(r_ready) begin
                    if(r_last) state<=R_WAIT_ACK;else beat<=beat+1'b1;
                end
                R_WAIT_ACK:if(r_ack) state<=IDLE;
                MEM_AW:if(mem_aw_ready) begin beat<=0;state<=MEM_W;end
                MEM_W:if(w_valid && w_ready) begin
                    if(w_last!=(beat==txn_len)) begin protocol_error<=1;error_latched<=1;end
                    if(beat==txn_len) state<=MEM_B;else beat<=beat+1'b1;
                end
                MEM_B:if(mem_b_valid) begin
                    if(mem_b_resp!=0) error_latched<=1;
                    state<=LOCAL_B;
                end
                DISCARD_W:if(w_valid && w_ready) begin
                    if(w_last!=(beat==txn_len)) protocol_error<=1;
                    if(beat==txn_len) state<=LOCAL_B;else beat<=beat+1'b1;
                end
                LOCAL_B:if(b_ready) state<=B_WAIT_ACK;
                B_WAIT_ACK:if(w_ack) state<=IDLE;
                BARRIER_PAIR: begin
                    if(ar_valid && ar_ready) begin
                        barrier_have_ar<=1;barrier_ar_id<=ar_id;
                        barrier_error<=barrier_error ||
                            !barrier_shape(ar_addr,ar_len,ar_size,ar_burst,ar_snoop,ar_cache,ar_lock) ||
                            ar_bar!=barrier_kind || ar_domain!=barrier_domain;
                        if(barrier_have_aw) begin
                            barrier_r_done<=0;barrier_b_done<=0;barrier_r_ack<=0;barrier_w_ack<=0;
                            state<=BARRIER_RESP;
                        end
                    end
                    if(aw_valid && aw_ready) begin
                        barrier_have_aw<=1;barrier_aw_id<=aw_id;
                        barrier_error<=barrier_error ||
                            !barrier_shape(aw_addr,aw_len,aw_size,aw_burst,{1'b0,aw_snoop},aw_cache,aw_lock) ||
                            aw_bar!=barrier_kind || aw_domain!=barrier_domain;
                        if(barrier_have_ar) begin
                            barrier_r_done<=0;barrier_b_done<=0;barrier_r_ack<=0;barrier_w_ack<=0;
                            state<=BARRIER_RESP;
                        end
                    end
                end
                BARRIER_RESP: begin
                    if(r_valid && r_ready) barrier_r_done<=1;
                    if(b_valid && b_ready) barrier_b_done<=1;
                    // RACK/WACK is a single-cycle pulse that must not wait for the
                    // other channel (IHI 0022H D3.3), so accept it as soon as its
                    // own response has completed, even while the other is pending.
                    if(r_ack && barrier_r_done) barrier_r_ack<=1;
                    if(w_ack && barrier_b_done) barrier_w_ack<=1;
                    if((barrier_r_done || (r_valid && r_ready)) &&
                       (barrier_b_done || (b_valid && b_ready))) state<=BARRIER_ACK;
                end
                BARRIER_ACK: begin
                    if(r_ack) barrier_r_ack<=1;
                    if(w_ack) barrier_w_ack<=1;
                    if((barrier_r_ack || r_ack) && (barrier_w_ack || w_ack)) begin
                        barrier_have_ar<=0;barrier_have_aw<=0;state<=IDLE;
                    end
                end
                default:begin state<=IDLE;protocol_error<=1;end
            endcase
        end
    end
    initial begin
        assert(ADDR_WIDTH==64 && DATA_WIDTH==128 && LINE_BYTES==64 && LINE_BEATS==4)
            else $fatal(1,"ACE_MANAGER_GEOMETRY");
    end
    assert property(@(posedge clk) disable iff(!rst_n) ar_valid && !ar_ready |=>
        $stable({ar_id,ar_addr,ar_len,ar_size,ar_burst,ar_snoop,ar_domain,ar_bar,ar_cache,ar_lock}));
    assert property(@(posedge clk) disable iff(!rst_n) aw_valid && !aw_ready |=>
        $stable({aw_id,aw_addr,aw_len,aw_size,aw_burst,aw_snoop,aw_domain,aw_bar,aw_cache,aw_lock,aw_unique}));
    assert property(@(posedge clk) disable iff(!rst_n) r_valid && !r_ready |=>
        r_valid && $stable({r_id,r_data,r_last,r_resp}));
    assert property(@(posedge clk) disable iff(!rst_n) b_valid && !b_ready |=>
        b_valid && $stable({b_id,b_resp}));
    assert property(@(posedge clk) disable iff(!rst_n) mem_aw_valid && !mem_aw_ready |=>
        mem_aw_valid && $stable({mem_aw_addr,mem_aw_len,mem_aw_size,mem_aw_burst}));
    assert property(@(posedge clk) disable iff(!rst_n) mem_w_valid && !mem_w_ready |=>
        mem_w_valid && $stable({mem_w_data,mem_w_strb,mem_w_last}));
    assert property(@(posedge clk) disable iff(!rst_n) mem_ar_valid && !mem_ar_ready |=>
        mem_ar_valid && $stable({mem_ar_addr,mem_ar_len,mem_ar_size,mem_ar_burst}));
endmodule
