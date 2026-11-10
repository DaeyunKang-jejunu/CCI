module coh_read_ingress (
	clk,
	rst_n,
	in_valid,
	in_ready,
	in_id,
	in_addr,
	in_len,
	in_range,
	in_attr_ok,
	out_valid,
	out_ready,
	out_id,
	out_addr,
	out_len,
	mem_r_valid,
	mem_r_ready,
	mem_r_data,
	mem_r_resp,
	mem_r_last,
	nq_valid,
	nq_ready,
	nq_addr,
	nq_tracker,
	nq_rsp_valid,
	nq_rsp_ready,
	nq_rsp_tracker,
	nq_rsp_resp,
	nq_rsp_data,
	hit_valid,
	hit_ready,
	hit_id,
	hit_data,
	hit_last,
	hit_resp,
	m0_ar_probe_valid,
	m0_ar_probe_addr,
	m0_aw_probe_valid,
	m0_aw_probe_addr,
	ace_ar_probe_valid,
	ace_ar_probe_addr,
	ace_aw_probe_valid,
	ace_aw_probe_addr,
	ace_ar_probe_last,
	ace_aw_probe_last,
	m0_ar_probe_last,
	m0_aw_probe_last,
	issue_line_valid,
	issue_line_addr,
	issue_block,
	wr_issue_probe_valid,
	wr_issue_probe_addr,
	wr_issue_hazard,
	issue_fire,
	alloc_ready,
	m0_ar_hazard,
	m0_aw_hazard,
	ace_ar_hazard,
	ace_aw_hazard,
	m1_aw_probe_valid,
	m1_aw_probe_addr,
	m1_aw_probe_len,
	m1_aw_hazard,
	ingress_count,
	tracker_count,
	tracker_full_stall,
	config_fault,
	service_fault,
	read_error
);
	parameter signed [31:0] ID_WIDTH = 4;
	parameter signed [31:0] DEPTH = 16;
	parameter signed [31:0] TRACKERS = 16;
	parameter [0:0] USE_RANGE = 0;
	parameter [0:0] INTERVAL_CAM = USE_RANGE;
	parameter signed [31:0] RANGE_WINDOW = TRACKERS;
	parameter signed [31:0] IW = (DEPTH < 2 ? 1 : $clog2(DEPTH));
	parameter signed [31:0] TW = (TRACKERS < 2 ? 1 : $clog2(TRACKERS));
	input wire clk;
	input wire rst_n;
	input wire in_valid;
	output wire in_ready;
	input wire [ID_WIDTH - 1:0] in_id;
	input wire [63:0] in_addr;
	input wire [7:0] in_len;
	input wire in_range;
	input wire in_attr_ok;
	output wire out_valid;
	input wire out_ready;
	output wire [ID_WIDTH - 1:0] out_id;
	output wire [63:0] out_addr;
	output wire [7:0] out_len;
	input wire mem_r_valid;
	output wire mem_r_ready;
	input wire [127:0] mem_r_data;
	input wire [1:0] mem_r_resp;
	input wire mem_r_last;
	output wire nq_valid;
	input wire nq_ready;
	output wire [63:0] nq_addr;
	output wire [TW - 1:0] nq_tracker;
	input wire nq_rsp_valid;
	output wire nq_rsp_ready;
	input wire [TW - 1:0] nq_rsp_tracker;
	input wire [4:0] nq_rsp_resp;
	input wire [511:0] nq_rsp_data;
	output wire hit_valid;
	input wire hit_ready;
	output wire [ID_WIDTH - 1:0] hit_id;
	output wire [127:0] hit_data;
	output wire hit_last;
	output wire [1:0] hit_resp;
	input wire m0_ar_probe_valid;
	input wire [63:0] m0_ar_probe_addr;
	input wire m0_aw_probe_valid;
	input wire [63:0] m0_aw_probe_addr;
	input wire ace_ar_probe_valid;
	input wire [63:0] ace_ar_probe_addr;
	input wire ace_aw_probe_valid;
	input wire [63:0] ace_aw_probe_addr;
	input wire [58:0] ace_ar_probe_last;
	input wire [58:0] ace_aw_probe_last;
	input wire [58:0] m0_ar_probe_last;
	input wire [58:0] m0_aw_probe_last;
	output wire issue_line_valid;
	output wire [63:0] issue_line_addr;
	input wire issue_block;
	input wire wr_issue_probe_valid;
	input wire [63:0] wr_issue_probe_addr;
	output wire wr_issue_hazard;
	output wire issue_fire;
	output wire alloc_ready;
	output wire m0_ar_hazard;
	output wire m0_aw_hazard;
	output wire ace_ar_hazard;
	output wire ace_aw_hazard;
	input wire m1_aw_probe_valid;
	input wire [63:0] m1_aw_probe_addr;
	input wire [7:0] m1_aw_probe_len;
	output wire m1_aw_hazard;
	output reg [$clog2(DEPTH + 1) - 1:0] ingress_count;
	output reg [$clog2(TRACKERS + 1) - 1:0] tracker_count;
	output wire tracker_full_stall;
	output reg config_fault;
	output reg service_fault;
	output reg read_error;
	localparam signed [31:0] LW = (USE_RANGE ? 7 : 1);
	reg [(((((2 + ID_WIDTH) + 72) + LW) + LW) + LW) + 117:0] entries [0:DEPTH - 1];
	reg [((6 + IW) + LW) + 521:0] trackers [0:TRACKERS - 1];
	reg [IW - 1:0] tail;
	reg [IW - 1:0] issue_head;
	reg [IW - 1:0] send_head;
	reg [IW - 1:0] retire_head;
	reg [LW - 1:0] send_idx;
	reg free_found;
	reg head_tracker_found;
	reg send_tracker_found;
	wire alloc_wait;
	reg [TW - 1:0] free_tracker;
	reg [TW - 1:0] head_tracker;
	reg [TW - 1:0] send_tracker;
	reg [TW - 1:0] nq_fifo [0:TRACKERS - 1];
	reg [TW - 1:0] nq_head;
	reg [TW - 1:0] nq_tail;
	reg [$clog2(TRACKERS + 1) - 1:0] nq_count;
	reg [1:0] hit_beat;
	reg [TW - 1:0] mq_fifo [0:TRACKERS - 1];
	reg [TW - 1:0] mq_head;
	reg [TW - 1:0] mq_tail;
	reg [$clog2(TRACKERS + 1) - 1:0] mq_count;
	reg [1:0] mem_beat;
	wire [8:0] request_beats = {1'b0, in_len} + 9'd1;
	wire [12:0] request_bytes = {request_beats, 4'b0000};
	wire range_format_bad = ((!USE_RANGE || (in_addr[5:0] != 0)) || (request_beats[1:0] != 0)) || (({1'b0, in_addr[11:0]} + request_bytes) > 13'd4096);
	wire malformed = !in_attr_ok || (in_range ? range_format_bad : (in_addr[5:0] != 0) || (in_len != 8'd3));
	wire push = in_valid && in_ready;
	wire issue = out_valid && out_ready;
	wire mem_fire = mem_r_valid && mem_r_ready;
	wire [TW - 1:0] mq_tracker = mq_fifo[mq_head];
	wire nq_fire = nq_valid && nq_ready;
	wire nq_rsp_fire = nq_rsp_valid && nq_rsp_ready;
	wire hit_fire = hit_valid && hit_ready;
	wire hit_line_last = hit_beat == 2'd3;
	wire head_final_line = (entries[retire_head][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] + 7'd1) == entries[retire_head][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)];
	wire hit_retire = hit_fire && hit_line_last;
	wire retire_any = hit_retire;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	wire can_allocate = ((alloc_wait && free_found) && (sv2v_cast_32_signed(tracker_count) < RANGE_WINDOW)) && !issue_block;
	wire send_hit_advance = ((entries[send_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && send_tracker_found) && trackers[send_tracker][4 + (IW + (LW + 521))]) && trackers[send_tracker][3 + (IW + (LW + 521))];
	wire source_advance = issue || send_hit_advance;
	function automatic signed [IW - 1:0] sv2v_cast_3947A_signed;
		input reg signed [IW - 1:0] inp;
		sv2v_cast_3947A_signed = inp;
	endfunction
	function automatic [IW - 1:0] inc;
		input [IW - 1:0] p;
		inc = (p == sv2v_cast_3947A_signed(DEPTH - 1) ? {IW {1'sb0}} : p + 1'b1);
	endfunction
	function automatic signed [TW - 1:0] sv2v_cast_2F2AF_signed;
		input reg signed [TW - 1:0] inp;
		sv2v_cast_2F2AF_signed = inp;
	endfunction
	function automatic [TW - 1:0] tinc;
		input [TW - 1:0] p;
		tinc = (p == sv2v_cast_2F2AF_signed(TRACKERS - 1) ? {TW {1'sb0}} : p + 1'b1);
	endfunction
	function automatic same_line;
		input reg [63:0] a;
		input reg [63:0] b;
		same_line = a[63:6] == b[63:6];
	endfunction
	function automatic in_span;
		input reg [63:0] line_addr;
		input reg [63:0] first_addr;
		input reg [58:0] last;
		in_span = ({1'b0, line_addr[63:6]} >= {1'b0, first_addr[63:6]}) && ({1'b0, line_addr[63:6]} <= last);
	endfunction
	function automatic [64:0] sv2v_cast_65;
		input reg [64:0] inp;
		sv2v_cast_65 = inp;
	endfunction
	function automatic line_in_burst;
		input reg [63:0] line_addr;
		input reg [63:0] burst_addr;
		input reg [7:0] burst_len;
		reg [64:0] burst_first;
		reg [64:0] burst_last;
		reg [64:0] burst_beats;
		reg [64:0] line_first;
		reg [64:0] line_last;
		begin
			burst_first = {1'b0, burst_addr};
			burst_beats = sv2v_cast_65(burst_len) + 65'd1;
			burst_last = (burst_first + (burst_beats << 4)) - 65'd1;
			line_first = {1'b0, line_addr[63:6], 6'b000000};
			line_last = line_first + 65'd63;
			line_in_burst = (burst_first <= line_last) && (burst_last >= line_first);
		end
	endfunction
	reg ref_m0_ar;
	reg ref_m0_aw;
	reg ref_ace_ar;
	reg ref_ace_aw;
	reg ref_m1_aw;
	reg ref_wr_issue;
	function automatic [63:0] sv2v_cast_64;
		input reg [63:0] inp;
		sv2v_cast_64 = inp;
	endfunction
	always @(*) begin
		free_found = 0;
		free_tracker = 0;
		head_tracker_found = 0;
		head_tracker = 0;
		send_tracker_found = 0;
		send_tracker = 0;
		tracker_count = 0;
		ref_m0_ar = 0;
		ref_m0_aw = 0;
		ref_ace_ar = 0;
		ref_ace_aw = 0;
		ref_m1_aw = 0;
		ref_wr_issue = 0;
		begin : sv2v_autoblock_1
			reg signed [31:0] t;
			for (t = 0; t < TRACKERS; t = t + 1)
				if (trackers[t][6 + (IW + (LW + 521))]) begin
					tracker_count = tracker_count + 1'b1;
					if ((trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)] == retire_head) && (trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] == entries[retire_head][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))])) begin
						head_tracker_found = 1;
						head_tracker = sv2v_cast_2F2AF_signed(t);
					end
					if ((trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)] == send_head) && (trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] == send_idx)) begin
						send_tracker_found = 1;
						send_tracker = sv2v_cast_2F2AF_signed(t);
					end
					if (m0_ar_probe_valid && in_span(entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64), m0_ar_probe_addr, m0_ar_probe_last))
						ref_m0_ar = 1;
					if (m0_aw_probe_valid && in_span(entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64), m0_aw_probe_addr, m0_aw_probe_last))
						ref_m0_aw = 1;
					if (wr_issue_probe_valid && same_line(wr_issue_probe_addr, entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64)))
						ref_wr_issue = 1;
					if (ace_ar_probe_valid && in_span(entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64), ace_ar_probe_addr, ace_ar_probe_last))
						ref_ace_ar = 1;
					if (ace_aw_probe_valid && in_span(entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64), ace_aw_probe_addr, ace_aw_probe_last))
						ref_ace_aw = 1;
					if (m1_aw_probe_valid && line_in_burst(entries[trackers[t][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[t][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64), m1_aw_probe_addr, m1_aw_probe_len))
						ref_m1_aw = 1;
				end
				else if (!free_found) begin
					free_found = 1;
					free_tracker = sv2v_cast_2F2AF_signed(t);
				end
		end
		begin : sv2v_autoblock_2
			reg signed [31:0] e;
			for (e = 0; e < DEPTH; e = e + 1)
				if (entries[e][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && !entries[e][1 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))]) begin
					if (m0_ar_probe_valid && in_span(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], m0_ar_probe_addr, m0_ar_probe_last))
						ref_m0_ar = 1;
					if (m0_aw_probe_valid && in_span(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], m0_aw_probe_addr, m0_aw_probe_last))
						ref_m0_aw = 1;
					if (wr_issue_probe_valid && same_line(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], wr_issue_probe_addr))
						ref_wr_issue = 1;
					if (ace_ar_probe_valid && in_span(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], ace_ar_probe_addr, ace_ar_probe_last))
						ref_ace_ar = 1;
					if (ace_aw_probe_valid && in_span(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], ace_aw_probe_addr, ace_aw_probe_last))
						ref_ace_aw = 1;
					if (m1_aw_probe_valid && line_in_burst(entries[e][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)], m1_aw_probe_addr, m1_aw_probe_len))
						ref_m1_aw = 1;
				end
		end
	end
	reg int_m0_ar;
	reg int_m0_aw;
	reg int_ace_ar;
	reg int_ace_aw;
	reg int_m1_aw;
	reg int_wr_issue;
	wire [58:0] wr_issue_line = {1'b0, wr_issue_probe_addr[63:6]};
	wire [58:0] m0_ar_line = {1'b0, m0_ar_probe_addr[63:6]};
	wire [58:0] m0_aw_line = {1'b0, m0_aw_probe_addr[63:6]};
	wire [58:0] ace_ar_first = {1'b0, ace_ar_probe_addr[63:6]};
	wire [58:0] ace_aw_first = {1'b0, ace_aw_probe_addr[63:6]};
	wire [64:0] m1_aw_last_byte = ({1'b0, m1_aw_probe_addr} + ((sv2v_cast_65(m1_aw_probe_len) + 65'd1) << 4)) - 65'd1;
	wire [58:0] m1_aw_first = {1'b0, m1_aw_probe_addr[63:6]};
	wire [58:0] m1_aw_last = m1_aw_last_byte[64:6];
	always @(*) begin
		int_m0_ar = 0;
		int_m0_aw = 0;
		int_ace_ar = 0;
		int_ace_aw = 0;
		int_m1_aw = 0;
		int_wr_issue = 0;
		begin : sv2v_autoblock_3
			reg signed [31:0] e;
			for (e = 0; e < DEPTH; e = e + 1)
				if (entries[e][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && (entries[e][117-:59] < entries[e][58-:59])) begin
					if ((m0_ar_probe_valid && (m0_ar_line < entries[e][58-:59])) && (m0_ar_probe_last >= entries[e][117-:59]))
						int_m0_ar = 1;
					if ((m0_aw_probe_valid && (m0_aw_line < entries[e][58-:59])) && (m0_aw_probe_last >= entries[e][117-:59]))
						int_m0_aw = 1;
					if ((wr_issue_probe_valid && (wr_issue_line >= entries[e][117-:59])) && (wr_issue_line < entries[e][58-:59]))
						int_wr_issue = 1;
					if ((ace_ar_probe_valid && (ace_ar_first < entries[e][58-:59])) && (ace_ar_probe_last >= entries[e][117-:59]))
						int_ace_ar = 1;
					if ((ace_aw_probe_valid && (ace_aw_first < entries[e][58-:59])) && (ace_aw_probe_last >= entries[e][117-:59]))
						int_ace_aw = 1;
					if ((m1_aw_probe_valid && (m1_aw_first < entries[e][58-:59])) && (m1_aw_last >= entries[e][117-:59]))
						int_m1_aw = 1;
				end
		end
	end
	assign m0_ar_hazard = ref_m0_ar || (INTERVAL_CAM && int_m0_ar);
	assign m0_aw_hazard = ref_m0_aw || (INTERVAL_CAM && int_m0_aw);
	assign ace_ar_hazard = ref_ace_ar || (INTERVAL_CAM && int_ace_ar);
	assign ace_aw_hazard = ref_ace_aw || (INTERVAL_CAM && int_ace_aw);
	assign m1_aw_hazard = ref_m1_aw || (INTERVAL_CAM && int_m1_aw);
	assign wr_issue_hazard = ref_wr_issue || (INTERVAL_CAM && int_wr_issue);
	assign alloc_wait = entries[issue_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && (entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] < entries[issue_head][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)]);
	assign issue_line_valid = alloc_wait;
	assign issue_fire = can_allocate;
	assign alloc_ready = (alloc_wait && free_found) && (sv2v_cast_32_signed(tracker_count) < RANGE_WINDOW);
	assign issue_line_addr = entries[issue_head][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] * 64);
	assign in_ready = (((sv2v_cast_32_signed(ingress_count) < DEPTH) && !config_fault) && !service_fault) && (!in_valid || !malformed);
	assign out_valid = (((entries[send_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && send_tracker_found) && trackers[send_tracker][4 + (IW + (LW + 521))]) && !trackers[send_tracker][3 + (IW + (LW + 521))]) && !trackers[send_tracker][2 + (IW + (LW + 521))];
	assign out_id = entries[send_head][ID_WIDTH + (72 + (LW + (LW + (LW + 117))))-:((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) >= (72 + (LW + (LW + (LW + 118)))) ? ((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) - (72 + (LW + (LW + (LW + 118))))) + 1 : ((72 + (LW + (LW + (LW + 118)))) - (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))) + 1)];
	assign out_addr = entries[send_head][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(send_idx * 64);
	assign out_len = 8'd3;
	assign mem_r_ready = mq_count != 0;
	assign nq_valid = nq_count != 0;
	assign nq_tracker = nq_fifo[nq_head];
	assign nq_addr = entries[trackers[nq_fifo[nq_head]][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)]][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] + sv2v_cast_64(trackers[nq_fifo[nq_head]][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] * 64);
	assign nq_rsp_ready = 1'b1;
	assign hit_valid = ((entries[retire_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && head_tracker_found) && trackers[head_tracker][4 + (IW + (LW + 521))]) && (trackers[head_tracker][3 + (IW + (LW + 521))] || trackers[head_tracker][1 + (IW + (LW + 521))]);
	assign hit_id = entries[retire_head][ID_WIDTH + (72 + (LW + (LW + (LW + 117))))-:((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) >= (72 + (LW + (LW + (LW + 118)))) ? ((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) - (72 + (LW + (LW + (LW + 118))))) + 1 : ((72 + (LW + (LW + (LW + 118)))) - (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))) + 1)];
	assign hit_data = trackers[head_tracker][0 + (128 * sv2v_cast_32_signed(hit_beat))+:128];
	assign hit_last = hit_line_last && head_final_line;
	assign hit_resp = (trackers[head_tracker][3 + (IW + (LW + 521))] ? trackers[head_tracker][521-:2] : trackers[head_tracker][512 + (hit_beat * 2)+:2]);
	assign tracker_full_stall = alloc_wait && (!free_found || (sv2v_cast_32_signed(tracker_count) >= RANGE_WINDOW));
	function automatic [6:0] sv2v_cast_7;
		input reg [6:0] inp;
		sv2v_cast_7 = inp;
	endfunction
	function automatic [58:0] sv2v_cast_59;
		input reg [58:0] inp;
		sv2v_cast_59 = inp;
	endfunction
	always @(posedge clk or negedge rst_n)
		if (!rst_n) begin
			tail <= 0;
			issue_head <= 0;
			send_head <= 0;
			send_idx <= 0;
			retire_head <= 0;
			ingress_count <= 0;
			nq_head <= 0;
			nq_tail <= 0;
			nq_count <= 0;
			hit_beat <= 0;
			mq_head <= 0;
			mq_tail <= 0;
			mq_count <= 0;
			mem_beat <= 0;
			config_fault <= 0;
			service_fault <= 0;
			read_error <= 0;
			begin : sv2v_autoblock_4
				reg signed [31:0] e;
				for (e = 0; e < DEPTH; e = e + 1)
					entries[e] <= 1'sb0;
			end
			begin : sv2v_autoblock_5
				reg signed [31:0] t;
				for (t = 0; t < TRACKERS; t = t + 1)
					trackers[t] <= 1'sb0;
			end
		end
		else begin
			if (in_valid && malformed)
				config_fault <= 1;
			if (push) begin
				entries[tail][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] <= 1;
				entries[tail][1 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] <= in_range;
				entries[tail][ID_WIDTH + (72 + (LW + (LW + (LW + 117))))-:((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) >= (72 + (LW + (LW + (LW + 118)))) ? ((ID_WIDTH + (72 + (LW + (LW + (LW + 117))))) - (72 + (LW + (LW + (LW + 118))))) + 1 : ((72 + (LW + (LW + (LW + 118)))) - (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))) + 1)] <= in_id;
				entries[tail][72 + (LW + (LW + (LW + 117)))-:((72 + (LW + (LW + (LW + 117)))) >= (8 + (LW + (LW + (LW + 118)))) ? ((72 + (LW + (LW + (LW + 117)))) - (8 + (LW + (LW + (LW + 118))))) + 1 : ((8 + (LW + (LW + (LW + 118)))) - (72 + (LW + (LW + (LW + 117))))) + 1)] <= in_addr;
				entries[tail][8 + (LW + (LW + (LW + 117)))-:((8 + (LW + (LW + (LW + 117)))) >= (LW + (LW + (LW + 118))) ? ((8 + (LW + (LW + (LW + 117)))) - (LW + (LW + (LW + 118)))) + 1 : ((LW + (LW + (LW + 118))) - (8 + (LW + (LW + (LW + 117))))) + 1)] <= in_len;
				entries[tail][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)] <= (in_range ? sv2v_cast_7(request_beats >> 2) : 7'd1);
				entries[tail][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] <= 0;
				entries[tail][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] <= 0;
				tail <= inc(tail);
				entries[tail][117-:59] <= {1'b0, in_addr[63:6]};
				entries[tail][58-:59] <= {1'b0, in_addr[63:6]} + sv2v_cast_59(!in_range);
			end
			if (can_allocate) begin
				trackers[free_tracker][6 + (IW + (LW + 521))] <= 1;
				trackers[free_tracker][5 + (IW + (LW + 521))] <= 0;
				trackers[free_tracker][4 + (IW + (LW + 521))] <= 0;
				trackers[free_tracker][3 + (IW + (LW + 521))] <= 0;
				trackers[free_tracker][2 + (IW + (LW + 521))] <= 0;
				trackers[free_tracker][1 + (IW + (LW + 521))] <= 0;
				trackers[free_tracker][519-:8] <= 1'sb0;
				trackers[free_tracker][IW + (LW + 521)-:((IW + (LW + 521)) >= (LW + 522) ? ((IW + (LW + 521)) - (LW + 522)) + 1 : ((LW + 522) - (IW + (LW + 521))) + 1)] <= issue_head;
				trackers[free_tracker][LW + 521-:((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521))] <= (USE_RANGE ? entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] : {((LW + 521) >= 522 ? LW + 0 : 523 - (LW + 521)) * 1 {1'sb0}});
				trackers[free_tracker][521-:2] <= 0;
				trackers[free_tracker][511-:512] <= 1'sb0;
				nq_fifo[nq_tail] <= free_tracker;
				nq_tail <= tinc(nq_tail);
				entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] <= entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] + 1'b1;
				if (entries[issue_head][1 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))])
					entries[issue_head][58-:59] <= entries[issue_head][58-:59] + 59'd1;
				if ((entries[issue_head][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] + 7'd1) == entries[issue_head][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)])
					issue_head <= inc(issue_head);
			end
			if (nq_fire) begin
				nq_head <= tinc(nq_head);
				trackers[nq_tracker][5 + (IW + (LW + 521))] <= 1;
			end
			case ({can_allocate, nq_fire})
				2'b10: nq_count <= nq_count + 1'b1;
				2'b01: nq_count <= nq_count - 1'b1;
				default:
					;
			endcase
			if (nq_rsp_fire) begin
				if (((sv2v_cast_32_signed(nq_rsp_tracker) >= TRACKERS) || !trackers[nq_rsp_tracker][6 + (IW + (LW + 521))]) || !(trackers[nq_rsp_tracker][5 + (IW + (LW + 521))] || (nq_fire && (nq_rsp_tracker == nq_tracker))))
					service_fault <= 1;
				else if (nq_rsp_resp[1] && (nq_rsp_resp[0] || nq_rsp_resp[2]))
					service_fault <= 1;
				else begin
					trackers[nq_rsp_tracker][4 + (IW + (LW + 521))] <= 1;
					trackers[nq_rsp_tracker][3 + (IW + (LW + 521))] <= nq_rsp_resp[0] || nq_rsp_resp[1];
					trackers[nq_rsp_tracker][521-:2] <= (nq_rsp_resp[1] ? 2'b10 : 2'b00);
					trackers[nq_rsp_tracker][511-:512] <= (nq_rsp_resp[1] ? {512 {1'sb0}} : nq_rsp_data);
					if (nq_rsp_resp[1])
						read_error <= 1;
				end
			end
			if (issue) begin
				if (send_tracker_found) begin
					trackers[send_tracker][2 + (IW + (LW + 521))] <= 1;
					mq_fifo[mq_tail] <= send_tracker;
					mq_tail <= tinc(mq_tail);
				end
				else
					service_fault <= 1;
			end
			if (mem_fire) begin
				if (((!trackers[mq_tracker][6 + (IW + (LW + 521))] || !trackers[mq_tracker][2 + (IW + (LW + 521))]) || trackers[mq_tracker][1 + (IW + (LW + 521))]) || (mem_r_last != (mem_beat == 2'd3)))
					service_fault <= 1;
				else begin
					trackers[mq_tracker][0 + (128 * sv2v_cast_32_signed(mem_beat))+:128] <= mem_r_data;
					trackers[mq_tracker][512 + (mem_beat * 2)+:2] <= mem_r_resp;
					if (mem_r_resp != 0)
						read_error <= 1;
				end
				if (mem_beat == 2'd3) begin
					mem_beat <= 0;
					trackers[mq_tracker][1 + (IW + (LW + 521))] <= 1;
					mq_head <= tinc(mq_head);
				end
				else
					mem_beat <= mem_beat + 1'b1;
			end
			case ({issue && send_tracker_found, mem_fire && (mem_beat == 2'd3)})
				2'b10: mq_count <= mq_count + 1'b1;
				2'b01: mq_count <= mq_count - 1'b1;
				default:
					;
			endcase
			if (source_advance) begin
				if ((send_idx + 7'd1) == entries[send_head][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)]) begin
					send_head <= inc(send_head);
					send_idx <= 0;
				end
				else
					send_idx <= send_idx + 1'b1;
			end
			if (hit_fire) begin
				if (hit_line_last)
					hit_beat <= 0;
				else
					hit_beat <= hit_beat + 1'b1;
			end
			if (retire_any) begin
				if ((!entries[retire_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] || !head_tracker_found) || !(trackers[head_tracker][3 + (IW + (LW + 521))] || trackers[head_tracker][1 + (IW + (LW + 521))]))
					service_fault <= 1;
				else begin
					trackers[head_tracker][6 + (IW + (LW + 521))] <= 0;
					if (head_final_line) begin
						entries[retire_head][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] <= entries[retire_head][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)];
						entries[retire_head][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] <= 0;
						retire_head <= inc(retire_head);
					end
					else begin
						entries[retire_head][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] <= entries[retire_head][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] + 1'b1;
						entries[retire_head][117-:59] <= entries[retire_head][117-:59] + 59'd1;
					end
				end
			end
			case ({push, retire_any && head_final_line})
				2'b10: ingress_count <= ingress_count + 1'b1;
				2'b01: ingress_count <= ingress_count - 1'b1;
				default:
					;
			endcase
		end
	initial begin
		assert ((DEPTH > 0) && (TRACKERS > 0));
		assert ((RANGE_WINDOW > 0) && (RANGE_WINDOW <= TRACKERS));
	end
	always @(posedge clk)
		if (rst_n) begin
			assert (sv2v_cast_32_signed(ingress_count) <= DEPTH);
			assert (sv2v_cast_32_signed(tracker_count) <= TRACKERS);
			assert (sv2v_cast_32_signed(tracker_count) <= RANGE_WINDOW);
			assert (sv2v_cast_32_signed(nq_count) <= sv2v_cast_32_signed(tracker_count));
			begin : sv2v_autoblock_6
				reg signed [31:0] e;
				for (e = 0; e < DEPTH; e = e + 1)
					if (entries[e][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))]) begin
						assert ((entries[e][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))] <= entries[e][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)]) && (entries[e][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)] <= entries[e][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)]));
						assert ((sv2v_cast_32_signed(entries[e][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)]) - sv2v_cast_32_signed(entries[e][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))])) <= RANGE_WINDOW);
						if (!entries[e][1 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))])
							assert (entries[e][LW + (LW + (LW + 117))-:((LW + (LW + (LW + 117))) >= (LW + (LW + 118)) ? ((LW + (LW + (LW + 117))) - (LW + (LW + 118))) + 1 : ((LW + (LW + 118)) - (LW + (LW + (LW + 117)))) + 1)] == 1);
					end
			end
			if (issue)
				assert ((out_len == 3) && (out_addr[5:0] == 0));
			if (INTERVAL_CAM)
				assert ({int_m0_ar, int_m0_aw, int_ace_ar, int_ace_aw, int_m1_aw, int_wr_issue} == {ref_m0_ar, ref_m0_aw, ref_ace_ar, ref_ace_aw, ref_m1_aw, ref_wr_issue});
			begin : sv2v_autoblock_7
				reg signed [31:0] e;
				for (e = 0; e < DEPTH; e = e + 1)
					if (entries[e][2 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))] && entries[e][1 + (ID_WIDTH + (72 + (LW + (LW + (LW + 117)))))])
						assert ((entries[e][117-:59] == ({1'b0, entries[e][72 + (LW + (LW + (LW + 117))):(72 + (LW + (LW + (LW + 117)))) - 57]} + sv2v_cast_59(entries[e][LW + 117-:((LW + 117) >= 118 ? LW + 0 : 119 - (LW + 117))]))) && (entries[e][58-:59] == ({1'b0, entries[e][72 + (LW + (LW + (LW + 117))):(72 + (LW + (LW + (LW + 117)))) - 57]} + sv2v_cast_59(entries[e][LW + (LW + 117)-:((LW + (LW + 117)) >= (LW + 118) ? ((LW + (LW + 117)) - (LW + 118)) + 1 : ((LW + 118) - (LW + (LW + 117))) + 1)]))));
			end
			assert (sv2v_cast_32_signed(mq_count) <= sv2v_cast_32_signed(tracker_count));
			if (mem_fire)
				assert ((mq_count != 0) && (mem_r_last == (mem_beat == 2'd3)));
		end
endmodule
