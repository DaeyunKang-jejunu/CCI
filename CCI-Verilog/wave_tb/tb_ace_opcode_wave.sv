`timescale 1ns/1ps
// Focused, self-checking waveform scenario for ACE opcodes that are difficult
// to find in the full integration trace.  This is a wave-only testbench; the
// normal regression sources and manifests remain unchanged.
module tb_ace_opcode_wave;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;

    logic ar_valid,ar_ready;logic [3:0] ar_id;logic [63:0] ar_addr;logic [7:0] ar_len;
    logic [2:0] ar_size;logic [1:0] ar_burst;logic [3:0] ar_snoop;logic [1:0] ar_domain,ar_bar;
    logic [3:0] ar_cache;logic ar_lock;
    logic r_valid,r_ready;logic [3:0] r_id;logic [127:0] r_data;logic r_last;logic [3:0] r_resp;logic r_ack;
    logic aw_valid,aw_ready;logic [3:0] aw_id;logic [63:0] aw_addr;logic [7:0] aw_len;
    logic [2:0] aw_size,aw_snoop;logic [1:0] aw_burst,aw_domain,aw_bar;logic [3:0] aw_cache;
    logic aw_lock,aw_unique,w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;
    logic b_valid,b_ready;logic [3:0] b_id;logic [1:0] b_resp;logic w_ack;

    logic snoop_req_valid,snoop_req_ready,snoop_rsp_valid,snoop_rsp_ready;
    logic [63:0] snoop_req_addr;logic [3:0] snoop_req_snoop;logic [4:0] snoop_rsp_resp;
    logic [511:0] snoop_rsp_data;
    logic mem_aw_valid,mem_aw_ready;logic [63:0] mem_aw_addr;logic [7:0] mem_aw_len;
    logic [2:0] mem_aw_size;logic [1:0] mem_aw_burst;logic mem_w_valid,mem_w_ready;
    logic [127:0] mem_w_data;logic [15:0] mem_w_strb;logic mem_w_last;
    logic mem_b_valid,mem_b_ready;logic [1:0] mem_b_resp;
    logic mem_ar_valid,mem_ar_ready;logic [63:0] mem_ar_addr;logic [7:0] mem_ar_len;
    logic [2:0] mem_ar_size;logic [1:0] mem_ar_burst;logic mem_r_valid,mem_r_ready;
    logic [127:0] mem_r_data;logic mem_r_last;logic [1:0] mem_r_resp;
    logic busy,manager_error;

    logic service_req_ready,service_rsp_valid,service_rsp_ready,service_busy,service_idle,service_fault;
    logic service_ac_valid,service_ac_ready;logic [63:0] service_ac_addr;logic [3:0] service_ac_snoop;
    logic service_cr_valid,service_cr_ready;logic [4:0] service_cr_resp;
    logic service_cd_valid,service_cd_ready,service_cd_last;logic [127:0] service_cd_data;
    logic svc_aw_valid,svc_aw_ready;logic [63:0] svc_aw_addr;logic [7:0] svc_aw_len;
    logic [2:0] svc_aw_size;logic [1:0] svc_aw_burst;logic svc_w_valid,svc_w_ready,svc_w_last;
    logic [127:0] svc_w_data;logic [15:0] svc_w_strb;logic svc_b_valid,svc_b_ready;
    logic [1:0] svc_b_resp;

    logic local_valid,local_ready,local_rsp_valid,local_rsp_ready,local_error,local_hit;
    logic [1:0] local_op;logic [63:0] local_addr;logic [511:0] local_wdata,local_rdata;
    cache_state_t local_state,local_rstate;logic endpoint_idle;
    logic endpoint_cr_valid,endpoint_cr_ready,endpoint_cd_valid,endpoint_cd_ready,endpoint_cd_last;
    logic [4:0] endpoint_cr_resp;logic [127:0] endpoint_cd_data;

    logic [15:0] ex_valid_in='0;logic [15:0][57:0] ex_line_in='0;
    logic ex_set_valid,ex_commit_valid,ex_wclear_valid,ex_store_busy;
    logic [3:0] ex_set_id,ex_commit_id;logic [57:0] ex_set_line,ex_commit_line,ex_wclear_line;
    logic [1:0] reservation_kill_valid='0;logic [1:0][63:0] reservation_kill_addr='0;

    int observed_count,cr_count,cd_beat_count,service_wb_count,manager_write_count;
    logic [3:0] observed_snoop[3];
    logic [4:0] observed_cr[3];
    logic [511:0] rs_data,rns_data,wlu_data;
    localparam logic [63:0] RS_ADDR=64'h1000,RNS_ADDR=64'h1040,WLU_ADDR=64'h1080;

    ace_manager_request_controller manager(
        .clk,.rst_n,.accept_enable(1'b1),.reservation_kill_valid,.reservation_kill_addr,
        .ar_valid,.ar_ready,.ar_id,.ar_addr,.ar_len,.ar_size,.ar_burst,.ar_snoop,.ar_domain,
        .ar_bar,.ar_cache,.ar_lock,.r_valid,.r_ready,.r_id,.r_data,.r_last,.r_resp,.r_ack,
        .aw_valid,.aw_ready,.aw_id,.aw_addr,.aw_len,.aw_size,.aw_burst,.aw_snoop,.aw_domain,
        .aw_bar,.aw_cache,.aw_lock,.aw_unique,.w_valid,.w_ready,.w_data,.w_strb,.w_last,
        .b_valid,.b_ready,.b_id,.b_resp,.w_ack,
        .snoop_req_valid,.snoop_req_ready(service_req_ready),.snoop_req_addr,.snoop_req_snoop,
        .snoop_rsp_valid(service_rsp_valid),.snoop_rsp_ready(service_rsp_ready),
        .snoop_rsp_resp,.snoop_rsp_data,
        .mem_aw_valid,.mem_aw_ready,.mem_aw_addr,.mem_aw_len,.mem_aw_size,.mem_aw_burst,
        .mem_w_valid,.mem_w_ready,.mem_w_data,.mem_w_strb,.mem_w_last,
        .mem_b_valid,.mem_b_ready,.mem_b_resp,
        .mem_ar_valid,.mem_ar_ready,.mem_ar_addr,.mem_ar_len,.mem_ar_size,.mem_ar_burst,
        .mem_r_valid,.mem_r_ready,.mem_r_data,.mem_r_last,.mem_r_resp,
        .busy,.protocol_error(manager_error),.ex_valid_in,.ex_line_in,
        .ex_set_valid,.ex_set_id,.ex_set_line,.ex_commit_valid,.ex_commit_id,.ex_commit_line,
        .ex_wclear_valid,.ex_wclear_line,.ex_store_busy
    );

    cci_ace_snoop_service service(
        .clk,.rst_n,.quiescent(1'b1),
        .legacy_ac_valid(1'b0),.legacy_ac_ready(),.legacy_ac_addr('0),
        .legacy_ac_snoop(MAKE_INVALID),.legacy_cr_valid(),.legacy_cr_ready(1'b0),.legacy_cr_resp(),
        .req_valid(snoop_req_valid),.req_nq(1'b0),.req_ready(service_req_ready),.req_addr(snoop_req_addr),
        .req_snoop(snoop_req_snoop),.rsp_valid(service_rsp_valid),.rsp_ready(service_rsp_ready),
        .rsp_resp(snoop_rsp_resp),.rsp_data(snoop_rsp_data),.maintenance_busy(service_busy),
        .idle(service_idle),.fault(service_fault),
        .ac_valid(service_ac_valid),.ac_ready(service_ac_ready),.ac_addr(service_ac_addr),
        .ac_snoop(service_ac_snoop),.cr_valid(service_cr_valid),.cr_ready(service_cr_ready),
        .cr_resp(service_cr_resp),.cd_valid(service_cd_valid),.cd_ready(service_cd_ready),
        .cd_data(service_cd_data),.cd_last(service_cd_last),
        .aw_valid(svc_aw_valid),.aw_ready(svc_aw_ready),.aw_addr(svc_aw_addr),.aw_len(svc_aw_len),
        .aw_size(svc_aw_size),.aw_burst(svc_aw_burst),.w_valid(svc_w_valid),.w_ready(svc_w_ready),
        .w_data(svc_w_data),.w_strb(svc_w_strb),.w_last(svc_w_last),
        .b_valid(svc_b_valid),.b_ready(svc_b_ready),.b_resp(svc_b_resp)
    );

    ace_cache_snoop_endpoint #(.LINES(4),.OUTSTANDING(4)) cache(
        .clk,.rst_n,.local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready,.local_error,.local_hit,.local_rstate,.local_rdata,
        .ac_valid(service_ac_valid),.ac_ready(service_ac_ready),.ac_addr(service_ac_addr),
        .ac_snoop(service_ac_snoop),.cr_valid(endpoint_cr_valid),.cr_ready(endpoint_cr_ready),
        .cr_resp(endpoint_cr_resp),.cd_valid(endpoint_cd_valid),.cd_ready(endpoint_cd_ready),
        .cd_data(endpoint_cd_data),.cd_last(endpoint_cd_last),.idle(endpoint_idle)
    );
    assign service_cr_valid=endpoint_cr_valid;assign endpoint_cr_ready=service_cr_ready;
    assign service_cr_resp=endpoint_cr_resp;assign service_cd_valid=endpoint_cd_valid;
    assign endpoint_cd_ready=service_cd_ready;assign service_cd_data=endpoint_cd_data;
    assign service_cd_last=endpoint_cd_last;

    assign svc_aw_ready=1'b1;assign svc_w_ready=1'b1;assign svc_b_resp=0;
    assign mem_aw_ready=1'b1;assign mem_w_ready=1'b1;assign mem_b_resp=0;
    assign mem_ar_ready=1'b0;assign mem_r_valid=1'b0;assign mem_r_data=0;
    assign mem_r_last=0;assign mem_r_resp=0;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            svc_b_valid<=0;mem_b_valid<=0;observed_count<=0;cr_count<=0;cd_beat_count<=0;
            service_wb_count<=0;manager_write_count<=0;
        end else begin
            if(service_ac_valid&&service_ac_ready) begin
                assert(observed_count<3) else $fatal(1,"WAVE_OPCODE_EXTRA_AC");
                observed_snoop[observed_count]<=service_ac_snoop;observed_count<=observed_count+1;
            end
            if(service_cr_valid&&service_cr_ready) begin
                assert(cr_count<3) else $fatal(1,"WAVE_OPCODE_EXTRA_CR");
                observed_cr[cr_count]<=service_cr_resp;cr_count<=cr_count+1;
            end
            if(service_cd_valid&&service_cd_ready) cd_beat_count<=cd_beat_count+1;
            if(svc_aw_valid&&svc_aw_ready) service_wb_count<=service_wb_count+1;
            if(mem_aw_valid&&mem_aw_ready) manager_write_count<=manager_write_count+1;
            if(svc_w_valid&&svc_w_ready&&svc_w_last) svc_b_valid<=1;
            if(svc_b_valid&&svc_b_ready) svc_b_valid<=0;
            if(mem_w_valid&&mem_w_ready&&mem_w_last) mem_b_valid<=1;
            if(mem_b_valid&&mem_b_ready) mem_b_valid<=0;
        end
    end

    function automatic logic [511:0] pattern(input int seed);
        for(int i=0;i<64;i++) pattern[i*8+:8]=8'(seed+i*3);
    endfunction
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic local_cmd(input logic [1:0] op,input logic [63:0] addr,
        input cache_state_t state,input logic [511:0] value);
        @(negedge clk);local_op=op;local_addr=addr;local_state=state;local_wdata=value;local_valid=1;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        assert(local_rsp_valid&&!local_error) else $fatal(1,"WAVE_LOCAL_COMMAND");
        local_rsp_ready=1;tick();local_rsp_ready=0;
    endtask
    task automatic ace_read(input logic [3:0] op,input logic [63:0] addr,
        input logic [511:0] expected,input logic [3:0] id);
        @(negedge clk);ar_id=id;ar_addr=addr;ar_len=3;ar_size=4;ar_burst=1;ar_snoop=op;
        ar_domain=DOMAIN_INNER;ar_bar=0;ar_cache=4'b0010;ar_lock=0;ar_valid=1;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;r_ready=1;
        for(int beat=0;beat<4;beat++) begin
            do @(posedge clk);while(!r_valid);
            assert(r_id==id&&r_data==expected[beat*128+:128]&&r_last==(beat==3)&&r_resp[1:0]==0)
                else $fatal(1,"WAVE_READ_RESPONSE op=%0d beat=%0d",op,beat);
        end
        @(negedge clk);r_ready=0;r_ack=1;@(posedge clk);@(negedge clk);r_ack=0;
        while(busy) tick();
    endtask
    task automatic ace_wlu(input logic [63:0] addr,input logic [511:0] value);
        @(negedge clk);aw_id=4'h3;aw_addr=addr;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=WRITE_LINE_UNIQUE;aw_domain=DOMAIN_INNER;aw_bar=0;aw_cache=4'b0010;
        aw_lock=0;aw_unique=0;aw_valid=1;
        do @(posedge clk);while(!aw_ready);
        @(negedge clk);aw_valid=0;
        for(int beat=0;beat<4;beat++) begin
            w_data=value[beat*128+:128];w_strb='1;w_last=beat==3;w_valid=1;
            do @(posedge clk);while(!w_ready);
            @(negedge clk);w_valid=0;
        end
        b_ready=1;do @(posedge clk);while(!b_valid);
        assert(b_id==4'h3&&b_resp==0) else $fatal(1,"WAVE_WLU_B");
        @(negedge clk);b_ready=0;w_ack=1;@(posedge clk);@(negedge clk);w_ack=0;
        while(busy) tick();
    endtask

    initial begin
        ar_valid=0;r_ready=0;r_ack=0;aw_valid=0;w_valid=0;w_data=0;w_strb='1;w_last=0;
        b_ready=0;w_ack=0;local_valid=0;local_rsp_ready=0;local_op=0;local_addr=0;
        local_wdata=0;local_state=INVALID;svc_b_valid=0;mem_b_valid=0;
        rs_data=pattern(8'h10);rns_data=pattern(8'h40);wlu_data=pattern(8'h80);
        repeat(4) tick();rst_n=1;repeat(2) tick();

        // Existing baseline: ReadShared hit, CD, SharedClean transition.
        local_cmd(1,RS_ADDR,UNIQUE_CLEAN,rs_data);
        ace_read(READ_SHARED,RS_ADDR,rs_data,4'h1);
        local_cmd(0,RS_ADDR,INVALID,0);
        assert(local_hit&&local_rstate==SHARED_CLEAN) else $fatal(1,"WAVE_RS_STATE");

        // New: RNS hit on UniqueDirty, CD + PassDirty writeback, SharedClean.
        local_cmd(1,RNS_ADDR,UNIQUE_DIRTY,rns_data);
        ace_read(READ_NOT_SHARED_DIRTY,RNS_ADDR,rns_data,4'h2);
        local_cmd(0,RNS_ADDR,INVALID,0);
        assert(local_hit&&local_rstate==SHARED_CLEAN&&service_wb_count==1)
            else $fatal(1,"WAVE_RNS_STATE_WB");

        // New: WLU maps to MakeInvalid, sends no CD, then writes the new line.
        local_cmd(1,WLU_ADDR,UNIQUE_CLEAN,pattern(8'ha0));
        ace_wlu(WLU_ADDR,wlu_data);
        local_cmd(0,WLU_ADDR,INVALID,0);
        assert(!local_hit&&manager_write_count==1) else $fatal(1,"WAVE_WLU_INVALIDATE_WRITE");
        assert(observed_count==3&&observed_snoop[0]==READ_SHARED&&
               observed_snoop[1]==READ_NOT_SHARED_DIRTY&&observed_snoop[2]==MAKE_INVALID)
            else $fatal(1,"WAVE_OPCODE_SEQUENCE");
        assert(cr_count==3&&observed_cr[0]==5'b11001&&observed_cr[1]==5'b11101&&
               observed_cr[2]==5'b10000&&cd_beat_count==8)
            else $fatal(1,"WAVE_OPCODE_CR_CD rs=%h rns=%h wlu=%h cd=%0d",
                observed_cr[0],observed_cr[1],observed_cr[2],cd_beat_count);
        assert(!service_fault&&!manager_error&&service_idle&&!busy)
            else $fatal(1,"WAVE_OPCODE_DRAIN");
        $display("COVERAGE ACE_WAVE_OPS RS=1 RNS=1 RNS_DIRTY_WB=1 WLU=1 WLU_MI=1 CR=11001,11101,10000 CD_BEATS=8");
        $display("PASS ACE opcode waveform scenarios RS/RNS/WLU");
        $finish;
    end
    initial begin #100000;$fatal(1,"ACE_OPCODE_WAVE_TIMEOUT");end
endmodule
