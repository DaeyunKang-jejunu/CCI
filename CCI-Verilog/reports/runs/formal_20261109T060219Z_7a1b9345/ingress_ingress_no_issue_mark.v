module coh_write_ingress (
	clk,
	rst_n,
	aw_valid,
	aw_ready,
	aw_id,
	aw_addr,
	aw_len,
	out_valid,
	out_ready,
	out_id,
	out_addr,
	out_len,
	out_idx,
	drop_valid,
	drop_id,
	drop_idx,
	drop_done,
	drop_retire_ready,
	b_fire,
	b_idx,
	m0_araddr,
	m0_awaddr,
	m0_ar_last,
	m0_aw_last,
	ar_hazard,
	aw_hazard,
	ace_ar_probe_valid,
	ace_ar_probe_addr,
	ace_aw_probe_valid,
	ace_aw_probe_addr,
	ace_ar_probe_last,
	ace_aw_probe_last,
	m1_ar_probe_valid,
	m1_ar_probe_addr,
	m1_ar_probe_len,
	ace_ar_hazard,
	ace_aw_hazard,
	m1_ar_hazard,
	ac_valid,
	ac_ready,
	ac_addr,
	ac_snoop,
	cr_valid,
	cr_ready,
	cr_resp,
	nq_valid,
	nq_ready,
	nq_addr,
	nq_tracker,
	nq_rsp_valid,
	nq_rsp_ready,
	nq_rsp_tracker,
	nq_rsp_resp,
	service_fault,
	ingress_count,
	tracker_count,
	tracker_full_stall
);
	parameter [0:0] TAGGED_NQ = 0;
	parameter [0:0] LINE_CAM = 1;
	parameter signed [31:0] ID_WIDTH = 4;
	parameter signed [31:0] DEPTH = 16;
	parameter signed [31:0] TRACKERS = 16;
	parameter signed [31:0] AC_DEPTH = TRACKERS;
	parameter signed [31:0] IW = (DEPTH < 2 ? 1 : $clog2(DEPTH));
	parameter signed [31:0] TW = (TRACKERS < 2 ? 1 : $clog2(TRACKERS));
	parameter signed [31:0] FW = (AC_DEPTH < 2 ? 1 : $clog2(AC_DEPTH));
	input wire clk;
	input wire rst_n;
	input wire aw_valid;
	output wire aw_ready;
	input wire [ID_WIDTH - 1:0] aw_id;
	input wire [63:0] aw_addr;
	input wire [7:0] aw_len;
	output wire out_valid;
	input wire out_ready;
	output wire [ID_WIDTH - 1:0] out_id;
	output wire [63:0] out_addr;
	output wire [7:0] out_len;
	output wire [IW - 1:0] out_idx;
	output wire drop_valid;
	output wire [ID_WIDTH - 1:0] drop_id;
	output wire [IW - 1:0] drop_idx;
	input wire drop_done;
	output wire drop_retire_ready;
	input wire b_fire;
	input wire [IW - 1:0] b_idx;
	input wire [63:0] m0_araddr;
	input wire [63:0] m0_awaddr;
	input wire [58:0] m0_ar_last;
	input wire [58:0] m0_aw_last;
	output wire ar_hazard;
	output wire aw_hazard;
	input wire ace_ar_probe_valid;
	input wire [63:0] ace_ar_probe_addr;
	input wire ace_aw_probe_valid;
	input wire [63:0] ace_aw_probe_addr;
	input wire [58:0] ace_ar_probe_last;
	input wire [58:0] ace_aw_probe_last;
	input wire m1_ar_probe_valid;
	input wire [63:0] m1_ar_probe_addr;
	input wire [7:0] m1_ar_probe_len;
	output wire ace_ar_hazard;
	output wire ace_aw_hazard;
	output wire m1_ar_hazard;
	output wire ac_valid;
	input wire ac_ready;
	output wire [63:0] ac_addr;
	output wire [3:0] ac_snoop;
	input wire cr_valid;
	output wire cr_ready;
	input wire [1:0] cr_resp;
	output wire nq_valid;
	input wire nq_ready;
	output wire [63:0] nq_addr;
	output wire [TW - 1:0] nq_tracker;
	input wire nq_rsp_valid;
	output wire nq_rsp_ready;
	input wire [TW - 1:0] nq_rsp_tracker;
	input wire [4:0] nq_rsp_resp;
	output reg service_fault;
	output reg [$clog2(DEPTH + 1) - 1:0] ingress_count;
	output reg [$clog2(TRACKERS + 1) - 1:0] tracker_count;
	output wire tracker_full_stall;
	reg [(((3 + ID_WIDTH) + 72) + TW) - 1:0] entries [0:DEPTH - 1];
	reg [(4 + IW) - 1:0] trackers [0:TRACKERS - 1];
	reg [IW - 1:0] tail;
	reg [IW - 1:0] issue_head;
	reg [IW - 1:0] retire_head;
	reg [TW - 1:0] ac_fifo [0:AC_DEPTH - 1];
	reg [FW - 1:0] ac_head;
	reg [FW - 1:0] ac_tail;
	reg [$clog2(AC_DEPTH + 1) - 1:0] ac_count;
	reg ac_hold;
	reg [TW - 1:0] ac_selected;
	reg [63:0] ac_payload;
	reg alloc_found;
	reg free_found;
	reg sched_found;
	reg [IW - 1:0] alloc_idx;
	reg [TW - 1:0] free_idx;
	reg [TW - 1:0] sched_idx;
	reg [DEPTH - 1:0] need_alloc;
	reg [DEPTH - 1:0] need_ac;
	wire push = aw_valid && aw_ready;
	wire issue = out_valid && out_ready;
	wire issue_any = issue || (drop_valid && drop_done);
	wire ac_fire = (ac_hold && (TAGGED_NQ ? nq_ready : ac_ready)) && !service_fault;
	wire rsp_fire = (TAGGED_NQ ? nq_rsp_valid : cr_valid && cr_ready);
	function automatic signed [IW - 1:0] sv2v_cast_3947A_signed;
		input reg signed [IW - 1:0] inp;
		sv2v_cast_3947A_signed = inp;
	endfunction
	function automatic [IW - 1:0] inc;
		input [IW - 1:0] p;
		inc = (p == sv2v_cast_3947A_signed(DEPTH - 1) ? {IW {1'sb0}} : p + 1'b1);
	endfunction
	function automatic signed [FW - 1:0] sv2v_cast_FFBA9_signed;
		input reg signed [FW - 1:0] inp;
		sv2v_cast_FFBA9_signed = inp;
	endfunction
	function automatic [FW - 1:0] finc;
		input [FW - 1:0] p;
		finc = (p == sv2v_cast_FFBA9_signed(AC_DEPTH - 1) ? {FW {1'sb0}} : p + 1'b1);
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
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign aw_ready = (sv2v_cast_32_signed(ingress_count) < DEPTH) && !service_fault;
	assign out_valid = ((((!service_fault && entries[issue_head][3 + (ID_WIDTH + (TW + 71))]) && !entries[issue_head][1 + (ID_WIDTH + (TW + 71))]) && entries[issue_head][2 + (ID_WIDTH + (TW + 71))]) && trackers[entries[issue_head][TW - 1-:TW]][IW + 1]) && !trackers[entries[issue_head][TW - 1-:TW]][IW + 0];
	assign out_id = entries[issue_head][ID_WIDTH + (TW + 71)-:((ID_WIDTH + (TW + 71)) >= (72 + (TW + 0)) ? ((ID_WIDTH + (TW + 71)) - (72 + (TW + 0))) + 1 : ((72 + (TW + 0)) - (ID_WIDTH + (TW + 71))) + 1)];
	assign out_addr = entries[issue_head][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)];
	assign out_len = entries[issue_head][TW + 7-:((TW + 7) >= (TW + 0) ? ((TW + 7) - (TW + 0)) + 1 : ((TW + 0) - (TW + 7)) + 1)];
	assign out_idx = issue_head;
	assign drop_valid = ((((!service_fault && entries[issue_head][3 + (ID_WIDTH + (TW + 71))]) && !entries[issue_head][1 + (ID_WIDTH + (TW + 71))]) && entries[issue_head][2 + (ID_WIDTH + (TW + 71))]) && trackers[entries[issue_head][TW - 1-:TW]][IW + 1]) && trackers[entries[issue_head][TW - 1-:TW]][IW + 0];
	assign drop_id = entries[issue_head][ID_WIDTH + (TW + 71)-:((ID_WIDTH + (TW + 71)) >= (72 + (TW + 0)) ? ((ID_WIDTH + (TW + 71)) - (72 + (TW + 0))) + 1 : ((72 + (TW + 0)) - (ID_WIDTH + (TW + 71))) + 1)];
	assign drop_idx = issue_head;
	assign drop_retire_ready = ((entries[retire_head][3 + (ID_WIDTH + (TW + 71))] && entries[retire_head][1 + (ID_WIDTH + (TW + 71))]) && entries[retire_head][2 + (ID_WIDTH + (TW + 71))]) && trackers[entries[retire_head][TW - 1-:TW]][IW + 0];
	assign tracker_full_stall = alloc_found && !free_found;
	reg cam_ar;
	reg cam_aw;
	reg cam_ace_ar;
	reg cam_ace_aw;
	reg cam_m1_ar;
	function automatic signed [TW - 1:0] sv2v_cast_2F2AF_signed;
		input reg signed [TW - 1:0] inp;
		sv2v_cast_2F2AF_signed = inp;
	endfunction
	always @(*) begin
		alloc_found = 0;
		alloc_idx = 0;
		free_found = 0;
		free_idx = 0;
		sched_found = 0;
		sched_idx = 0;
		tracker_count = 0;
		need_alloc = 1'sb0;
		need_ac = 1'sb0;
		cam_ar = 0;
		cam_aw = 0;
		cam_ace_ar = 0;
		cam_ace_aw = 0;
		cam_m1_ar = 0;
		begin : sv2v_autoblock_1
			reg signed [31:0] t;
			for (t = 0; t < TRACKERS; t = t + 1)
				if (trackers[t][2 + (IW + 1)])
					tracker_count = tracker_count + 1'b1;
				else if (!free_found) begin
					free_found = 1;
					free_idx = sv2v_cast_2F2AF_signed(t);
				end
		end
		begin : sv2v_autoblock_2
			reg signed [31:0] e;
			for (e = 0; e < DEPTH; e = e + 1)
				if (entries[e][3 + (ID_WIDTH + (TW + 71))]) begin
					need_alloc[e] = !entries[e][2 + (ID_WIDTH + (TW + 71))];
					need_ac[e] = (entries[e][2 + (ID_WIDTH + (TW + 71))] && !trackers[entries[e][TW - 1-:TW]][2 + (IW + 0)]) && !(ac_hold && (entries[e][TW - 1-:TW] == ac_selected));
					cam_ar = cam_ar | in_span(entries[e][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)], m0_araddr, m0_ar_last);
					cam_aw = cam_aw | in_span(entries[e][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)], m0_awaddr, m0_aw_last);
					if (ace_ar_probe_valid && in_span(entries[e][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)], ace_ar_probe_addr, ace_ar_probe_last))
						cam_ace_ar = 1;
					if (ace_aw_probe_valid && in_span(entries[e][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)], ace_aw_probe_addr, ace_aw_probe_last))
						cam_ace_aw = 1;
					if (m1_ar_probe_valid && line_in_burst(entries[e][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)], m1_ar_probe_addr, m1_ar_probe_len))
						cam_m1_ar = 1;
				end
		end
		begin : sv2v_autoblock_3
			reg signed [31:0] e;
			for (e = DEPTH - 1; e >= 0; e = e - 1)
				begin
					if (need_alloc[e]) begin
						alloc_found = 1;
						alloc_idx = sv2v_cast_3947A_signed(e);
					end
					if (need_ac[e]) begin
						sched_found = 1;
						sched_idx = entries[e][TW - 1-:TW];
					end
				end
		end
		begin : sv2v_autoblock_4
			reg signed [31:0] e;
			for (e = DEPTH - 1; e >= 0; e = e - 1)
				if (sv2v_cast_3947A_signed(e) >= retire_head) begin
					if (need_alloc[e])
						alloc_idx = sv2v_cast_3947A_signed(e);
					if (need_ac[e])
						sched_idx = entries[e][TW - 1-:TW];
				end
		end
	end
	assign ar_hazard = LINE_CAM && cam_ar;
	assign aw_hazard = LINE_CAM && cam_aw;
	assign ace_ar_hazard = LINE_CAM && cam_ace_ar;
	assign ace_aw_hazard = LINE_CAM && cam_ace_aw;
	assign m1_ar_hazard = LINE_CAM && cam_m1_ar;
	assign ac_valid = (!TAGGED_NQ && ac_hold) && !service_fault;
	assign ac_addr = ac_payload;
	assign ac_snoop = 4'd13;
	assign cr_ready = !TAGGED_NQ && (ac_count != 0);
	assign nq_valid = (TAGGED_NQ && ac_hold) && !service_fault;
	assign nq_addr = ac_payload;
	assign nq_tracker = ac_selected;
	assign nq_rsp_ready = TAGGED_NQ;
	always @(posedge clk)
		if (rst_n && ac_fire)
			ac_fifo[ac_tail] <= ac_selected;
	function automatic [ID_WIDTH - 1:0] sv2v_cast_029CE;
		input reg [ID_WIDTH - 1:0] inp;
		sv2v_cast_029CE = inp;
	endfunction
	function automatic [TW - 1:0] sv2v_cast_87191;
		input reg [TW - 1:0] inp;
		sv2v_cast_87191 = inp;
	endfunction
	function automatic [IW - 1:0] sv2v_cast_3947A;
		input reg [IW - 1:0] inp;
		sv2v_cast_3947A = inp;
	endfunction
	always @(posedge clk or negedge rst_n)
		if (!rst_n) begin
			tail <= 0;
			issue_head <= 0;
			retire_head <= 0;
			ingress_count <= 0;
			ac_head <= 0;
			ac_tail <= 0;
			ac_count <= 0;
			ac_hold <= 0;
			ac_selected <= 0;
			ac_payload <= 0;
			service_fault <= 0;
			begin : sv2v_autoblock_5
				reg signed [31:0] e;
				for (e = 0; e < DEPTH; e = e + 1)
					entries[e] <= 1'sb0;
			end
			begin : sv2v_autoblock_6
				reg signed [31:0] t;
				for (t = 0; t < TRACKERS; t = t + 1)
					trackers[t] <= 1'sb0;
			end
		end
		else begin
			if (push) begin
				entries[tail] <= {3'b100, sv2v_cast_029CE(aw_id), aw_addr, aw_len, sv2v_cast_87191(1'sb0)};
				tail <= inc(tail);
			end
			if (alloc_found && free_found) begin
				entries[alloc_idx][2 + (ID_WIDTH + (TW + 71))] <= 1;
				entries[alloc_idx][TW - 1-:TW] <= free_idx;
				trackers[free_idx] <= {4'b1000, sv2v_cast_3947A(alloc_idx)};
			end
			if (!ac_hold || ac_fire) begin
				ac_hold <= 0;
				if (sched_found && (((sv2v_cast_32_signed(ac_count) + sv2v_cast_32_signed(ac_fire)) - sv2v_cast_32_signed(rsp_fire)) < AC_DEPTH)) begin
					ac_hold <= 1;
					ac_selected <= sched_idx;
					ac_payload <= {entries[trackers[sched_idx][IW - 1-:IW]][TW + 71:TW + 14], 6'b000000};
				end
			end
			if (ac_fire) begin
				trackers[ac_selected][2 + (IW + 0)] <= 1;
				ac_tail <= finc(ac_tail);
			end
			if (rsp_fire) begin
				if (TAGGED_NQ) begin
					if (((sv2v_cast_32_signed(nq_rsp_tracker) < TRACKERS) && trackers[nq_rsp_tracker][2 + (IW + 1)]) && trackers[nq_rsp_tracker][2 + (IW + 0)]) begin
						if (nq_rsp_resp[1] && (nq_rsp_resp[0] || nq_rsp_resp[2]))
							service_fault <= 1;
						else begin
							trackers[nq_rsp_tracker][IW + 1] <= 1;
							trackers[nq_rsp_tracker][IW + 0] <= nq_rsp_resp[1];
						end
					end
					else
						service_fault <= 1;
				end
				else begin
					if (cr_resp == 0)
						trackers[ac_fifo[ac_head]][IW + 1] <= 1;
					else
						service_fault <= 1;
					ac_head <= finc(ac_head);
				end
			end
			case ({ac_fire, rsp_fire})
				2'b10: ac_count <= ac_count + 1'b1;
				2'b01: ac_count <= ac_count - 1'b1;
				default:
					;
			endcase
			if (issue_any) begin
				entries[issue_head][1 + (ID_WIDTH + (TW + 71))] <= 0;
				issue_head <= inc(issue_head);
			end
			if (b_fire) begin
				trackers[entries[b_idx][TW - 1-:TW]][2 + (IW + 1)] <= 0;
				entries[b_idx][3 + (ID_WIDTH + (TW + 71))] <= 0;
				retire_head <= inc(retire_head);
			end
			case ({push, b_fire})
				2'b10: ingress_count <= ingress_count + 1'b1;
				2'b01: ingress_count <= ingress_count - 1'b1;
				default:
					;
			endcase
		end
	initial assert (((DEPTH > 0) && (TRACKERS > 0)) && (AC_DEPTH > 0));
	always @(posedge clk)
		if (rst_n) begin
			assert (((sv2v_cast_32_signed(ingress_count) <= DEPTH) && (sv2v_cast_32_signed(ac_count) <= AC_DEPTH)) && (sv2v_cast_32_signed(ac_count) <= TRACKERS));
			if (push)
				assert ((aw_addr[5:0] == 0) && (aw_len == 3));
			if (alloc_found && free_found) begin : sv2v_autoblock_7
				reg signed [31:0] age;
				for (age = 0; age < DEPTH; age = age + 1)
					begin : sv2v_autoblock_8
						reg signed [31:0] e;
						e = (sv2v_cast_32_signed(retire_head) + age) % DEPTH;
						if (age < (((sv2v_cast_32_signed(alloc_idx) - sv2v_cast_32_signed(retire_head)) + DEPTH) % DEPTH))
							assert (!entries[e][3 + (ID_WIDTH + (TW + 71))] || entries[e][2 + (ID_WIDTH + (TW + 71))]);
					end
			end
			begin : sv2v_autoblock_9
				reg signed [31:0] t;
				for (t = 0; t < TRACKERS; t = t + 1)
					if (trackers[t][2 + (IW + 1)])
						assert ((entries[trackers[t][IW - 1-:IW]][3 + (ID_WIDTH + (TW + 71))] && entries[trackers[t][IW - 1-:IW]][2 + (ID_WIDTH + (TW + 71))]) && (entries[trackers[t][IW - 1-:IW]][TW - 1-:TW] == sv2v_cast_2F2AF_signed(t)));
			end
			if (b_fire)
				assert (((b_idx == retire_head) && entries[b_idx][3 + (ID_WIDTH + (TW + 71))]) && entries[b_idx][1 + (ID_WIDTH + (TW + 71))]);
			if (drop_done)
				assert (drop_valid);
			if (ac_fire)
				assert ((sv2v_cast_32_signed(ac_count) < AC_DEPTH) && trackers[ac_selected][2 + (IW + 1)]);
			if (rsp_fire && !TAGGED_NQ)
				assert (trackers[ac_fifo[ac_head]][2 + (IW + 0)] && (cr_resp == 0));
			if (rsp_fire && TAGGED_NQ)
				assert (((sv2v_cast_32_signed(nq_rsp_tracker) < TRACKERS) && trackers[nq_rsp_tracker][2 + (IW + 1)]) && trackers[nq_rsp_tracker][2 + (IW + 0)]);
		end
endmodule
