`timescale 1ns/1ps
// Independent AXI/AC driver checks externally observable hit/miss behavior.
module tb_cache_collision #(parameter int LINES=8);
    logic clk=0,rst_n=0;
    always #5 clk=~clk;
    logic load_valid=0,load_ready,result_valid,result_ready=0,allow_r=1;
    logic [63:0] load_addr=0,ar_addr,ac_addr=0;
    logic [511:0] result_data;
    logic ar_valid,ar_ready=0,r_valid=0,r_ready,r_last=0;
    logic [3:0] ar_id,r_id=9;
    logic [7:0] ar_len;
    logic [127:0] r_data=0;
    logic [1:0] r_resp=0,cr_resp;
    logic ac_valid=0,ac_ready,cr_valid,cr_ready=1,snoop_idle;
    logic [3:0] ac_snoop=4'b1101;
    int dropped_fills,cache_hits;
    m0_clean_cache_model #(.LINES(LINES)) dut(.*);
    localparam logic [63:0] A=64'h1000;
    localparam logic [63:0] B=A+64'(LINES*64);
    task automatic tick; @(posedge clk); @(negedge clk); endtask
    task automatic start_load(input logic [63:0] addr);
        assert(load_ready) else $fatal(1,"load not ready");
        load_addr=addr;load_valid=1;tick();load_valid=0;
    endtask
    task automatic snoop(input logic [63:0] addr);
        assert(ac_ready) else $fatal(1,"AC not ready");
        ac_addr=addr;ac_valid=1;tick();ac_valid=0;
    endtask
    task automatic accept_ar;
        assert(ar_valid && ar_id==9 && ar_len==3) else $fatal(1,"expected refill request");
        ar_ready=1;tick();ar_ready=0;
    endtask
    task automatic fill(input bit collide,input logic [63:0] snoop_addr);
        for(int i=0;i<4;i++) begin
            r_valid=1;r_last=(i==3);r_data=128'(i+1);
            if(collide && i==3) begin
                assert(ac_ready) else $fatal(1,"final beat AC not ready");
                ac_valid=1;ac_addr=snoop_addr;
            end
            assert(r_ready) else $fatal(1,"refill not ready");
            tick();ac_valid=0;
        end
        r_valid=0;r_last=0;
        assert(result_valid && result_data=={128'd4,128'd3,128'd2,128'd1}) else $fatal(1,"refill data mismatch");
        result_ready=1;tick();result_ready=0;
    endtask
    task automatic expect_hit(input logic [63:0] addr);
        int old_hits; old_hits=cache_hits;
        start_load(addr);
        assert(result_valid && !ar_valid && cache_hits==old_hits+1) else $fatal(1,"expected cache hit");
        result_ready=1;tick();result_ready=0;
    endtask
    initial begin
        repeat(3) tick();rst_n=1;tick();
        // Same-edge final beat + matching AC must not install a stale fill.
        start_load(A);accept_ar();fill(1,A);
        assert(dropped_fills==1) else $fatal(1,"matching final AC did not poison fill");
        start_load(A);accept_ar();fill(0,0);expect_hit(A);
        $display("PASS cache final-beat matching AC prevents installation");
        // Resident hit + matching AC becomes a miss, poisoned from load acceptance.
        ac_valid=1;ac_addr=A;start_load(A);ac_valid=0;
        assert(!result_valid && ar_valid) else $fatal(1,"same-edge hit AC leaked resident data");
        accept_ar();fill(0,0);
        assert(dropped_fills==2) else $fatal(1,"same-edge load AC not poisoned");
        $display("PASS cache same-edge load AC invalidates hit");
        // Matching AC while AR is stalled must poison the later response.
        start_load(A);snoop(A);
        assert(ar_valid && ar_addr==A) else $fatal(1,"stalled AR changed");
        accept_ar();fill(0,0);
        assert(dropped_fills==3) else $fatal(1,"stalled AR AC not poisoned");
        $display("PASS cache stalled AR AC poisons refill");
        // Same index, different tag AC must neither drop nor invalidate this fill.
        start_load(A);accept_ar();fill(1,B);expect_hit(A);
        assert(dropped_fills==3) else $fatal(1,"unrelated AC over-poisoned fill");
        snoop(B);expect_hit(A);
        // Evict A with B, then refill A while AC invalidates old resident B.
        start_load(B);accept_ar();fill(0,0);
        start_load(A);accept_ar();fill(1,B);expect_hit(A);
        $display("PASS cache different-tag same-index AC preserves line");
        $display("COVERAGE cache_collision final_match=1 load_match=1 stalled_ar_match=1 final_other_tag=1 resident_other_tag=1 replace_old_tag=1");
        $display("PASS cache collision LINES=%0d",LINES);$finish;
    end
    initial begin #10000;$fatal(1,"cache collision timeout");end
endmodule
