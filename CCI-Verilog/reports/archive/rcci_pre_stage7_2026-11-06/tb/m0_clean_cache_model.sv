// Test-only direct-mapped clean cache, one refill outstanding. AC invalidates
// resident lines and poisons matching in-flight fills (including a stalled AR).
// A pre-snoop CPU read may finish, but its late data must never be installed.
module m0_clean_cache_model #(
    parameter int LINES=8, IW=(LINES<2 ? 1 : $clog2(LINES))
)(
    input logic clk, rst_n,
    input logic load_valid,
    output logic load_ready,
    input logic [63:0] load_addr,
    output logic result_valid,
    input logic result_ready,
    output logic [511:0] result_data,
    input logic allow_r,
    output logic ar_valid,
    input logic ar_ready,
    output logic [63:0] ar_addr,
    output logic [3:0] ar_id,
    output logic [7:0] ar_len,
    input logic r_valid,
    output logic r_ready,
    input logic [127:0] r_data,
    input logic r_last,
    input logic [3:0] r_id,
    input logic [1:0] r_resp,
    input logic ac_valid,
    output logic ac_ready,
    input logic [63:0] ac_addr,
    input logic [3:0] ac_snoop,
    output logic cr_valid,
    input logic cr_ready,
    output logic [1:0] cr_resp,
    output logic snoop_idle,
    output int dropped_fills, cache_hits
);
    initial assert(LINES>=1 && (LINES & (LINES-1))==0) else $fatal(1,"CACHE_LINES_POWER_OF_TWO");
    logic [LINES-1:0] valid;
    logic [57:0] tag[LINES];
    logic [511:0] data[LINES];
    logic busy, poison, reading;
    logic [63:0] pending_addr;
    logic [1:0] beat;
    logic [511:0] fill;
    wire ac_fire=ac_valid && ac_ready;
    wire [IW-1:0] ac_index=(LINES==1) ? '0 : ac_addr[6+:IW];
    wire [IW-1:0] load_index=(LINES==1) ? '0 : load_addr[6+:IW];
    wire [IW-1:0] pending_index=(LINES==1) ? '0 : pending_addr[6+:IW];
    assign load_ready=!busy && !result_valid;
    assign ar_addr=pending_addr;
    assign ar_id=4'd9;
    assign ar_len=3;
    assign r_ready=reading && allow_r;
    m0_snoop_endpoint #(.DEPTH(16),.LATENCY(4)) ordered_response (
        .clk,.rst_n,.ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.idle(snoop_idle)
    );
    always @(posedge clk) begin
        if(!rst_n) begin
            valid<=0; busy<=0; poison<=0; reading<=0; ar_valid<=0;
            result_valid<=0; result_data<=0; pending_addr<=0; beat<=0; fill<=0;
            dropped_fills<=0; cache_hits<=0;
            for(int i=0;i<LINES;i++) begin tag[i]<=0; data[i]<=0; end
        end else begin
            if(result_valid && result_ready) result_valid<=0;
            if(load_valid && load_ready) begin
                assert(load_addr[5:0]==0) else $fatal(1,"cache load alignment");
                if(valid[load_index] && tag[load_index]==load_addr[63:6] &&
                   !(ac_fire && ac_addr[63:6]==load_addr[63:6])) begin
                    result_data<=data[load_index]; result_valid<=1; cache_hits<=cache_hits+1;
                end else begin
                    busy<=1; pending_addr<=load_addr; ar_valid<=1; beat<=0; fill<=0;
                    poison<=ac_fire && ac_addr[63:6]==load_addr[63:6];
                end
            end
            if(ar_valid && ar_ready) begin ar_valid<=0; reading<=1; end
            // Invalidate the old resident first. An unrelated, successful fill
            // may replace it at the same index; a matching AC suppresses fill below.
            if(ac_fire) begin
                if(valid[ac_index] && tag[ac_index]==ac_addr[63:6]) valid[ac_index]<=0;
                if(busy && pending_addr[63:6]==ac_addr[63:6]) poison<=1;
            end
            if(r_valid && r_ready) begin
                assert(r_resp==0 && r_id==9 && r_last==(beat==3)) else $fatal(1,"cache refill protocol");
                fill[128*int'(beat)+:128]<=r_data;
                if(r_last) begin
                    reading<=0; busy<=0; result_valid<=1; result_data<={r_data,fill[383:0]};
                    if(poison || (ac_fire && ac_addr[63:6]==pending_addr[63:6])) begin
                        dropped_fills<=dropped_fills+1;
                    end else begin
                        valid[pending_index]<=1; tag[pending_index]<=pending_addr[63:6];
                        data[pending_index]<={r_data,fill[383:0]};
                    end
                end else beat<=beat+1'b1;
            end
        end
    end
endmodule
