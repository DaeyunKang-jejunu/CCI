// RCCI_PLAN 14.8-3 (보완 7): hazard comparator cost in isolation.
// Both wrappers see the same probe ports with the same register boundaries,
// valid gating and per-port OR reduction, so only the CAM structure differs.
// Ports: 2 point probes (M0 AR/AW: one line) and 3 span probes (ACE AR/AW,
// M1: [first,last]), matching the probes of the read/write hazard logic.
//  line_cam_cost:     ENTRIES line owners (B1 per-line CAM)
//  interval_cam_cost: ENTRIES [lo,hi) owners: page match + 7-bit line offsets (rCCI)
module line_cam_cost #(parameter int ENTRIES=16)(
    input logic clk,
    input logic [ENTRIES-1:0] in_valid,input logic [ENTRIES-1:0][58:0] in_line,
    input logic [1:0] in_pv,input logic [1:0][58:0] in_pline,
    input logic [2:0] in_sv,input logic [2:0][58:0] in_sfirst,in_slast,
    output logic [4:0] hazard
);
    logic [ENTRIES-1:0] v;logic [ENTRIES-1:0][58:0] line;
    logic [1:0] pv;logic [1:0][58:0] pline;logic [2:0] sv;logic [2:0][58:0] sfirst,slast;
    logic [4:0] h;
    always_ff @(posedge clk) begin
        v<=in_valid;line<=in_line;pv<=in_pv;pline<=in_pline;sv<=in_sv;sfirst<=in_sfirst;slast<=in_slast;
        hazard<=h;
    end
    always_comb begin
        h='0;
        for(int e=0;e<ENTRIES;e++)if(v[e])begin
            for(int p=0;p<2;p++)if(pv[p]&&line[e]==pline[p])h[p]=1;
            for(int p=0;p<3;p++)if(sv[p]&&line[e]>=sfirst[p]&&line[e]<=slast[p])h[2+p]=1;
        end
    end
endmodule

module interval_cam_cost #(parameter int ENTRIES=4)(
    input logic clk,
    input logic [ENTRIES-1:0] in_valid,input logic [ENTRIES-1:0][51:0] in_page,
    input logic [ENTRIES-1:0][6:0] in_lo,in_hi,
    input logic [1:0] in_pv,input logic [1:0][58:0] in_pline,
    input logic [2:0] in_sv,input logic [2:0][58:0] in_sfirst,in_slast,
    output logic [4:0] hazard
);
    logic [ENTRIES-1:0] v;logic [ENTRIES-1:0][51:0] page;logic [ENTRIES-1:0][6:0] lo,hi;
    logic [1:0] pv;logic [1:0][58:0] pline;logic [2:0] sv;logic [2:0][58:0] sfirst,slast;
    logic [4:0] h;
    always_ff @(posedge clk) begin
        v<=in_valid;page<=in_page;lo<=in_lo;hi<=in_hi;pv<=in_pv;pline<=in_pline;sv<=in_sv;sfirst<=in_sfirst;slast<=in_slast;
        hazard<=h;
    end
    always_comb begin
        h='0;
        for(int e=0;e<ENTRIES;e++)if(v[e]&&lo[e]<hi[e])begin
            for(int p=0;p<2;p++)if(pv[p]&&pline[p][57:6]==page[e]&&{1'b0,pline[p][5:0]}>=lo[e]&&{1'b0,pline[p][5:0]}<hi[e])h[p]=1;
            for(int p=0;p<3;p++)if(sv[p]&&sfirst[p][57:6]==page[e]&&{1'b0,sfirst[p][5:0]}<hi[e]&&{1'b0,slast[p][5:0]}>=lo[e])h[2+p]=1;
        end
    end
endmodule
