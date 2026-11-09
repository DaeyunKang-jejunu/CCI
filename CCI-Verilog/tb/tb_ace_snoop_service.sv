`timescale 1ns/1ps
module tb_ace_snoop_service;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic quiescent=1,legacy_ac_valid=0,legacy_ac_ready,legacy_cr_valid,legacy_cr_ready=0;
    logic [63:0] legacy_ac_addr=0;logic [3:0] legacy_ac_snoop=13;logic [1:0] legacy_cr_resp;
    logic req_valid=0,req_nq=0,req_ready,rsp_valid,rsp_ready=0;logic [63:0] req_addr=0;logic [3:0] req_snoop=0;
    logic [4:0] rsp_resp;logic [511:0] rsp_data;logic maintenance_busy,idle,fault;
    logic ac_valid,ac_ready,cr_valid,cr_ready,cd_valid,cd_ready,cd_last;
    logic [63:0] ac_addr;logic [3:0] ac_snoop;logic [4:0] cr_resp;logic [127:0] cd_data;
    logic aw_valid,aw_ready,w_valid,w_ready,w_last,b_valid,b_ready;
    logic [63:0] aw_addr;logic [7:0] aw_len;logic [2:0] aw_size;logic [1:0] aw_burst,b_resp;
    logic [127:0] w_data;logic [15:0] w_strb;
    logic local_valid=0,local_ready,local_rsp_valid,local_rsp_ready=0,local_error,local_hit;
    logic [1:0] local_op=0;logic [63:0] local_addr=0;logic [511:0] local_wdata=0,local_rdata;
    cache_state_t local_state=INVALID,local_rstate;
    logic endpoint_idle,ecr_valid,ecd_valid,ecr_ready,ecd_ready;
    logic inject_cd_error=0,inject_cr_error=0,ecd_last;logic [4:0] ecr_resp;
    logic allow_cr=1,allow_cd=1,allow_aw=1,allow_w=1,allow_b=1,inject_b_error=0;
    logic mem_awready,mem_wready,mem_bvalid,mem_err;logic [1:0] mem_bresp;
    int ac_count=0,cr_count=0,cd_count=0,wb_count=0,wb_beats=0;
    localparam logic [63:0] ADDRESS=64'h12_0000_1040;
    cci_ace_snoop_service dut(.*);
    ace_cache_snoop_endpoint #(.LINES(2)) cache(
        .clk,.rst_n,.local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready,.local_error,.local_hit,.local_rstate,.local_rdata,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid(ecr_valid),.cr_ready(ecr_ready),.cr_resp(ecr_resp),
        .cd_valid(ecd_valid),.cd_ready(ecd_ready),.cd_data,.cd_last(ecd_last),.idle(endpoint_idle)
    );
    assign cd_last=inject_cd_error ? 1'b1:ecd_last;
    assign cr_resp=ecr_resp | (inject_cr_error ? 5'b00010:5'b0);
    assign cr_valid=ecr_valid && allow_cr;assign ecr_ready=cr_ready && allow_cr;
    assign cd_valid=ecd_valid && allow_cd;assign ecd_ready=cd_ready && allow_cd;
    assign aw_ready=mem_awready && allow_aw;assign w_ready=mem_wready && allow_w;
    assign b_valid=mem_bvalid && allow_b;assign b_resp=inject_b_error?2'b10:mem_bresp;
    axi_memory_slave #(.ID_WIDTH(1),.MAX_OUTSTANDING_TRANSACTIONS(2),.RESP_LATENCY(3)) memory(
        .ACLK(clk),.ARESETn(rst_n),.AWVALID(aw_valid && allow_aw),.AWREADY(mem_awready),
        .AWID(1'b0),.AWADDR(aw_addr),.AWLEN(aw_len),.WVALID(w_valid && allow_w),.WREADY(mem_wready),.WDATA(w_data),.WSTRB(w_strb),.WLAST(w_last),
        .BVALID(mem_bvalid),.BREADY(b_ready && allow_b),.BRESP(mem_bresp),
        .ARVALID(1'b0),.ARID(1'b0),.ARADDR(64'b0),.ARLEN(8'b0),.RREADY(1'b1),.protocol_error_wlast(mem_err)
    );
    function automatic logic [511:0] pattern(input int n);
        for(int b=0;b<64;b++) pattern[b*8+:8]=8'(n*13+b*7);
    endfunction
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic reset_case;
        @(negedge clk);rst_n=0;req_valid=0;rsp_ready=0;local_valid=0;local_rsp_ready=0;
        legacy_ac_valid=0;legacy_cr_ready=0;allow_cr=1;allow_cd=1;allow_aw=1;allow_w=1;allow_b=1;inject_b_error=0;inject_cd_error=0;inject_cr_error=0;quiescent=1;
        repeat(3) tick();rst_n=1;tick();
        for(int b=0;b<64;b++) memory.put_byte(ADDRESS+64'(b),8'haa);
    endtask
    task automatic local_cmd(input logic [1:0] op,input cache_state_t state,input logic [511:0] value,input bit error_expected=0);
        local_addr=ADDRESS;local_op=op;local_state=state;local_wdata=value;local_valid=1;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        assert(local_rsp_valid && local_error==error_expected) else $fatal(1,"LOCAL_RESPONSE");
        local_rsp_ready=1;tick();local_rsp_ready=0;
    endtask
    task automatic request(input logic [3:0] op);
        req_addr=ADDRESS;req_snoop=op;req_valid=1;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
    endtask
    always @(posedge clk) begin
        if(!rst_n) begin ac_count=0;cr_count=0;cd_count=0;wb_count=0;wb_beats=0;end
        else begin
            if(ac_valid && ac_ready) ac_count++;
            if(cr_valid && cr_ready) cr_count++;
            if(cd_valid && cd_ready) begin
                assert(inject_cd_error || cd_last==(cd_count==3)) else $fatal(1,"CD_FRAMING");cd_count++;
            end
            if(aw_valid && aw_ready) begin
                assert(aw_addr==ADDRESS && aw_len==3 && aw_size==4 && aw_burst==1) else $fatal(1,"WB_ADDRESS");
            end
            if(w_valid && w_ready) begin assert(w_strb=='1 && w_last==(wb_beats==3)) else $fatal(1,"WB_FRAMING");wb_beats++;end
            if(b_valid && b_ready) wb_count++;
            assert(!mem_err) else $fatal(1,"WB_MEMORY_PROTOCOL");
        end
    end
    logic [3:0] operations[8]='{0,1,2,3,7,8,9,13};
    logic [4:0] expected;logic [511:0] value;cache_state_t expected_state;
    bit present,is_dirty,is_unique,transfer,pass_dirty,shared;
    int scenarios=0;
    initial begin
        for(int s=0;s<5;s++) for(int k=0;k<8;k++) begin
            reset_case();value=pattern(s*8+k);
            local_cmd(1,cache_state_t'(s),value);
            // Independent numeric policy oracle; does not call the RTL decoder.
            present=s!=0;is_dirty=(s==3 || s==4);is_unique=(s==2 || s==4);
            transfer=present && (k<5 || ((k==5 || k==6) && is_dirty));
            pass_dirty=present && is_dirty && k>0 && k<7;
            shared=present && (k<4 || k==5);
            expected={present && is_unique,shared,pass_dirty,1'b0,transfer};
            expected_state=(s==0 || k==4 || k==6 || k==7)?INVALID:((k==0)?cache_state_t'(s):SHARED_CLEAN);
            // Exercise both channel orders without coupling CRVALID to CDREADY.
            if(k%2==0) allow_cr=0;else allow_cd=0;
            allow_aw=0;allow_w=0;allow_b=0;
            request(operations[k]);repeat(9) tick();
            if(transfer && k%2==0) assert(cd_count==4 && cr_count==0 && ecr_valid) else $fatal(1,"CD_BEFORE_CR");
            if(transfer && k%2==1) assert(cr_count==1 && cd_count==0 && ecd_valid) else $fatal(1,"CR_BEFORE_CD");
            allow_cr=1;allow_cd=1;repeat(7) tick();
            if(pass_dirty) begin
                assert(aw_valid && !rsp_valid) else $fatal(1,"DIRTY_COMPLETED_BEFORE_WB");
                allow_aw=1;repeat(3) tick();assert(w_valid && !rsp_valid) else $fatal(1,"WB_W_STALL");
                // Stall each CD-derived writeback beat intermittently.
                for(int b=0;b<4;b++) begin allow_w=1;tick();allow_w=0;repeat(2) tick();end
                wait(mem_bvalid);repeat(5) tick();assert(!rsp_valid) else $fatal(1,"COMPLETED_BEFORE_ACTUAL_B");
                allow_b=1;
            end
            wait(rsp_valid);@(negedge clk);
            assert(rsp_resp==expected && !fault && cd_count==(transfer?4:0) && wb_count==(pass_dirty?1:0)) else $fatal(1,"SNOOP_RESPONSE s=%0d op=%0d got=%h expected=%h",s,operations[k],rsp_resp,expected);
            if(transfer) assert(rsp_data==value) else $fatal(1,"CD_DATA_CORRUPTION");
            for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==(pass_dirty?value[b*8+:8]:8'haa)) else $fatal(1,"DIRTY_WRITEBACK_BYTES");
            repeat(3) tick();rsp_ready=1;tick();rsp_ready=0;tick();
            local_cmd(0,INVALID,0);
            assert(local_rstate==expected_state && local_hit==(expected_state!=INVALID)) else $fatal(1,"CACHE_STATE_TRANSITION");
            scenarios++;
        end
        // Unique local store, dirty eviction rejection, and legacy MI adapter.
        reset_case();local_cmd(1,UNIQUE_CLEAN,pattern(1));local_cmd(2,INVALID,pattern(2));
        local_cmd(3,INVALID,0,1);local_cmd(1,SHARED_CLEAN,0,1);
        legacy_ac_addr=ADDRESS;legacy_ac_valid=1;
        do @(posedge clk);while(!legacy_ac_ready);
        @(negedge clk);legacy_ac_valid=0;wait(legacy_cr_valid);@(negedge clk);
        assert(legacy_cr_resp==0 && cd_count==0 && wb_count==0) else $fatal(1,"LEGACY_MI_RESPONSE");
        legacy_cr_ready=1;tick();legacy_cr_ready=0;tick();local_cmd(0,INVALID,0);
        assert(!local_hit) else $fatal(1,"LEGACY_MI_NOT_INVALIDATED");
        // Legacy CR error is contained: v9 must never see a successful retirement.
        reset_case();local_cmd(1,UNIQUE_CLEAN,pattern(9));inject_cr_error=1;
        legacy_ac_addr=ADDRESS;legacy_ac_valid=1;legacy_cr_ready=1;
        do @(posedge clk);while(!legacy_ac_ready);
        @(negedge clk);legacy_ac_valid=0;
        repeat(12) begin tick();assert(!legacy_cr_valid) else $fatal(1,"LEGACY_ERROR_RETIRED");end
        assert(fault && maintenance_busy && !req_ready) else $fatal(1,"LEGACY_ERROR_NOT_HALTED");
        // DVM carries no cache line data and must not change cache state.
        reset_case();local_cmd(1,UNIQUE_DIRTY,pattern(10));request(DVM_MESSAGE);
        wait(rsp_valid);@(negedge clk);
        assert(rsp_resp==0 && cd_count==0 && wb_count==0) else $fatal(1,"DVM_MESSAGE_RESPONSE");
        rsp_ready=1;tick();rsp_ready=0;tick();local_cmd(0,INVALID,0);
        assert(local_hit && local_rstate==UNIQUE_DIRTY) else $fatal(1,"DVM_CHANGED_CACHE");
        // A non-DVM unsupported encoding remains an explicit error.
        reset_case();request(6);wait(rsp_valid);@(negedge clk);
        assert(rsp_resp==5'b00010 && cd_count==0 && wb_count==0) else $fatal(1,"UNSUPPORTED_SNOOP");
        // No maintenance admission without the drain grant.
        rsp_ready=1;tick();rsp_ready=0;tick();quiescent=0;req_valid=1;
        repeat(4) begin tick();assert(!req_ready) else $fatal(1,"QUIESCENCE_ADMISSION");end
        req_valid=0;
        // Reset a partially returned line; no old CR/CD may leak into the new epoch.
        reset_case();local_cmd(1,UNIQUE_DIRTY,pattern(44));allow_cd=0;request(1);
        wait(ecr_valid);repeat(3) tick();reset_case();
        assert(!ecr_valid && !ecd_valid && !rsp_valid && !fault) else $fatal(1,"RESET_STALE_SNOOP");
        local_cmd(1,SHARED_CLEAN,pattern(45));local_cmd(2,INVALID,0,1);
        // Malformed CDLAST stops admission instead of reporting a successful line.
        reset_case();local_cmd(1,UNIQUE_DIRTY,pattern(66));inject_cd_error=1;request(9);
        wait(rsp_valid);@(negedge clk);assert(fault && rsp_resp[1] && wb_count==0) else $fatal(1,"CD_ERROR_NOT_CONTAINED");
        // Error + DataTransfer/PassDirty is internally contradictory and
        // fail-stops immediately; no CD wait or false writeback is allowed.
        reset_case();value=pattern(67);local_cmd(1,UNIQUE_DIRTY,value);inject_cr_error=1;request(9);
        wait(rsp_valid);@(negedge clk);assert(fault && rsp_resp[1] && wb_count==0)
            else $fatal(1,"CR_ERROR_NOT_CONTAINED");
        // Failed writeback retains the data and blocks reuse until recovery/reset.
        reset_case();value=pattern(77);local_cmd(1,UNIQUE_DIRTY,value);inject_b_error=1;request(9);
        wait(rsp_valid);@(negedge clk);assert(fault && rsp_resp[1] && rsp_data==value) else $fatal(1,"WB_ERROR_RETENTION");
        rsp_ready=1;tick();rsp_ready=0;repeat(3) tick();assert(!req_ready && maintenance_busy && rsp_data==value) else $fatal(1,"WB_ERROR_REUSE");
        $display("COVERAGE ace_snoop state_opcode=%0d legacy=1 local_store=1 dirty_eviction_guard=1 legacy_error=1 wb_error=1 cr_error=1 cd_error=1 reset=1 unsupported=1 channel_orders=2",scenarios);
        $display("PASS ACE snoop state/data/writeback service");$finish;
    end
    initial begin #300000;$fatal(1,"ACE_SERVICE_TIMEOUT");end
endmodule
