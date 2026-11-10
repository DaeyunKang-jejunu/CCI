`timescale 1ns/1ps
module tb_ace_manager_transactions;
    import ace_snoop_pkg::*;
    localparam int IW=4;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic ar_valid,ar_ready;logic [IW-1:0] ar_id;logic [63:0] ar_addr;logic [7:0] ar_len;
    logic [2:0] ar_size;logic [1:0] ar_burst;logic [3:0] ar_snoop;logic [1:0] ar_domain,ar_bar;
    logic [3:0] ar_cache;logic ar_lock;
    logic r_valid,r_ready;logic [IW-1:0] r_id;logic [127:0] r_data;logic r_last;logic [3:0] r_resp;logic r_ack;
    logic aw_valid,aw_ready;logic [IW-1:0] aw_id;logic [63:0] aw_addr;logic [7:0] aw_len;
    logic [2:0] aw_size;logic [1:0] aw_burst;logic [2:0] aw_snoop;logic [1:0] aw_domain,aw_bar;
    logic [3:0] aw_cache;logic aw_lock,aw_unique;
    logic w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;
    logic b_valid,b_ready;logic [IW-1:0] b_id;logic [1:0] b_resp;logic w_ack,busy,protocol_error;
    logic req_valid,req_ready;logic [63:0] req_addr;logic [3:0] req_snoop;
    logic rsp_valid,rsp_ready;logic [4:0] rsp_resp;logic [511:0] rsp_data;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last;
    logic svc_aw_valid,svc_aw_ready;logic [63:0] svc_aw_addr;logic [7:0] svc_aw_len;logic [2:0] svc_aw_size;
    logic [1:0] svc_aw_burst;logic svc_w_valid,svc_w_ready;logic [127:0] svc_w_data;logic [15:0] svc_w_strb;
    logic svc_w_last,svc_b_valid,svc_b_ready;logic [1:0] svc_b_resp;
    logic mem_aw_valid,mem_aw_ready;logic [63:0] mem_aw_addr;logic [7:0] mem_aw_len;logic [2:0] mem_aw_size;
    logic [1:0] mem_aw_burst;logic mem_w_valid,mem_w_ready;logic [127:0] mem_w_data;logic [15:0] mem_w_strb;
    logic mem_w_last,mem_b_valid,mem_b_ready;logic [1:0] mem_b_resp;
    logic mem_ar_valid,mem_ar_ready;logic [63:0] mem_ar_addr;logic [7:0] mem_ar_len;logic [2:0] mem_ar_size;
    logic [1:0] mem_ar_burst;logic mem_r_valid,mem_r_ready;logic [127:0] mem_r_data;logic mem_r_last;logic [1:0] mem_r_resp;
    logic local_valid,local_ready;logic [1:0] local_op;logic [63:0] local_addr;logic [511:0] local_wdata;
    cache_state_t local_state,local_rstate;logic local_rsp_valid,local_rsp_ready,local_error,local_hit;logic [511:0] local_rdata;
    logic service_busy,service_idle,fault,cache_idle;
    logic reservation_kill_valid=0;logic [63:0] reservation_kill_addr=0;

    ace_manager_request_controller #(.ID_WIDTH(IW)) dut(
        .clk,.rst_n,.accept_enable(1'b1),.reservation_kill_valid,.reservation_kill_addr,.*,
        .snoop_req_valid(req_valid),.snoop_req_ready(req_ready),.snoop_req_addr(req_addr),.snoop_req_snoop(req_snoop),
        .snoop_rsp_valid(rsp_valid),.snoop_rsp_ready(rsp_ready),.snoop_rsp_resp(rsp_resp),.snoop_rsp_data(rsp_data)
    );
    cci_ace_snoop_service service(
        .clk,.rst_n,.quiescent(1'b1),
        .legacy_ac_valid(1'b0),.legacy_ac_ready(),.legacy_ac_addr('0),.legacy_ac_snoop('0),
        .legacy_cr_valid(),.legacy_cr_ready(1'b1),.legacy_cr_resp(),
        .req_valid,.req_ready,.req_addr,.req_snoop,.rsp_valid,.rsp_ready,.rsp_resp,.rsp_data,
        .maintenance_busy(service_busy),.idle(service_idle),.fault,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,
        .aw_valid(svc_aw_valid),.aw_ready(svc_aw_ready),.aw_addr(svc_aw_addr),.aw_len(svc_aw_len),
        .aw_size(svc_aw_size),.aw_burst(svc_aw_burst),.w_valid(svc_w_valid),.w_ready(svc_w_ready),
        .w_data(svc_w_data),.w_strb(svc_w_strb),.w_last(svc_w_last),
        .b_valid(svc_b_valid),.b_ready(svc_b_ready),.b_resp(svc_b_resp)
    );
    ace_cache_snoop_endpoint #(.LINES(16)) cache(
        .clk,.rst_n,.local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready,.local_error,.local_hit,.local_rstate,.local_rdata,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,.idle(cache_idle)
    );

    byte unsigned memory[longint unsigned];
    logic wr_active,wr_owner_manager,bus_b_valid,bus_b_owner;
    logic [63:0] wr_addr;logic [7:0] wr_len,wr_beat;
    logic rd_active;logic [63:0] rd_addr;logic [7:0] rd_len,rd_beat;
    wire bus_aw_valid=svc_aw_valid || mem_aw_valid;
    wire bus_aw_owner=!svc_aw_valid;
    wire [63:0] bus_aw_addr=svc_aw_valid?svc_aw_addr:mem_aw_addr;
    wire [7:0] bus_aw_len=svc_aw_valid?svc_aw_len:mem_aw_len;
    wire bus_w_valid=wr_owner_manager?mem_w_valid:svc_w_valid;
    wire [127:0] bus_w_data=wr_owner_manager?mem_w_data:svc_w_data;
    wire [15:0] bus_w_strb=wr_owner_manager?mem_w_strb:svc_w_strb;
    wire bus_w_last=wr_owner_manager?mem_w_last:svc_w_last;
    wire bus_b_ready=bus_b_owner?mem_b_ready:svc_b_ready;
    assign svc_aw_ready=!wr_active && !bus_b_valid && svc_aw_valid;
    assign mem_aw_ready=!wr_active && !bus_b_valid && !svc_aw_valid;
    assign svc_w_ready=wr_active && !wr_owner_manager;
    assign mem_w_ready=wr_active && wr_owner_manager;
    assign svc_b_valid=bus_b_valid && !bus_b_owner;assign mem_b_valid=bus_b_valid && bus_b_owner;
    assign svc_b_resp=0;assign mem_b_resp=0;
    assign mem_ar_ready=!rd_active;
    assign mem_r_valid=rd_active;assign mem_r_resp=0;assign mem_r_last=rd_beat==rd_len;
    always_comb for(int j=0;j<16;j++) mem_r_data[j*8+:8]=memory.exists(rd_addr+rd_beat*16+j)?memory[rd_addr+rd_beat*16+j]:0;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            wr_active<=0;wr_owner_manager<=0;bus_b_valid<=0;bus_b_owner<=0;wr_addr<=0;wr_len<=0;wr_beat<=0;
            rd_active<=0;rd_addr<=0;rd_len<=0;rd_beat<=0;
        end else begin
            if(bus_aw_valid && !wr_active && !bus_b_valid) begin
                wr_active<=1;wr_owner_manager<=bus_aw_owner;wr_addr<=bus_aw_addr;wr_len<=bus_aw_len;wr_beat<=0;
            end
            if(bus_w_valid && wr_active) begin
                for(int j=0;j<16;j++) if(bus_w_strb[j]) memory[wr_addr+wr_beat*16+j]=bus_w_data[j*8+:8];
                assert(bus_w_last==(wr_beat==wr_len)) else $fatal(1,"MEM_WLAST");
                if(wr_beat==wr_len) begin wr_active<=0;bus_b_valid<=1;bus_b_owner<=wr_owner_manager;end
                else wr_beat<=wr_beat+1'b1;
            end
            if(bus_b_valid && bus_b_ready) bus_b_valid<=0;
            if(mem_ar_valid && mem_ar_ready) begin rd_active<=1;rd_addr<=mem_ar_addr;rd_len<=mem_ar_len;rd_beat<=0;end
            if(mem_r_valid && mem_r_ready) begin
                if(mem_r_last) rd_active<=0;else rd_beat<=rd_beat+1'b1;
            end
        end
    end

    int snoops;logic [3:0] last_snoop;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin snoops<=0;last_snoop<=0;end
        else if(ac_valid && ac_ready) begin snoops<=snoops+1;last_snoop<=ac_snoop;end
    end
    function automatic logic [511:0] pattern(input byte unsigned seed);
        for(int j=0;j<64;j++) pattern[j*8+:8]=seed+j;
    endfunction
    task automatic install(input logic [63:0] addr,input logic [511:0] data,input cache_state_t state);
        @(negedge clk);local_valid=1;local_op=1;local_addr=addr;local_wdata=data;local_state=state;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        do @(posedge clk);while(!local_rsp_valid);
        assert(!local_error) else $fatal(1,"INSTALL");
        @(negedge clk);local_rsp_ready=1;@(negedge clk);local_rsp_ready=0;
    endtask
    task automatic probe_invalid(input logic [63:0] addr);
        @(negedge clk);local_valid=1;local_op=0;local_addr=addr;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        do @(posedge clk);while(!local_rsp_valid);
        assert(!local_hit && local_rstate==INVALID) else $fatal(1,"CACHE_NOT_INVALID");
        @(negedge clk);local_rsp_ready=1;@(negedge clk);local_rsp_ready=0;
    endtask
    task automatic ace_read(input logic [63:0] addr,input logic [3:0] op,
        input logic [511:0] expected,input bit has_data,input logic [3:0] expected_ac);
        int snoops_before=snoops;
        @(negedge clk);ar_valid=1;ar_id=4'ha;ar_addr=addr;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=op;ar_domain=DOMAIN_INNER;ar_bar=0;ar_cache=4'b0010;ar_lock=0;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;r_ready=1;
        if(has_data) for(int k=0;k<4;k++) begin
            do @(posedge clk);while(!r_valid);
            assert(r_id==4'ha && r_data==expected[k*128+:128] && r_last==(k==3) && r_resp[1:0]==0)
                else $fatal(1,"ACE_READ_DATA op=%0h beat=%0d",op,k);
            @(negedge clk);
        end else begin
            do @(posedge clk);while(!r_valid);
            assert(r_last && r_resp==0 && r_data==0) else $fatal(1,"ACE_CLEAN_RESPONSE");
            @(negedge clk);
        end
        r_ready=0;
        repeat(2) begin @(posedge clk);assert(busy) else $fatal(1,"RACK_NOT_OBSERVED");end
        @(negedge clk);r_ack=1;@(negedge clk);r_ack=0;
        wait(!busy);
        assert(snoops==snoops_before+1 && last_snoop==expected_ac) else $fatal(1,"AUTO_READ_SNOOP op=%0h ac=%0h",op,last_snoop);
    endtask
    task automatic ace_write(input logic [63:0] addr,input logic [2:0] op,
        input logic [511:0] data,input logic [63:0] strobes,input int beats,input logic [3:0] expected_ac);
        int snoops_before=snoops;
        @(negedge clk);aw_valid=1;aw_id=4'hb;aw_addr=addr;aw_len=beats-1;aw_size=4;aw_burst=1;
        aw_snoop=op;aw_domain=DOMAIN_INNER;aw_bar=0;aw_cache=4'b0010;aw_lock=0;aw_unique=0;
        do @(posedge clk);while(!aw_ready);
        @(negedge clk);aw_valid=0;
        if(op!=EVICT) for(int k=0;k<beats;k++) begin
            w_valid=1;w_data=data[k*128+:128];w_strb=strobes[k*16+:16];w_last=k==beats-1;
            do @(posedge clk);while(!w_ready);
            @(negedge clk);
        end
        w_valid=0;w_last=0;b_ready=1;
        do @(posedge clk);while(!b_valid);
        assert(b_id==4'hb && b_resp==0) else $fatal(1,"ACE_WRITE_RESPONSE op=%0d",op);
        @(negedge clk);b_ready=0;
        repeat(2) begin @(posedge clk);assert(busy) else $fatal(1,"WACK_NOT_OBSERVED");end
        @(negedge clk);w_ack=1;@(negedge clk);w_ack=0;
        wait(!busy);
        if(op inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE})
            assert(snoops==snoops_before+1 && last_snoop==expected_ac) else $fatal(1,"AUTO_WRITE_SNOOP");
        else assert(snoops==snoops_before) else $fatal(1,"UNEXPECTED_MEMORY_UPDATE_SNOOP");
    endtask
    task automatic check_memory(input logic [63:0] addr,input logic [511:0] data);
        for(int j=0;j<64;j++) assert(memory.exists(addr+j) && memory[addr+j]==data[j*8+:8])
            else $fatal(1,"MEMORY addr=%h byte=%0d got=%h exp=%h",addr,j,memory[addr+j],data[j*8+:8]);
    endtask
    task automatic ace_special_read(input logic [IW-1:0] id,input logic [63:0] addr,
        input logic [3:0] op,input logic lock,input logic [3:0] expected_resp,
        input int response_beats,input int expected_snoops,input logic [3:0] expected_ac);
        int snoops_before=snoops;
        @(negedge clk);ar_valid=1;ar_id=id;ar_addr=addr;
        ar_len=dvm(op)?0:3;ar_size=4;ar_burst=1;ar_snoop=op;
        ar_domain=DOMAIN_INNER;ar_bar=0;ar_cache=4'b0010;ar_lock=lock;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;r_ready=1;
        for(int k=0;k<response_beats;k++) begin
            do @(posedge clk);while(!r_valid);
            assert(r_id==id && r_last==(k==response_beats-1) && r_resp==expected_resp)
                else $fatal(1,"SPECIAL_R op=%0h id=%0h beat=%0d resp=%0h",op,id,k,r_resp);
            @(negedge clk);
        end
        r_ready=0;r_ack=1;@(negedge clk);r_ack=0;wait(!busy);
        assert(snoops==snoops_before+expected_snoops &&
            (!expected_snoops || last_snoop==expected_ac))
            else $fatal(1,"SPECIAL_SNOOP op=%0h count=%0d",op,snoops-snoops_before);
    endtask
    task automatic ace_barrier(input bit read_first,input logic [1:0] kind);
        bit accepted;
        @(negedge clk);
        ar_id=4'h5;ar_addr=0;ar_len=0;ar_size=4;ar_burst=1;ar_snoop=0;
        ar_domain=DOMAIN_INNER;ar_bar=kind;ar_cache=4'b0010;ar_lock=0;
        aw_id=4'h6;aw_addr=0;aw_len=0;aw_size=4;aw_burst=1;aw_snoop=0;
        aw_domain=DOMAIN_INNER;aw_bar=kind;aw_cache=4'b0010;aw_lock=0;aw_unique=0;
        if(read_first) begin
            ar_valid=1;do @(posedge clk);while(!ar_ready);@(negedge clk);ar_valid=0;
            repeat(2) @(negedge clk);
            aw_valid=1;accepted=0;
            for(int n=0;n<20;n++) begin @(posedge clk);if(aw_ready) begin accepted=1;break;end end
            assert(accepted) else $fatal(1,"BARRIER_PAIR_MISSING");
            @(negedge clk);aw_valid=0;
        end else begin
            aw_valid=1;do @(posedge clk);while(!aw_ready);@(negedge clk);aw_valid=0;
            repeat(2) @(negedge clk);
            ar_valid=1;accepted=0;
            for(int n=0;n<20;n++) begin @(posedge clk);if(ar_ready) begin accepted=1;break;end end
            assert(accepted) else $fatal(1,"BARRIER_PAIR_MISSING");
            @(negedge clk);ar_valid=0;
        end
        // The read and write responses are independent and carry their own IDs.
        r_ready=0;b_ready=0;repeat(2) @(posedge clk);
        assert(r_valid && b_valid && r_id==5 && b_id==6 && r_last && r_resp==0 && b_resp==0)
            else $fatal(1,"BARRIER_RESPONSES");
        @(negedge clk);r_ready=1;@(negedge clk);r_ready=0;
        repeat(2) begin @(posedge clk);assert(b_valid && !r_valid) else $fatal(1,"BARRIER_R_BACKPRESSURE");end
        @(negedge clk);b_ready=1;@(negedge clk);b_ready=0;
        repeat(2) begin @(posedge clk);assert(busy) else $fatal(1,"BARRIER_ACK_EARLY");end
        @(negedge clk);w_ack=1;@(negedge clk);w_ack=0;
        repeat(2) begin @(posedge clk);assert(busy) else $fatal(1,"BARRIER_RACK_REQUIRED");end
        @(negedge clk);r_ack=1;@(negedge clk);r_ack=0;wait(!busy);
    endtask

    initial begin
        logic [511:0] a,b,c,d,e,partial,x;
        ar_valid=0;r_ready=0;r_ack=0;aw_valid=0;w_valid=0;b_ready=0;w_ack=0;
        local_valid=0;local_rsp_ready=0;local_op=0;local_addr=0;local_wdata=0;local_state=INVALID;
        repeat(4) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);
        a=pattern(8'h10);b=pattern(8'h30);c=pattern(8'h50);d=pattern(8'h70);e=pattern(8'h90);
        install(64'h000,a,UNIQUE_DIRTY);ace_read(64'h000,READ_SHARED,a,1,READ_SHARED);check_memory(64'h000,a);
        install(64'h040,b,SHARED_DIRTY);ace_read(64'h040,READ_UNIQUE,b,1,READ_UNIQUE);check_memory(64'h040,b);probe_invalid(64'h040);
        install(64'h080,c,UNIQUE_DIRTY);ace_read(64'h080,CLEAN_UNIQUE,'0,0,CLEAN_INVALID);check_memory(64'h080,c);probe_invalid(64'h080);
        install(64'h0c0,d,UNIQUE_DIRTY);partial=d;partial[63:0]=64'h0123456789abcdef;
        ace_write(64'h0c0,WRITE_UNIQUE,partial,64'h0000_0000_0000_00ff,1,CLEAN_INVALID);
        for(int j=0;j<8;j++) d[j*8+:8]=partial[j*8+:8];check_memory(64'h0c0,d);probe_invalid(64'h0c0);
        ace_write(64'h100,WRITE_BACK,e,'1,4,0);check_memory(64'h100,e);
        ace_write(64'h140,EVICT,'0,'0,4,0);
        assert(!memory.exists(64'h140)) else $fatal(1,"EVICT_WROTE_MEMORY");
        // AxBAR=2 is a normal transaction that ignores barriers, not a barrier.
        @(negedge clk);ar_valid=1;ar_id=4'h1;ar_addr=64'h100;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=READ_ONCE;ar_domain=DOMAIN_NONSHAREABLE;ar_bar=2;ar_cache=2;ar_lock=0;
        do @(posedge clk);while(!ar_ready);@(negedge clk);ar_valid=0;r_ready=1;
        for(int k=0;k<4;k++) begin do @(posedge clk);while(!r_valid);
            assert(r_resp==0 && r_last==(k==3)) else $fatal(1,"AXBARRIER_IGNORE_NORMAL");@(negedge clk);end
        r_ready=0;r_ack=1;@(negedge clk);r_ack=0;wait(!busy);

        // DVM Message and DVM Complete are forwarded on AC and return one
        // data-less R response.  The endpoint proves they do not touch lines.
        ace_special_read(4'h2,64'h0000_0000_0000_1000,DVM_MESSAGE,0,0,1,1,DVM_MESSAGE);
        ace_special_read(4'h2,0,DVM_COMPLETE,0,0,1,1,DVM_COMPLETE);

        // Shareable exclusive sequence: exclusive load registers ID+line;
        // matching CleanUnique propagates and returns EXOKAY.
        x=pattern(8'ha0);install(64'h200,x,SHARED_CLEAN);
        ace_special_read(4'h3,64'h200,READ_SHARED,1,4'b1001,4,1,READ_SHARED);
        ace_special_read(4'h3,64'h200,CLEAN_UNIQUE,1,4'b0001,1,1,CLEAN_INVALID);
        probe_invalid(64'h200);
        // A first store attempt without a matching monitor fails locally and
        // records the attempt; retrying the same ID/address can then pass.
        ace_special_read(4'h4,64'h240,CLEAN_UNIQUE,1,4'b0000,1,0,0);
        ace_special_read(4'h4,64'h240,CLEAN_UNIQUE,1,4'b0001,1,1,CLEAN_INVALID);
        // An intervening write admission kills a matching reservation.
        install(64'h280,x,SHARED_CLEAN);
        ace_special_read(4'h7,64'h280,READ_CLEAN,1,4'b1001,4,1,READ_CLEAN);
        @(negedge clk);reservation_kill_addr=64'h280;reservation_kill_valid=1;
        @(negedge clk);reservation_kill_valid=0;
        ace_special_read(4'h7,64'h280,CLEAN_UNIQUE,1,4'b0000,1,0,0);

        // Both legal barrier types and both address-channel arrival orders.
        ace_barrier(1,2'b01);ace_barrier(0,2'b11);
        // Illegal DOMAIN/ARSNOOP combination is completed as a one-beat DECERR/SLVERR response and never snooped.
        @(negedge clk);ar_valid=1;ar_id=1;ar_addr=64'h180;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=READ_SHARED;ar_domain=DOMAIN_NONSHAREABLE;ar_bar=0;ar_cache=2;ar_lock=0;
        do @(posedge clk);while(!ar_ready);@(negedge clk);ar_valid=0;r_ready=1;
        for(int k=0;k<4;k++) begin
            do @(posedge clk);while(!r_valid);
            assert(r_last==(k==3) && r_resp[1:0]!=0) else $fatal(1,"DOMAIN_CHECK");
            @(negedge clk);
        end
        r_ready=0;r_ack=1;@(negedge clk);r_ack=0;wait(!busy);
        assert(!fault && !protocol_error) else $fatal(1,"UNEXPECTED_FAULT");
        $display("PASS ACE initiating transactions: coherent read/write DVM barrier exclusive");
        $finish;
    end
    initial begin repeat(10000) @(posedge clk);$fatal(1,"TIMEOUT");end
endmodule
