// Shared logical-request capacity for CPU, M1 read/write, and explicit work.
// Allocation lanes are round-robin arbitrated. A release names the exact token
// and its owner; the pool detects wrong-owner, stale, and duplicate returns.
module cci_admission_pool #(
    parameter int TOKENS=16,
    parameter int OWNERS=4,
    parameter int ALLOC_LANES=5,
    parameter int FREE_LANES=5,
    parameter int TW=(TOKENS<2?1:$clog2(TOKENS)),
    parameter int OW=(OWNERS<2?1:$clog2(OWNERS)),
    parameter int LW=(ALLOC_LANES<2?1:$clog2(ALLOC_LANES))
)(
    input  logic clk,rst_n,
    input  logic [ALLOC_LANES-1:0] alloc_valid,
    input  logic [ALLOC_LANES-1:0][OW-1:0] alloc_owner,
    output logic [ALLOC_LANES-1:0] alloc_grant,
    output logic [ALLOC_LANES-1:0][TW-1:0] alloc_tag,
    input  logic [ALLOC_LANES-1:0] alloc_accept,
    input  logic [FREE_LANES-1:0] free_valid,
    input  logic [FREE_LANES-1:0][OW-1:0] free_owner,
    input  logic [FREE_LANES-1:0][TW-1:0] free_tag,
    output logic [$clog2(TOKENS+1)-1:0] active_count,
    output logic [OWNERS-1:0][$clog2(TOKENS+1)-1:0] owner_count,
    output logic fault
);
    logic [TOKENS-1:0] live;
    logic [TOKENS-1:0][OW-1:0] owner;
    logic [LW-1:0] rr;
    logic [FREE_LANES-1:0] free_found;

    always_comb begin
        logic [TOKENS-1:0] available;
        logic [ALLOC_LANES-1:0] considered;
        available=~live;considered='0;alloc_grant='0;alloc_tag='0;
        // Visit every lane once from rr. Multiple free tokens can therefore
        // admit multiple independent request kinds in the same cycle.
        for(int step=0;step<ALLOC_LANES;step++) begin
            automatic int lane=(int'(rr)+step)%ALLOC_LANES;
            automatic bit found=0;
            automatic logic [TW-1:0] pick='0;
            considered[lane]=1;
            for(int t=0;t<TOKENS;t++) if(!found && available[t]) begin
                found=1;pick=TW'(t);
            end
            if(alloc_valid[lane] && found) begin
                alloc_grant[lane]=1;alloc_tag[lane]=pick;available[pick]=0;
            end
        end
    end

    always_comb begin
        logic [TOKENS-1:0] releasable;
        releasable=live;free_found='0;
        for(int f=0;f<FREE_LANES;f++) begin
            if(free_valid[f] && int'(free_tag[f])<TOKENS && releasable[free_tag[f]] &&
               owner[free_tag[f]]==free_owner[f]) begin
                free_found[f]=1;releasable[free_tag[f]]=0;
            end
        end
    end

    always_comb begin
        active_count='0;owner_count='0;
        for(int t=0;t<TOKENS;t++) if(live[t]) begin
            active_count=active_count+1'b1;
            owner_count[owner[t]]=owner_count[owner[t]]+1'b1;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin live<='0;owner<='0;rr<='0;fault<=0;end
        else begin
            // Released tokens are deliberately not visible to allocation until
            // the following cycle, preventing same-cycle ABA tag reuse.
            for(int f=0;f<FREE_LANES;f++) if(free_valid[f]) begin
                if(!free_found[f]) fault<=1;
                else live[free_tag[f]]<=0;
            end
            for(int a=0;a<ALLOC_LANES;a++) if(alloc_accept[a]&&alloc_grant[a]) begin
                live[alloc_tag[a]]<=1;owner[alloc_tag[a]]<=alloc_owner[a];
                rr<=a==ALLOC_LANES-1?'0:LW'(a+1);
            end
        end
    end

    initial begin
        assert(TOKENS>0 && OWNERS>0 && ALLOC_LANES>0 && FREE_LANES>0)
            else $fatal(1,"ADMISSION_GEOMETRY");
    end
    assert property(@(posedge clk) disable iff(!rst_n) int'(active_count)<=TOKENS)
        else $fatal(1,"ADMISSION_OVERFLOW");
    always @(posedge clk) if(rst_n) begin
        for(int a=0;a<ALLOC_LANES;a++) if(alloc_accept[a]&&alloc_grant[a])
            assert(!live[alloc_tag[a]]) else $fatal(1,"ADMISSION_DUP_ALLOC");
        assert((alloc_accept & ~alloc_grant)=='0) else $fatal(1,"ADMISSION_ACCEPT_WITHOUT_GRANT");
        for(int f=0;f<FREE_LANES;f++) if(free_valid[f])
            assert(free_found[f]) else $fatal(1,"ADMISSION_BAD_RETURN");
    end
endmodule
