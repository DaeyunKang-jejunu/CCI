module cci_range_req_decoder (
	req_base_addr,
	req_line_count,
	req_line_mask,
	d_base_page,
	d_line_mask,
	valid
);
	input wire [63:0] req_base_addr;
	input wire [6:0] req_line_count;
	input wire [63:0] req_line_mask;
	output reg [51:0] d_base_page;
	output reg [63:0] d_line_mask;
	output reg valid;
	integer i;
	always @(*) begin
		d_base_page = req_base_addr[63:12];
		d_line_mask = req_line_mask;
		if (req_line_mask == 0) begin
			d_line_mask = 0;
			for (i = 0; i < 64; i = i + 1)
				if ((i >= {26'b00000000000000000000000000, req_base_addr[11:6]}) && (i < ({26'b00000000000000000000000000, req_base_addr[11:6]} + {25'b0000000000000000000000000, req_line_count})))
					d_line_mask[i] = 1;
		end
		valid = (req_base_addr[5:0] == 0) && ((req_line_mask != 0) || ((req_line_count != 0) && (({26'b00000000000000000000000000, req_base_addr[11:6]} + {25'b0000000000000000000000000, req_line_count}) <= 64)));
	end
endmodule
module cci_ac_range_gen (
	clk,
	rst_n,
	gen_en,
	base_page,
	line_mask,
	ac_valid,
	ac_ready,
	ac_addr,
	ac_snoop,
	ac_all_sent
);
	input wire clk;
	input wire rst_n;
	input wire gen_en;
	localparam [31:0] cci_pkg_ADDR_W = 64;
	localparam [31:0] cci_pkg_PAGE_OFF_W = 12;
	localparam [31:0] cci_pkg_BASE_PAGE_W = cci_pkg_ADDR_W - cci_pkg_PAGE_OFF_W;
	input wire [cci_pkg_BASE_PAGE_W - 1:0] base_page;
	localparam [31:0] cci_pkg_LINES_PER_PAGE = 64;
	input wire [63:0] line_mask;
	output wire ac_valid;
	input wire ac_ready;
	output wire [63:0] ac_addr;
	output wire [3:0] ac_snoop;
	output wire ac_all_sent;
	reg [63:0] sent_mask;
	reg [63:0] sent_mask_n;
	localparam [31:0] cci_pkg_LINE_IDX_W = 6;
	wire [5:0] scan_idx;
	wire [63:0] pending;
	assign pending = line_mask & ~sent_mask;
	reg have_pending;
	reg [5:0] next_idx;
	function automatic signed [5:0] sv2v_cast_16DA6_signed;
		input reg signed [5:0] inp;
		sv2v_cast_16DA6_signed = inp;
	endfunction
	always @(*) begin
		have_pending = 1'b0;
		next_idx = 1'sb0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 63; i >= 0; i = i - 1)
				if (pending[i]) begin
					have_pending = 1'b1;
					next_idx = sv2v_cast_16DA6_signed(i);
				end
		end
	end
	assign scan_idx = next_idx;
	assign ac_valid = gen_en & have_pending;
	localparam [3:0] cci_pkg_ACSNOOP_MAKEINVALID = 4'b1101;
	assign ac_snoop = cci_pkg_ACSNOOP_MAKEINVALID;
	localparam [31:0] cci_pkg_LINE_OFF_W = 6;
	assign ac_addr = {base_page, {cci_pkg_PAGE_OFF_W {1'b0}}} | ({{cci_pkg_ADDR_W - cci_pkg_LINE_IDX_W {1'b0}}, scan_idx} << cci_pkg_LINE_OFF_W);
	assign ac_all_sent = gen_en & ~have_pending;
	function automatic signed [63:0] sv2v_cast_805AD_signed;
		input reg signed [63:0] inp;
		sv2v_cast_805AD_signed = inp;
	endfunction
	always @(*) begin
		sent_mask_n = sent_mask;
		if (ac_valid && ac_ready)
			sent_mask_n = sent_mask | (sv2v_cast_805AD_signed(1) << scan_idx);
	end
	always @(posedge clk or negedge rst_n)
		if (!rst_n)
			sent_mask <= 1'sb0;
		else if (!gen_en)
			sent_mask <= 1'sb0;
		else
			sent_mask <= sent_mask_n;
endmodule
module cci_range_rim_tracker (
	clk,
	rst_n,
	alloc_en,
	d_base_page,
	d_line_mask,
	d_source_id,
	d_op,
	reserve_fire,
	reserve_idx,
	b_fire,
	b_idx,
	ac_valid,
	ac_ready,
	ac_addr,
	ac_snoop,
	cr_valid,
	cr_resp,
	cr_ready,
	rd_prep_valid,
	rd_prep_ready,
	rd_prep_addr,
	rd_prep_rsp_valid,
	rd_prep_rsp_ready,
	rd_prep_rsp,
	ctx,
	write_release,
	read_release,
	range_fault
);
	parameter signed [31:0] RANGE_MAX_ACTIVE_CYCLES = 100000;
	input wire clk;
	input wire rst_n;
	input wire alloc_en;
	input wire [51:0] d_base_page;
	input wire [63:0] d_line_mask;
	input wire [3:0] d_source_id;
	input wire [1:0] d_op;
	input wire reserve_fire;
	input wire [5:0] reserve_idx;
	input wire b_fire;
	input wire [5:0] b_idx;
	output wire ac_valid;
	input wire ac_ready;
	output wire [63:0] ac_addr;
	output wire [3:0] ac_snoop;
	input wire cr_valid;
	input wire [1:0] cr_resp;
	output wire cr_ready;
	output wire rd_prep_valid;
	input wire rd_prep_ready;
	output wire [63:0] rd_prep_addr;
	input wire rd_prep_rsp_valid;
	output wire rd_prep_rsp_ready;
	input wire [4:0] rd_prep_rsp;
	localparam [31:0] cci_pkg_ADDR_W = 64;
	localparam [31:0] cci_pkg_PAGE_OFF_W = 12;
	localparam [31:0] cci_pkg_BASE_PAGE_W = cci_pkg_ADDR_W - cci_pkg_PAGE_OFF_W;
	localparam [31:0] cci_pkg_LINES_PER_PAGE = 64;
	localparam [31:0] cci_pkg_SRC_ID_W = 4;
	output reg [(((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W) - 1:0] ctx;
	output wire write_release;
	output wire read_release;
	output reg range_fault;
	wire all_sent;
	reg [6:0] issued;
	reg [6:0] received;
	wire prep_valid;
	wire prep_ready;
	wire [63:0] prep_addr;
	wire [3:0] prep_snoop;
	wire preparing = ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] && (ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b01);
	wire write_preparing = preparing && (ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b00);
	wire read_preparing = preparing && (ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b01);
	wire prep_rsp_fire = ((write_preparing && cr_valid) && cr_ready) || ((read_preparing && rd_prep_rsp_valid) && rd_prep_rsp_ready);
	cci_ac_range_gen gen(
		.clk(clk),
		.rst_n(rst_n),
		.gen_en(preparing),
		.base_page(ctx[cci_pkg_BASE_PAGE_W + 195-:((cci_pkg_BASE_PAGE_W + 195) >= 196 ? cci_pkg_BASE_PAGE_W : 197 - (cci_pkg_BASE_PAGE_W + 195))]),
		.line_mask(ctx[195-:64]),
		.ac_valid(prep_valid),
		.ac_ready(prep_ready),
		.ac_addr(prep_addr),
		.ac_snoop(prep_snoop),
		.ac_all_sent(all_sent)
	);
	assign prep_ready = (write_preparing ? ac_ready : (read_preparing ? rd_prep_ready : 1'b0));
	assign ac_valid = write_preparing && prep_valid;
	assign ac_addr = prep_addr;
	assign ac_snoop = prep_snoop;
	assign cr_ready = write_preparing && (received < issued);
	assign rd_prep_valid = read_preparing && prep_valid;
	assign rd_prep_addr = prep_addr;
	assign rd_prep_rsp_ready = read_preparing && (received < issued);
	assign write_release = (ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] && (ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b10)) && (ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b00);
	assign read_release = (ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] && (ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b10)) && (ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b01);
	always @(posedge clk or negedge rst_n)
		if (!rst_n) begin
			ctx <= 1'sb0;
			issued <= 0;
			received <= 0;
			range_fault <= 0;
		end
		else if (alloc_en) begin
			ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] <= 1;
			ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] <= 2'b01;
			ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] <= d_op;
			ctx[cci_pkg_BASE_PAGE_W + 195-:((cci_pkg_BASE_PAGE_W + 195) >= 196 ? cci_pkg_BASE_PAGE_W : 197 - (cci_pkg_BASE_PAGE_W + 195))] <= d_base_page;
			ctx[195-:64] <= d_line_mask;
			ctx[3-:cci_pkg_SRC_ID_W] <= d_source_id;
			ctx[131-:64] <= 0;
			ctx[67-:64] <= 0;
			issued <= 0;
			received <= 0;
		end
		else begin
			if (prep_valid && prep_ready)
				issued <= issued + 1'b1;
			if (prep_rsp_fire) begin
				received <= received + 1'b1;
				if (read_preparing && rd_prep_rsp[1]) begin
					range_fault <= 1;
					ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] <= 2'b11;
				end
			end
			if (((preparing && all_sent) && (received == issued)) && !range_fault)
				ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] <= 2'b10;
			if (reserve_fire)
				ctx[68 + reserve_idx] <= 1;
			if (b_fire)
				ctx[4 + b_idx] <= 1;
			if (((write_release || read_release) && (ctx[195-:64] == ctx[67-:64])) && (ctx[195-:64] == ctx[131-:64])) begin
				ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] <= 0;
				ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] <= 2'b00;
			end
		end
	reg signed [31:0] active_cycles;
	reg rd_prep_stalled_q;
	reg [63:0] rd_prep_addr_q;
	initial assert ((((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W) == 253);
	always @(posedge clk) begin
		if (!rst_n) begin
			rd_prep_stalled_q <= 0;
			rd_prep_addr_q <= 0;
		end
		else begin
			if (rd_prep_stalled_q)
				assert (rd_prep_valid && (rd_prep_addr == rd_prep_addr_q)) ;
			rd_prep_stalled_q <= rd_prep_valid && !rd_prep_ready;
			rd_prep_addr_q <= rd_prep_addr;
		end
		if ((rst_n && cr_valid) && cr_ready)
			assert (cr_resp == 0);
		if (!rst_n || !ctx[5 + (cci_pkg_BASE_PAGE_W + 195)])
			active_cycles <= 0;
		else begin
			active_cycles <= active_cycles + 1;
			assert ((RANGE_MAX_ACTIVE_CYCLES == 0) || (active_cycles < RANGE_MAX_ACTIVE_CYCLES));
			assert (((ctx[67-:64] & ~ctx[131-:64]) == 0) && ((ctx[131-:64] & ~ctx[195-:64]) == 0));
			if (b_fire)
				assert (((write_release || read_release) && ctx[68 + b_idx]) && !ctx[4 + b_idx]);
			if (reserve_fire)
				assert (ctx[132 + reserve_idx] && !ctx[68 + reserve_idx]);
		end
	end
endmodule
module cci_range_hazard_checker (
	ctx,
	probe_valid,
	probe_addr,
	probe_source_id,
	probe_stall
);
	parameter [31:0] NUM_CONTEXTS = 1;
	localparam [31:0] cci_pkg_ADDR_W = 64;
	localparam [31:0] cci_pkg_PAGE_OFF_W = 12;
	localparam [31:0] cci_pkg_BASE_PAGE_W = cci_pkg_ADDR_W - cci_pkg_PAGE_OFF_W;
	localparam [31:0] cci_pkg_LINES_PER_PAGE = 64;
	localparam [31:0] cci_pkg_SRC_ID_W = 4;
	input wire [(NUM_CONTEXTS * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) - 1:0] ctx;
	input wire probe_valid;
	input wire [63:0] probe_addr;
	input wire [3:0] probe_source_id;
	output wire probe_stall;
	wire [cci_pkg_BASE_PAGE_W - 1:0] probe_page;
	localparam [31:0] cci_pkg_LINE_IDX_W = 6;
	wire [5:0] probe_line;
	assign probe_page = probe_addr[63:cci_pkg_PAGE_OFF_W];
	localparam [31:0] cci_pkg_LINE_OFF_W = 6;
	assign probe_line = probe_addr[11:cci_pkg_LINE_OFF_W];
	wire [NUM_CONTEXTS - 1:0] hit;
	genvar c;
	generate
		for (c = 0; c < NUM_CONTEXTS; c = c + 1) begin : context_hit
			assign hit[c] = (((ctx[(c * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) + (5 + (cci_pkg_BASE_PAGE_W + 195))] & (ctx[(c * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) + (cci_pkg_BASE_PAGE_W + 195)-:((cci_pkg_BASE_PAGE_W + 195) >= 196 ? cci_pkg_BASE_PAGE_W : 197 - (cci_pkg_BASE_PAGE_W + 195))] == probe_page)) & ctx[(c * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) + (132 + probe_line)]) & ~ctx[(c * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) + (4 + probe_line)]) & (ctx[(c * (((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W)) + 3-:cci_pkg_SRC_ID_W] != probe_source_id);
		end
	endgenerate
	assign probe_stall = probe_valid & |hit;
	wire _unused;
	assign _unused = ^probe_addr[5:0];
endmodule
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
	b_fire,
	b_idx,
	m0_araddr,
	m0_awaddr,
	ar_hazard,
	aw_hazard,
	setup_valid,
	setup_ready,
	setup_addr,
	setup_mask,
	setup_count,
	setup_source,
	setup_op,
	setup_error,
	axi_idle,
	snoop_idle,
	admission_freeze,
	ac_valid,
	ac_ready,
	ac_addr,
	ac_snoop,
	cr_valid,
	cr_ready,
	cr_resp,
	read_reserve_fire,
	read_reserve_idx,
	read_done_fire,
	read_done_idx,
	read_prep_valid,
	read_prep_ready,
	read_prep_addr,
	read_prep_rsp_valid,
	read_prep_rsp_ready,
	read_prep_rsp,
	range_ctx,
	write_release,
	read_release,
	range_fault,
	ingress_count,
	tracker_count,
	tracker_full_stall
);
	parameter [0:0] USE_RANGE = 0;
	parameter [0:0] ENABLE_RANGE_READ = 0;
	parameter signed [31:0] ID_WIDTH = 4;
	parameter signed [31:0] DEPTH = 16;
	parameter signed [31:0] TRACKERS = 16;
	parameter signed [31:0] AC_DEPTH = TRACKERS;
	parameter signed [31:0] RANGE_MAX_ACTIVE_CYCLES = 100000;
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
	input wire b_fire;
	input wire [IW - 1:0] b_idx;
	input wire [63:0] m0_araddr;
	input wire [63:0] m0_awaddr;
	output reg ar_hazard;
	output reg aw_hazard;
	input wire setup_valid;
	output wire setup_ready;
	input wire [63:0] setup_addr;
	input wire [63:0] setup_mask;
	input wire [6:0] setup_count;
	input wire [3:0] setup_source;
	input wire [1:0] setup_op;
	output reg setup_error;
	input wire axi_idle;
	input wire snoop_idle;
	output wire admission_freeze;
	output wire ac_valid;
	input wire ac_ready;
	output wire [63:0] ac_addr;
	output wire [3:0] ac_snoop;
	input wire cr_valid;
	output wire cr_ready;
	input wire [1:0] cr_resp;
	input wire read_reserve_fire;
	input wire [5:0] read_reserve_idx;
	input wire read_done_fire;
	input wire [5:0] read_done_idx;
	output wire read_prep_valid;
	input wire read_prep_ready;
	output wire [63:0] read_prep_addr;
	input wire read_prep_rsp_valid;
	output wire read_prep_rsp_ready;
	input wire [4:0] read_prep_rsp;
	localparam [31:0] cci_pkg_ADDR_W = 64;
	localparam [31:0] cci_pkg_PAGE_OFF_W = 12;
	localparam [31:0] cci_pkg_BASE_PAGE_W = cci_pkg_ADDR_W - cci_pkg_PAGE_OFF_W;
	localparam [31:0] cci_pkg_LINES_PER_PAGE = 64;
	localparam [31:0] cci_pkg_SRC_ID_W = 4;
	output wire [(((((5 + cci_pkg_BASE_PAGE_W) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_LINES_PER_PAGE) + cci_pkg_SRC_ID_W) - 1:0] range_ctx;
	output wire write_release;
	output wire read_release;
	output wire range_fault;
	output reg [$clog2(DEPTH + 1) - 1:0] ingress_count;
	output reg [$clog2(TRACKERS + 1) - 1:0] tracker_count;
	output wire tracker_full_stall;
	reg [(((3 + ID_WIDTH) + 72) + TW) - 1:0] entries [0:DEPTH - 1];
	reg [(3 + IW) - 1:0] trackers [0:TRACKERS - 1];
	wire [DEPTH - 1:0] path;
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
	reg pending;
	wire activate;
	wire classify_range;
	reg [51:0] pending_page;
	wire [51:0] decoded_page;
	reg [63:0] pending_mask;
	wire [63:0] decoded_mask;
	reg [3:0] pending_source;
	reg [1:0] pending_op;
	wire decoded_valid;
	wire range_acvalid;
	wire range_acready;
	wire range_crready;
	wire [63:0] range_acaddr;
	wire [3:0] range_acsnoop;
	wire range_arhazard;
	wire range_awhazard;
	wire invalidating = (USE_RANGE && range_ctx[5 + (cci_pkg_BASE_PAGE_W + 195)]) && (range_ctx[4 + (cci_pkg_BASE_PAGE_W + 195)-:((4 + (cci_pkg_BASE_PAGE_W + 195)) >= (2 + (cci_pkg_BASE_PAGE_W + 196)) ? ((4 + (cci_pkg_BASE_PAGE_W + 195)) - (2 + (cci_pkg_BASE_PAGE_W + 196))) + 1 : ((2 + (cci_pkg_BASE_PAGE_W + 196)) - (4 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b01);
	wire write_preparing = invalidating && (range_ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b00);
	wire push = aw_valid && aw_ready;
	wire issue = out_valid && out_ready;
	wire conv_acfire = (!write_preparing && ac_valid) && ac_ready;
	wire conv_crfire = (!write_preparing && cr_valid) && cr_ready;
	wire setup_fire = setup_valid && setup_ready;
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
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign aw_ready = (sv2v_cast_32_signed(ingress_count) < DEPTH) && !admission_freeze;
	assign out_valid = (entries[issue_head][3 + (ID_WIDTH + (TW + 71))] && !entries[issue_head][1 + (ID_WIDTH + (TW + 71))]) && (path[issue_head] ? write_release : entries[issue_head][2 + (ID_WIDTH + (TW + 71))] && trackers[entries[issue_head][TW - 1-:TW]][IW + 0]);
	assign out_id = entries[issue_head][ID_WIDTH + (TW + 71)-:((ID_WIDTH + (TW + 71)) >= (72 + (TW + 0)) ? ((ID_WIDTH + (TW + 71)) - (72 + (TW + 0))) + 1 : ((72 + (TW + 0)) - (ID_WIDTH + (TW + 71))) + 1)];
	assign out_addr = entries[issue_head][TW + 71-:((TW + 71) >= (8 + (TW + 0)) ? ((TW + 71) - (8 + (TW + 0))) + 1 : ((8 + (TW + 0)) - (TW + 71)) + 1)];
	assign out_len = entries[issue_head][TW + 7-:((TW + 7) >= (TW + 0) ? ((TW + 7) - (TW + 0)) + 1 : ((TW + 0) - (TW + 7)) + 1)];
	assign out_idx = issue_head;
	assign tracker_full_stall = alloc_found && !free_found;
	reg [DEPTH - 1:0] need_alloc;
	reg [DEPTH - 1:0] need_ac;
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
		ar_hazard = range_arhazard;
		aw_hazard = range_awhazard;
		begin : sv2v_autoblock_1
			reg signed [31:0] t;
			for (t = 0; t < TRACKERS; t = t + 1)
				if (trackers[t][2 + (IW + 0)])
					tracker_count = tracker_count + 1'b1;
				else if (!free_found) begin
					free_found = 1;
					free_idx = sv2v_cast_2F2AF_signed(t);
				end
		end
		begin : sv2v_autoblock_2
			reg signed [31:0] e;
			for (e = 0; e < DEPTH; e = e + 1)
				if (entries[e][3 + (ID_WIDTH + (TW + 71))] && !path[e]) begin
					need_alloc[e] = !entries[e][2 + (ID_WIDTH + (TW + 71))];
					need_ac[e] = (entries[e][2 + (ID_WIDTH + (TW + 71))] && !trackers[entries[e][TW - 1-:TW]][IW + 1]) && !(ac_hold && (entries[e][TW - 1-:TW] == ac_selected));
					ar_hazard = ar_hazard | (entries[e][TW + 71:TW + 14] == m0_araddr[63:6]);
					aw_hazard = aw_hazard | (entries[e][TW + 71:TW + 14] == m0_awaddr[63:6]);
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
	assign ac_valid = (write_preparing ? range_acvalid : ac_hold);
	assign ac_addr = (write_preparing ? range_acaddr : ac_payload);
	localparam [3:0] cci_pkg_ACSNOOP_MAKEINVALID = 4'b1101;
	assign ac_snoop = (write_preparing ? range_acsnoop : cci_pkg_ACSNOOP_MAKEINVALID);
	assign range_acready = write_preparing && ac_ready;
	assign cr_ready = (write_preparing ? range_crready : ac_count != 0);
	generate
		if (USE_RANGE) begin : proposed
			reg [DEPTH - 1:0] path_q;
			assign path = path_q;
			always @(posedge clk or negedge rst_n)
				if (!rst_n)
					path_q <= 0;
				else if (push)
					path_q[tail] <= classify_range;
			cci_range_req_decoder decoder(
				.req_base_addr(setup_addr),
				.req_line_count(setup_count),
				.req_line_mask(setup_mask),
				.d_base_page(decoded_page),
				.d_line_mask(decoded_mask),
				.valid(decoded_valid)
			);
			assign setup_ready = !pending && !range_ctx[5 + (cci_pkg_BASE_PAGE_W + 195)];
			assign admission_freeze = pending || setup_fire;
			assign activate = (((((pending && (ingress_count == 0)) && (tracker_count == 0)) && (ac_count == 0)) && !ac_hold) && axi_idle) && snoop_idle;
			assign classify_range = (((range_ctx[5 + (cci_pkg_BASE_PAGE_W + 195)] && (range_ctx[2 + (cci_pkg_BASE_PAGE_W + 195)-:((2 + (cci_pkg_BASE_PAGE_W + 195)) >= (cci_pkg_BASE_PAGE_W + 196) ? ((2 + (cci_pkg_BASE_PAGE_W + 195)) - (cci_pkg_BASE_PAGE_W + 196)) + 1 : ((cci_pkg_BASE_PAGE_W + 196) - (2 + (cci_pkg_BASE_PAGE_W + 195))) + 1)] == 2'b00)) && (aw_addr[63:12] == range_ctx[cci_pkg_BASE_PAGE_W + 195-:((cci_pkg_BASE_PAGE_W + 195) >= 196 ? cci_pkg_BASE_PAGE_W : 197 - (cci_pkg_BASE_PAGE_W + 195))])) && range_ctx[132 + aw_addr[11:6]]) && !range_ctx[68 + aw_addr[11:6]];
			always @(posedge clk or negedge rst_n)
				if (!rst_n) begin
					pending <= 0;
					pending_page <= 0;
					pending_mask <= 0;
					pending_source <= 0;
					pending_op <= 2'b00;
					setup_error <= 0;
				end
				else begin
					setup_error <= 0;
					if (setup_fire) begin
						if ((decoded_valid && (setup_source == 4'd1)) && ((setup_op == 2'b00) || (ENABLE_RANGE_READ && (setup_op == 2'b01)))) begin
							pending <= 1;
							pending_page <= decoded_page;
							pending_mask <= decoded_mask;
							pending_source <= setup_source;
							pending_op <= setup_op;
						end
						else
							setup_error <= 1;
					end
					if (activate)
						pending <= 0;
				end
			cci_range_rim_tracker #(.RANGE_MAX_ACTIVE_CYCLES(RANGE_MAX_ACTIVE_CYCLES)) rim(
				.clk(clk),
				.rst_n(rst_n),
				.alloc_en(activate),
				.d_base_page(pending_page),
				.d_line_mask(pending_mask),
				.d_source_id(pending_source),
				.d_op(pending_op),
				.reserve_fire((push && classify_range) || read_reserve_fire),
				.reserve_idx((read_reserve_fire ? read_reserve_idx : aw_addr[11:6])),
				.b_fire((b_fire && path[b_idx]) || read_done_fire),
				.b_idx((read_done_fire ? read_done_idx : entries[b_idx][TW + 19:TW + 14])),
				.ac_valid(range_acvalid),
				.ac_ready(range_acready),
				.ac_addr(range_acaddr),
				.ac_snoop(range_acsnoop),
				.cr_valid(cr_valid && write_preparing),
				.cr_ready(range_crready),
				.cr_resp(cr_resp),
				.rd_prep_valid(read_prep_valid),
				.rd_prep_ready(read_prep_ready),
				.rd_prep_addr(read_prep_addr),
				.rd_prep_rsp_valid(read_prep_rsp_valid),
				.rd_prep_rsp_ready(read_prep_rsp_ready),
				.rd_prep_rsp(read_prep_rsp),
				.ctx(range_ctx),
				.write_release(write_release),
				.read_release(read_release),
				.range_fault(range_fault)
			);
			cci_range_hazard_checker ar_check(
				.ctx(range_ctx),
				.probe_valid(1'b1),
				.probe_addr(m0_araddr),
				.probe_source_id(4'd0),
				.probe_stall(range_arhazard)
			);
			cci_range_hazard_checker aw_check(
				.ctx(range_ctx),
				.probe_valid(1'b1),
				.probe_addr(m0_awaddr),
				.probe_source_id(4'd0),
				.probe_stall(range_awhazard)
			);
		end
		else begin : conventional
			assign path = 1'sb0;
			assign range_ctx = 1'sb0;
			wire [5:1] sv2v_tmp_BD4EE;
			assign sv2v_tmp_BD4EE = 0;
			always @(*) {setup_ready, setup_error, admission_freeze, activate, classify_range} = sv2v_tmp_BD4EE;
			assign {range_acvalid, range_acaddr, range_acsnoop, range_crready, write_release, read_release, range_fault} = 0;
			assign {read_prep_valid, read_prep_addr, read_prep_rsp_ready} = 0;
			assign {range_arhazard, range_awhazard} = 0;
		end
	endgenerate
	always @(posedge clk)
		if (rst_n && conv_acfire)
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
			begin : sv2v_autoblock_5
				reg signed [31:0] i;
				for (i = 0; i < DEPTH; i = i + 1)
					entries[i] <= 1'sb0;
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
				trackers[free_idx] <= {3'b100, sv2v_cast_3947A(alloc_idx)};
			end
			if (!write_preparing && (!ac_hold || conv_acfire)) begin
				ac_hold <= 0;
				if (sched_found && (((sv2v_cast_32_signed(ac_count) + sv2v_cast_32_signed(conv_acfire)) - sv2v_cast_32_signed(conv_crfire)) < AC_DEPTH)) begin
					ac_hold <= 1;
					ac_selected <= sched_idx;
					ac_payload <= {entries[trackers[sched_idx][IW - 1-:IW]][TW + 71:TW + 14], 6'b000000};
				end
			end
			if (conv_acfire) begin
				trackers[ac_selected][IW + 1] <= 1;
				ac_tail <= finc(ac_tail);
			end
			if (conv_crfire) begin
				trackers[ac_fifo[ac_head]][IW + 0] <= 1;
				ac_head <= finc(ac_head);
			end
			case ({conv_acfire, conv_crfire})
				2'b10: ac_count <= ac_count + 1'b1;
				2'b01: ac_count <= ac_count - 1'b1;
				default:
					;
			endcase
			if (issue) begin
				entries[issue_head][1 + (ID_WIDTH + (TW + 71))] <= 1;
				issue_head <= inc(issue_head);
			end
			if (b_fire) begin
				if (!path[b_idx])
					trackers[entries[b_idx][TW - 1-:TW]][2 + (IW + 0)] <= 0;
				entries[b_idx][3 + (ID_WIDTH + (TW + 71))] <= 0;
				retire_head <= retire_head;
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
			if (alloc_found && free_found) begin
				assert (!path[alloc_idx]);
				begin : sv2v_autoblock_7
					reg signed [31:0] age;
					for (age = 0; age < DEPTH; age = age + 1)
						begin : sv2v_autoblock_8
							reg signed [31:0] e;
							e = (sv2v_cast_32_signed(retire_head) + age) % DEPTH;
							if (age < (((sv2v_cast_32_signed(alloc_idx) - sv2v_cast_32_signed(retire_head)) + DEPTH) % DEPTH))
								assert ((!entries[e][3 + (ID_WIDTH + (TW + 71))] || path[e]) || entries[e][2 + (ID_WIDTH + (TW + 71))]);
						end
				end
			end
			begin : sv2v_autoblock_9
				reg signed [31:0] t;
				for (t = 0; t < TRACKERS; t = t + 1)
					if (trackers[t][2 + (IW + 0)])
						assert (((entries[trackers[t][IW - 1-:IW]][3 + (ID_WIDTH + (TW + 71))] && !path[trackers[t][IW - 1-:IW]]) && entries[trackers[t][IW - 1-:IW]][2 + (ID_WIDTH + (TW + 71))]) && (entries[trackers[t][IW - 1-:IW]][TW - 1-:TW] == sv2v_cast_2F2AF_signed(t)));
			end
			if (b_fire)
				assert (((b_idx == retire_head) && entries[b_idx][3 + (ID_WIDTH + (TW + 71))]) && entries[b_idx][1 + (ID_WIDTH + (TW + 71))]);
			if (conv_acfire)
				assert (((sv2v_cast_32_signed(ac_count) < AC_DEPTH) && !write_preparing) && trackers[ac_selected][2 + (IW + 0)]);
			if (conv_crfire)
				assert (trackers[ac_fifo[ac_head]][IW + 1] && (cr_resp == 0));
			if (issue && path[issue_head])
				assert (write_release);
		end
endmodule
