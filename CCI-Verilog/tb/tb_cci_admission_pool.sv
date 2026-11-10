`timescale 1ns/1ps
module tb_cci_admission_pool;
    localparam int TOKENS=4,OWNERS=4,ALLOC_LANES=5,FREE_LANES=5;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic [ALLOC_LANES-1:0] alloc_valid,alloc_grant,alloc_accept;
    logic [ALLOC_LANES-1:0][1:0] alloc_owner;
    logic [ALLOC_LANES-1:0][1:0] alloc_tag;
    logic [FREE_LANES-1:0] free_valid;logic [FREE_LANES-1:0][1:0] free_owner;
    logic [FREE_LANES-1:0][1:0] free_tag;logic [OWNERS-1:0][1:0] owner_tag;
    logic [2:0] active_count;logic [OWNERS-1:0][2:0] owner_count;logic fault;
    cci_admission_pool #(.TOKENS(TOKENS),.OWNERS(OWNERS),.ALLOC_LANES(ALLOC_LANES),
        .FREE_LANES(FREE_LANES)) dut(.*);

    task automatic tick;@(posedge clk);#1;endtask
    initial begin
        alloc_valid=0;alloc_accept=0;alloc_owner=0;free_valid=0;free_owner=0;free_tag=0;owner_tag=0;
        repeat(3)tick();rst_n=1;tick();

        // Three request classes can acquire distinct shared tokens together.
        @(negedge clk);alloc_valid=5'b00111;alloc_owner[0]=0;alloc_owner[1]=1;alloc_owner[2]=2;
        #1;assert(alloc_grant[2:0]==3'b111 && $onehot(4'b0001<<alloc_tag[0]) &&
            alloc_tag[0]!=alloc_tag[1] && alloc_tag[1]!=alloc_tag[2] && alloc_tag[0]!=alloc_tag[2])
            else $fatal(1,"ADMISSION_MULTI_ALLOC");
        owner_tag[0]=alloc_tag[0];owner_tag[1]=alloc_tag[1];owner_tag[2]=alloc_tag[2];
        alloc_accept=alloc_grant;tick();@(negedge clk);alloc_valid=0;alloc_accept=0;
        tick();assert(active_count==3 && owner_count[0]==1 && owner_count[1]==1 && owner_count[2]==1)
            else $fatal(1,"ADMISSION_OWNER_ACCOUNTING");

        @(negedge clk);alloc_valid[4]=1;alloc_owner[4]=3;#1;alloc_accept=alloc_grant;
        owner_tag[3]=alloc_tag[4];tick();@(negedge clk);alloc_valid=0;alloc_accept=0;tick();
        assert(active_count==TOKENS) else $fatal(1,"ADMISSION_FILL");
        @(negedge clk);alloc_valid[0]=1;alloc_owner[0]=0;#1;
        assert(!alloc_grant[0]) else $fatal(1,"ADMISSION_FULL_GRANT");

        // A token returned this cycle is intentionally unavailable until the
        // next cycle, preventing same-cycle ABA tag reuse.
        free_valid[0]=1;free_owner[0]=0;free_tag[0]=owner_tag[0];#1;
        assert(!alloc_grant[0]) else $fatal(1,"ADMISSION_SAME_CYCLE_REUSE");
        tick();
        @(negedge clk);free_valid=0;#1;
        assert(alloc_grant[0]) else $fatal(1,"ADMISSION_NEXT_CYCLE_GRANT");
        owner_tag[0]=alloc_tag[0];alloc_accept=alloc_grant;tick();@(negedge clk);alloc_valid=0;alloc_accept=0;tick();
        assert(active_count==TOKENS && owner_count[0]==1) else $fatal(1,"ADMISSION_REALLOC");

        if($test$plusargs("bad_return")) begin
            // The same exact token cannot be returned twice in one cycle.
            @(negedge clk);free_valid[1:0]=2'b11;free_owner[0]=3;free_owner[1]=3;
            free_tag[0]=owner_tag[3];free_tag[1]=owner_tag[3];
            tick();$fatal(1,"ADMISSION_BAD_RETURN_MISSING");
        end
        if($test$plusargs("bad_owner")) begin
            @(negedge clk);free_valid[0]=1;free_owner[0]=3;free_tag[0]=owner_tag[0];
            tick();$fatal(1,"ADMISSION_BAD_OWNER_MISSING");
        end

        @(negedge clk);free_valid=5'b01111;
        free_owner[0]=0;free_owner[1]=1;free_owner[2]=2;free_owner[3]=3;
        free_tag[0]=owner_tag[0];free_tag[1]=owner_tag[1];free_tag[2]=owner_tag[2];free_tag[3]=owner_tag[3];
        tick();@(negedge clk);free_valid=0;tick();
        assert(active_count==0 && !fault) else $fatal(1,"ADMISSION_FINAL_DRAIN");
        $display("PASS stage3 common admission pool multi-alloc accounting no-ABA exact-return");
        $finish;
    end
    initial begin #5000;$fatal(1,"ADMISSION_TIMEOUT");end
endmodule
