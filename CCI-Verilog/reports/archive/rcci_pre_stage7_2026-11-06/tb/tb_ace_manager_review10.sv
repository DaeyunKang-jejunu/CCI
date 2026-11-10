`timescale 1ns/1ps
// REVIEW 10.1/10.2/10.5 regression for ace_manager_request_bank:
// shared exclusive monitor across context slots, exclusive-store serialization,
// commit re-check, manager-write clear policy, payload stability of the
// downstream memory AR and snoop request ports, and DVM isolation per slot.
module tb_ace_manager_review10;
    import ace_snoop_pkg::*;
    localparam int ID_WIDTH=4;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic accept_enable=1;
    logic ar_valid,ar_ready;logic [ID_WIDTH-1:0] ar_id;logic [63:0] ar_addr;logic [7:0] ar_len;
    logic [2:0] ar_size;logic [1:0] ar_burst;logic [3:0] ar_snoop;logic [1:0] ar_domain,ar_bar;
    logic [3:0] ar_cache;logic ar_lock;
    logic r_valid,r_ready;logic [ID_WIDTH-1:0] r_id;logic [127:0] r_data;logic r_last;logic [3:0] r_resp;logic r_ack;
    logic aw_valid,aw_ready;logic [ID_WIDTH-1:0] aw_id;logic [63:0] aw_addr;logic [7:0] aw_len;
    logic [2:0] aw_size;logic [1:0] aw_burst;logic [2:0] aw_snoop;logic [1:0] aw_domain,aw_bar;
    logic [3:0] aw_cache;logic aw_lock,aw_unique;
    logic w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;
    logic b_valid,b_ready;logic [ID_WIDTH-1:0] b_id;logic [1:0] b_resp;logic w_ack;
    logic snoop_req_valid,snoop_req_ready;logic [63:0] snoop_req_addr;logic [3:0] snoop_req_snoop;
    logic snoop_rsp_valid,snoop_rsp_ready;logic [4:0] snoop_rsp_resp;logic [511:0] snoop_rsp_data;
    logic mem_aw_valid,mem_aw_ready;logic [63:0] mem_aw_addr;logic [7:0] mem_aw_len;logic [2:0] mem_aw_size;
    logic [1:0] mem_aw_burst;logic mem_w_valid,mem_w_ready;logic [127:0] mem_w_data;logic [15:0] mem_w_strb;
    logic mem_w_last,mem_b_valid,mem_b_ready;logic [1:0] mem_b_resp;
    logic mem_ar_valid,mem_ar_ready;logic [63:0] mem_ar_addr;logic [7:0] mem_ar_len;logic [2:0] mem_ar_size;
    logic [1:0] mem_ar_burst;logic mem_r_valid,mem_r_ready;logic [127:0] mem_r_data;logic mem_r_last;logic [1:0] mem_r_resp;
    logic [1:0] reservation_kill_valid=0;logic [1:0][63:0] reservation_kill_addr=0;
    logic busy,protocol_error;logic [2:0] outstanding_count;
    logic ar_admission_enable=1,aw_admission_enable=1,ar_tokenized=0,aw_tokenized=0;
    logic ar_token_tag=0,aw_token_tag=0;logic [1:0] token_release_count,token_release_valid;
    logic [1:0][0:0] token_release_tag;

    ace_manager_request_bank #(.ID_WIDTH(ID_WIDTH),.CONTEXTS(4)) dut(.*);

    // ---- background responders -------------------------------------------
    logic sreq_gate=1,snoop_hold=0,ar_gate=1,aw_gate=1;
    assign snoop_req_ready=sreq_gate;
    assign mem_ar_ready=ar_gate;
    assign mem_aw_ready=aw_gate;
    assign mem_w_ready=1;
    int snoop_pending=0;
    always @(posedge clk) if(rst_n && snoop_req_valid && snoop_req_ready) snoop_pending++;
    initial forever begin
        @(negedge clk);
        if(snoop_pending>0 && !snoop_hold) begin
            snoop_rsp_valid=1;snoop_rsp_resp=0;snoop_rsp_data='0;
            do @(posedge clk);while(!snoop_rsp_ready);
            snoop_pending--;@(negedge clk);snoop_rsp_valid=0;
        end
    end
    // ID-less memory: one AR and one AW outstanding (the bank serializes them).
    int ar_beats_left=0;
    always @(posedge clk) if(rst_n && mem_ar_valid && mem_ar_ready) ar_beats_left=int'(mem_ar_len)+1;
    initial forever begin
        @(negedge clk);
        if(ar_beats_left>0) begin
            mem_r_valid=1;mem_r_last=ar_beats_left==1;mem_r_resp=0;
            do @(posedge clk);while(!mem_r_ready);
            ar_beats_left--;@(negedge clk);mem_r_valid=0;mem_r_last=0;
        end
    end
    int b_due=0;
    always @(posedge clk) if(rst_n && mem_w_valid && mem_w_ready && mem_w_last) b_due++;
    initial forever begin
        @(negedge clk);
        if(b_due>0) begin
            mem_b_valid=1;mem_b_resp=0;do @(posedge clk);while(!mem_b_ready);
            b_due--;@(negedge clk);mem_b_valid=0;
        end
    end
    // Manager-side R/B sinks with RACK/WACK one cycle after the last handshake.
    logic [3:0] last_rresp[16];int r_done[16];int b_done[16];
    assign r_ready=1;assign b_ready=1;
    always @(posedge clk) if(rst_n) begin
        r_ack<=r_valid&&r_ready&&r_last;
        w_ack<=b_valid&&b_ready;
        if(r_valid&&r_ready&&r_last) begin last_rresp[r_id]=r_resp;r_done[r_id]++;end
        if(b_valid&&b_ready) b_done[b_id]++;
    end

    // ---- stimulus helpers --------------------------------------------------
    task automatic tick(input int n=1);repeat(n) @(posedge clk);#1;endtask
    task automatic drive_ar(input logic [3:0] id,input logic [63:0] addr,input logic [3:0] snoop,
        input logic [1:0] domain,input logic lock,input logic [7:0] len=3);
        @(negedge clk);ar_valid=1;ar_id=id;ar_addr=addr;ar_len=len;ar_size=4;ar_burst=1;
        ar_snoop=snoop;ar_domain=domain;ar_bar=0;ar_cache=4'b0010;ar_lock=lock;
    endtask
    task automatic send_ar(input logic [3:0] id,input logic [63:0] addr,input logic [3:0] snoop,
        input logic [1:0] domain,input logic lock,input logic [7:0] len=3);
        drive_ar(id,addr,snoop,domain,lock,len);
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;ar_lock=0;
    endtask
    task automatic read_done(input logic [3:0] id,output logic [3:0] resp);
        read_done_since(id,r_done[id],resp);
    endtask
    task automatic read_done_since(input logic [3:0] id,input int count0,output logic [3:0] resp);
        int n;n=0;
        while(r_done[id]==count0) begin
            @(posedge clk);n++;
            if(n>400) $fatal(1,"REVIEW10_MANAGER_TIMEOUT id=%0h",id);
        end
        #1;resp=last_rresp[id];tick(2);
    endtask
    task automatic xread(input logic [3:0] id,input logic [63:0] addr,input logic [3:0] snoop,output logic [3:0] resp);
        send_ar(id,addr,snoop,DOMAIN_INNER,1);read_done(id,resp);
    endtask
    task automatic writeback_nonshareable(input logic [3:0] id,input logic [63:0] addr);
        int count0;count0=b_done[id];
        @(negedge clk);aw_valid=1;aw_id=id;aw_addr=addr;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=WRITE_BACK;aw_domain=DOMAIN_NONSHAREABLE;aw_bar=0;aw_cache=4'b0010;aw_lock=0;aw_unique=0;
        do @(posedge clk);while(!aw_ready);
        @(negedge clk);aw_valid=0;
        for(int beat=0;beat<4;beat++) begin
            @(negedge clk);w_valid=1;w_data={16{8'(beat)}};w_strb='1;w_last=beat==3;
            do @(posedge clk);while(!w_ready);
        end
        @(negedge clk);w_valid=0;w_last=0;
        wait(b_done[id]!=count0);tick(2);
    endtask

    logic [3:0] rs;
    initial begin
        ar_valid=0;aw_valid=0;w_valid=0;w_data=0;w_strb='1;w_last=0;r_ack=0;w_ack=0;
        snoop_rsp_valid=0;snoop_rsp_resp=0;snoop_rsp_data=0;
        mem_b_valid=0;mem_b_resp=0;mem_r_valid=0;mem_r_data=0;mem_r_last=0;mem_r_resp=0;
        ar_id=0;ar_addr=0;ar_len=0;ar_size=0;ar_burst=0;ar_snoop=0;ar_domain=0;ar_bar=0;ar_cache=0;ar_lock=0;
        aw_id=0;aw_addr=0;aw_len=0;aw_size=0;aw_burst=0;aw_snoop=0;aw_domain=0;aw_bar=0;aw_cache=0;aw_lock=0;aw_unique=0;
        foreach(r_done[i]) begin r_done[i]=0;b_done[i]=0;last_rresp[i]=0;end
        tick(4);rst_n=1;tick(2);
        // 10.1 sequential: a successful store in slot 2 resets slot 1's reservation.
        xread(1,64'h4000,READ_SHARED,rs);assert(rs[1:0]==2'b01) else $fatal(1,"EXCL_CROSS_SLOT:load1 %b",rs);
        xread(2,64'h4000,READ_SHARED,rs);assert(rs[1:0]==2'b01) else $fatal(1,"EXCL_CROSS_SLOT:load2 %b",rs);
        xread(2,64'h4000,CLEAN_UNIQUE,rs);assert(rs[1:0]==2'b01) else $fatal(1,"EXCL_CROSS_SLOT:store2 %b",rs);
        xread(1,64'h4000,CLEAN_UNIQUE,rs);assert(rs[1:0]==2'b00) else $fatal(1,"EXCL_CROSS_SLOT:store1 must fail %b",rs);
        // 10.1 overlap: a second exclusive store is not admitted while the first
        // is in flight; once admitted it observes the reset and fails.
        xread(1,64'h5000,READ_SHARED,rs);xread(2,64'h5000,READ_SHARED,rs);
        @(negedge clk) snoop_hold=1;
        begin int c1,c2;c1=r_done[1];c2=r_done[2];
        send_ar(2,64'h5000,CLEAN_UNIQUE,DOMAIN_INNER,1);
        drive_ar(1,64'h5000,CLEAN_UNIQUE,DOMAIN_INNER,1);
        repeat(12) begin @(posedge clk);assert(!ar_ready) else $fatal(1,"EXCL_STORE_OVERLAP: second store admitted");end
        @(negedge clk) snoop_hold=0;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;ar_lock=0;
        read_done_since(2,c2,rs);assert(rs[1:0]==2'b01) else $fatal(1,"EXCL_STORE_OVERLAP:first %b",rs);
        read_done_since(1,c1,rs);assert(rs[1:0]==2'b00) else $fatal(1,"EXCL_STORE_OVERLAP:second must fail %b",rs);
        end
        // 10.1 commit re-check: a kill between admission and snoop completion
        // turns a passed store into a failed one.
        xread(3,64'h6000,READ_SHARED,rs);
        @(negedge clk) snoop_hold=1;
        send_ar(3,64'h6000,CLEAN_UNIQUE,DOMAIN_INNER,1);
        tick(3);
        @(negedge clk);reservation_kill_valid[0]=1;reservation_kill_addr[0]=64'h6000;
        @(negedge clk);reservation_kill_valid='0;
        @(negedge clk) snoop_hold=0;
        read_done(3,rs);assert(rs[1:0]==2'b00) else $fatal(1,"EXCL_COMMIT_RECHECK: killed store passed %b",rs);
        // 10.1 policy: a manager non-shareable write from another slot clears the
        // matching reservation, exactly as it does inside one context.
        xread(1,64'h7000,READ_SHARED,rs);
        writeback_nonshareable(2,64'h7000);
        xread(1,64'h7000,CLEAN_UNIQUE,rs);assert(rs[1:0]==2'b00) else $fatal(1,"EXCL_WRITE_POLICY: store after write passed %b",rs);
        // 10.2 memory AR: a lower-index read arriving while another waits for
        // READY must not change the presented payload (bank assertion).
        @(negedge clk) ar_gate=0;
        begin int c0,c1;c0=r_done[0];c1=r_done[1];
        send_ar(1,64'h8000,READ_ONCE,DOMAIN_NONSHAREABLE,0);
        tick(3);
        send_ar(0,64'h9000,READ_ONCE,DOMAIN_NONSHAREABLE,0);
        tick(4);
        assert(mem_ar_valid && mem_ar_addr==64'h8000) else $fatal(1,"MEM_AR_PAYLOAD_STABILITY: presented %h",mem_ar_addr);
        @(negedge clk) ar_gate=1;
        read_done_since(1,c1,rs);read_done_since(0,c0,rs);
        end
        // 10.2 snoop request: same check on the shared snoop request port.
        @(negedge clk) sreq_gate=0;
        begin int c0,c1;c0=r_done[0];c1=r_done[1];
        send_ar(1,64'ha000,READ_SHARED,DOMAIN_INNER,0);
        tick(3);
        send_ar(0,64'hb000,READ_SHARED,DOMAIN_INNER,0);
        tick(4);
        assert(snoop_req_valid && snoop_req_addr==64'ha000) else $fatal(1,"SNOOP_REQ_PAYLOAD_STABILITY: presented %h",snoop_req_addr);
        @(negedge clk) sreq_gate=1;
        read_done_since(1,c1,rs);read_done_since(0,c0,rs);
        end
        // 10.5 DVM isolation: whichever slot holds the DVM, no ordinary request
        // is admitted until it completes.
        for(int id=0;id<4;id+=2) begin
            int cd,c1;cd=r_done[id];c1=r_done[1];
            @(negedge clk) sreq_gate=0;
            send_ar(4'(id),64'h1000,DVM_MESSAGE,DOMAIN_INNER,0,0);
            drive_ar(1,64'hc000,READ_ONCE,DOMAIN_NONSHAREABLE,0);
            repeat(10) begin @(posedge clk);assert(!ar_ready) else $fatal(1,"DVM_GLOBAL_ISOLATION: slot %0d",id);end
            @(negedge clk) sreq_gate=1;
            do @(posedge clk);while(!ar_ready);
            @(negedge clk);ar_valid=0;
            read_done_since(4'(id),cd,rs);read_done_since(1,c1,rs);
        end
        tick(5);
        assert(!busy && !protocol_error) else $fatal(1,"REVIEW10_MANAGER_DRAIN");
        $display("PASS ACE manager review10 shared exclusive monitor, stable arbitration, DVM isolation");
        $finish;
    end
    initial begin #200000;$fatal(1,"REVIEW10_MANAGER_GLOBAL_TIMEOUT");end
endmodule
