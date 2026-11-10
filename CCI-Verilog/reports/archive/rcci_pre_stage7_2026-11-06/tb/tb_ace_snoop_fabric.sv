`timescale 1ns/1ps
module tb_ace_snoop_fabric;
    import ace_snoop_pkg::*;
    localparam int N=2;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic [N-1:0] active_mask='1;logic filter_enable=0;
    logic sf_update_valid=0,sf_update_present=0;logic sf_update_target=0;logic [63:0] sf_update_addr=0;
    logic ac_valid=0,ac_ready;logic [63:0] ac_addr=0;logic [3:0] ac_snoop=0;
    logic cr_valid,cr_ready=0;logic [4:0] cr_resp;
    logic cd_valid,cd_ready=0;logic [127:0] cd_data;logic cd_last,idle,protocol_error;
    logic [N-1:0] m_ac_valid,m_ac_ready,m_cr_valid,m_cr_ready,m_cd_valid,m_cd_ready,m_cd_last;
    logic [N-1:0][63:0] m_ac_addr;logic [N-1:0][3:0] m_ac_snoop;
    logic [N-1:0][4:0] m_cr_resp;logic [N-1:0][127:0] m_cd_data;
    logic [N-1:0] local_valid,local_ready,local_rsp_valid,local_rsp_ready,local_error,local_hit;
    logic [N-1:0][1:0] local_op;logic [N-1:0][63:0] local_addr;
    logic [N-1:0][511:0] local_wdata,local_rdata;cache_state_t local_state[N],local_rstate[N];
    logic [N-1:0] endpoint_idle;int ac_count[N];

    ace_snoop_fabric #(.TARGETS(N),.FILTER_ENTRIES(4)) dut(.*);
    for(genvar g=0;g<N;g++) begin: C
        ace_cache_snoop_endpoint #(.LINES(8)) cache(
            .clk,.rst_n,.local_valid(local_valid[g]),.local_ready(local_ready[g]),
            .local_op(local_op[g]),.local_addr(local_addr[g]),.local_wdata(local_wdata[g]),.local_state(local_state[g]),
            .local_rsp_valid(local_rsp_valid[g]),.local_rsp_ready(local_rsp_ready[g]),
            .local_error(local_error[g]),.local_hit(local_hit[g]),.local_rstate(local_rstate[g]),.local_rdata(local_rdata[g]),
            .ac_valid(m_ac_valid[g]),.ac_ready(m_ac_ready[g]),.ac_addr(m_ac_addr[g]),.ac_snoop(m_ac_snoop[g]),
            .cr_valid(m_cr_valid[g]),.cr_ready(m_cr_ready[g]),.cr_resp(m_cr_resp[g]),
            .cd_valid(m_cd_valid[g]),.cd_ready(m_cd_ready[g]),.cd_data(m_cd_data[g]),.cd_last(m_cd_last[g]),.idle(endpoint_idle[g])
        );
        always_ff @(posedge clk or negedge rst_n)
            if(!rst_n) ac_count[g]<=0;else if(m_ac_valid[g]&&m_ac_ready[g]) ac_count[g]<=ac_count[g]+1;
    end
    function automatic logic [511:0] pattern(input byte unsigned seed);
        for(int j=0;j<64;j++) pattern[j*8+:8]=8'(seed+j*3);
    endfunction
    task automatic install(input int target,input logic [63:0] addr,input logic [511:0] value,input cache_state_t state_i);
        @(negedge clk);local_valid[target]=1;local_op[target]=1;local_addr[target]=addr;
        local_wdata[target]=value;local_state[target]=state_i;
        do @(posedge clk);while(!local_ready[target]);
        @(negedge clk);local_valid[target]=0;
        do @(posedge clk);while(!local_rsp_valid[target]);
        assert(!local_error[target]) else $fatal(1,"FABRIC_INSTALL");
        @(negedge clk);local_rsp_ready[target]=1;@(negedge clk);local_rsp_ready[target]=0;
    endtask
    task automatic sf_update(input int target,input logic [63:0] addr,input bit present);
        @(negedge clk);sf_update_valid=1;sf_update_target=target;sf_update_addr=addr;sf_update_present=present;
        @(negedge clk);sf_update_valid=0;
    endtask
    task automatic request(input logic [63:0] addr,input logic [3:0] op,
        input logic [4:0] expected_resp,input bit expect_data,input logic [511:0] expected_data);
        logic [511:0] got;int beats;
        @(negedge clk);ac_valid=1;ac_addr=addr;ac_snoop=op;
        do @(posedge clk);while(!ac_ready);@(negedge clk);ac_valid=0;
        cr_ready=1;do @(posedge clk);while(!cr_valid);
        assert(cr_resp==expected_resp) else $fatal(1,"FABRIC_CR op=%0h got=%0h exp=%0h",op,cr_resp,expected_resp);
        @(negedge clk);cr_ready=0;
        if(expect_data) begin
            cd_ready=1;beats=0;got=0;
            while(beats<4) begin
                do @(posedge clk);while(!cd_valid);
                got[128*beats+:128]=cd_data;
                assert(cd_last==(beats==3)) else $fatal(1,"FABRIC_CDLAST");
                beats++;@(negedge clk);
            end
            cd_ready=0;assert(got==expected_data) else $fatal(1,"FABRIC_DATA_MISMATCH");
        end
        wait(idle);@(negedge clk);
    endtask
    // SF_UPDATE and AC presented in the same cycle: the update wins, no AC
    // handshake happens in that cycle, and the held AC is then looked up in
    // the updated directory.
    task automatic overlap_request(input int target,input logic [63:0] update_addr,input bit present,
        input logic [63:0] addr,input logic [3:0] op,input logic [4:0] expected_resp,
        input bit expect_data,input logic [511:0] expected_data);
        logic [511:0] got;int beats;
        @(negedge clk);
        sf_update_valid=1;sf_update_target=target;sf_update_addr=update_addr;sf_update_present=present;
        ac_valid=1;ac_addr=addr;ac_snoop=op;
        @(posedge clk);
        assert(!ac_ready) else $fatal(1,"SF_UPDATE_AC_ORDER: AC accepted in update cycle");
        @(negedge clk);sf_update_valid=0;
        do @(posedge clk);while(!ac_ready);@(negedge clk);ac_valid=0;
        cr_ready=1;do @(posedge clk);while(!cr_valid);
        assert(cr_resp==expected_resp) else $fatal(1,"SF_UPDATE_AC_ORDER: CR got=%0h exp=%0h",cr_resp,expected_resp);
        @(negedge clk);cr_ready=0;
        if(expect_data) begin
            cd_ready=1;beats=0;got=0;
            while(beats<4) begin
                do @(posedge clk);while(!cd_valid);
                got[128*beats+:128]=cd_data;beats++;@(negedge clk);
            end
            cd_ready=0;assert(got==expected_data) else $fatal(1,"SF_UPDATE_AC_ORDER: data");
        end
        wait(idle);@(negedge clk);
        assert(!protocol_error) else $fatal(1,"SF_UPDATE_AC_ORDER: protocol_error on legal overlap");
    endtask
    initial begin
        logic [511:0] a,b,c;int c0,c1;
        local_valid='0;local_rsp_ready='0;local_op='0;local_addr='0;local_wdata='0;
        for(int i=0;i<N;i++) local_state[i]=INVALID;
        repeat(4) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);
        a=pattern(8'h10);b=pattern(8'h40);c=pattern(8'h70);
        // Two clean copies can both respond; one identical line is forwarded.
        install(0,64'h000,a,SHARED_CLEAN);install(1,64'h000,a,SHARED_CLEAN);
        request(64'h000,READ_SHARED,5'b01001,1,a);
        assert(ac_count[0]==1 && ac_count[1]==1) else $fatal(1,"FABRIC_BROADCAST_MISSING");
        // A single dirty owner is selected and its PassDirty data is preserved.
        install(1,64'h040,b,UNIQUE_DIRTY);
        request(64'h040,CLEAN_INVALID,5'b10101,1,b);
        // Authoritative filter targets only the recorded sharer.
        install(1,64'h080,c,UNIQUE_CLEAN);sf_update(1,64'h080,1);filter_enable=1;c0=ac_count[0];c1=ac_count[1];
        request(64'h080,MAKE_INVALID,5'b10000,0,0);
        assert(ac_count[0]==c0 && ac_count[1]==c1+1) else $fatal(1,"SNOOP_FILTER_TARGETING");
        c0=ac_count[0];c1=ac_count[1];request(64'h0c0,READ_SHARED,0,0,0);
        assert(ac_count[0]==c0 && ac_count[1]==c1) else $fatal(1,"SNOOP_FILTER_MISS_BROADCAST");
        // A direct-mapped directory collision with another target must become
        // conservative broadcast rather than forgetting the prior sharer.
        install(0,64'h180,a,SHARED_CLEAN);sf_update(0,64'h180,1);c0=ac_count[0];c1=ac_count[1];
        request(64'h180,READ_SHARED,5'b01001,1,a);
        assert(ac_count[0]==c0+1 && ac_count[1]==c1+1) else $fatal(1,"SNOOP_FILTER_COLLISION_FALSE_NEGATIVE");
        // The same target can retain two lines that alias a smaller filter.
        // Replacing the tag would lose the first line, so this collision must
        // also switch the index to conservative broadcast.
        install(0,64'h300,a,SHARED_CLEAN);sf_update(0,64'h300,1);
        install(0,64'h400,c,SHARED_CLEAN);sf_update(0,64'h400,1);c0=ac_count[0];c1=ac_count[1];
        request(64'h300,READ_SHARED,5'b01001,1,a);
        assert(ac_count[0]==c0+1 && ac_count[1]==c1+1)
            else $fatal(1,"SNOOP_FILTER_SAME_TARGET_COLLISION");
        c0=ac_count[0];c1=ac_count[1];
        // DVM always broadcasts to all active participants, independent of the line directory.
        request(64'h1000,DVM_MESSAGE,0,0,0);
        assert(ac_count[0]==c0+1 && ac_count[1]==c1+1) else $fatal(1,"DVM_NOT_BROADCAST");
        // Same-cycle SF_UPDATE + AC. 0x240 maps to an empty directory index.
        // Adding a sharer: only the new sharer is snooped, after the update.
        install(0,64'h240,b,SHARED_CLEAN);c0=ac_count[0];c1=ac_count[1];
        overlap_request(0,64'h240,1,64'h240,READ_SHARED,5'b01001,1,b);
        assert(ac_count[0]==c0+1 && ac_count[1]==c1) else $fatal(1,"SF_UPDATE_AC_ORDER: add targets");
        // Removing the only sharer: the held AC then finds no target.
        c0=ac_count[0];c1=ac_count[1];
        overlap_request(0,64'h240,0,64'h240,READ_SHARED,0,0,0);
        assert(ac_count[0]==c0 && ac_count[1]==c1) else $fatal(1,"SF_UPDATE_AC_ORDER: remove targets");
        // DVM overlapping an update is still broadcast to every target.
        c0=ac_count[0];c1=ac_count[1];
        overlap_request(1,64'h2c0,1,64'h1000,DVM_MESSAGE,0,0,0);
        assert(ac_count[0]==c0+1 && ac_count[1]==c1+1) else $fatal(1,"SF_UPDATE_AC_ORDER: DVM broadcast");
        // Divergent clean copies are a coherence fault, not silently selected data.
        filter_enable=0;install(0,64'h100,a,SHARED_CLEAN);install(1,64'h100,c,SHARED_CLEAN);
        request(64'h100,READ_SHARED,5'b01011,0,0);
        assert(protocol_error) else $fatal(1,"FABRIC_DATA_CONFLICT_NOT_DETECTED");
        $display("PASS ACE multi-target snoop fabric broadcast filter aggregation conflict");$finish;
    end
    initial begin repeat(5000) @(posedge clk);$fatal(1,"FABRIC_TIMEOUT");end
endmodule
