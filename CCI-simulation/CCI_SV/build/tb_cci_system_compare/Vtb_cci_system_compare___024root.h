// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_system_compare.h for the primary calling header

#ifndef VERILATED_VTB_CCI_SYSTEM_COMPARE___024ROOT_H_
#define VERILATED_VTB_CCI_SYSTEM_COMPARE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_system_compare__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_system_compare___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cci_system_compare__DOT__clk;
        CData/*0:0*/ tb_cci_system_compare__DOT__rst_n;
        CData/*0:0*/ tb_cci_system_compare__DOT__req_valid;
        CData/*6:0*/ tb_cci_system_compare__DOT__req_line_count;
        CData/*3:0*/ tb_cci_system_compare__DOT__req_source_id;
        CData/*0:0*/ tb_cci_system_compare__DOT__prop_req_error;
        CData/*0:0*/ tb_cci_system_compare__DOT__base_req_error;
        CData/*0:0*/ tb_cci_system_compare__DOT__ac_valid;
        CData/*0:0*/ tb_cci_system_compare__DOT__ac_ready;
        CData/*0:0*/ tb_cci_system_compare__DOT__cr_valid;
        CData/*4:0*/ tb_cci_system_compare__DOT__cr_resp;
        CData/*3:0*/ tb_cci_system_compare__DOT__awid;
        CData/*0:0*/ tb_cci_system_compare__DOT__aw_valid;
        CData/*0:0*/ tb_cci_system_compare__DOT__aw_ready;
        CData/*0:0*/ tb_cci_system_compare__DOT__aw_track_valid;
        CData/*3:0*/ tb_cci_system_compare__DOT__bid;
        CData/*0:0*/ tb_cci_system_compare__DOT__b_valid;
        CData/*0:0*/ tb_cci_system_compare__DOT__probe_valid;
        CData/*3:0*/ tb_cci_system_compare__DOT__probe_source_id;
        CData/*0:0*/ tb_cci_system_compare__DOT__prop_probe_hazard;
        CData/*0:0*/ tb_cci_system_compare__DOT__prop_overflow_sticky;
        CData/*0:0*/ tb_cci_system_compare__DOT__prop_underflow_sticky;
        CData/*0:0*/ tb_cci_system_compare__DOT__base_overflow_sticky;
        CData/*0:0*/ tb_cci_system_compare__DOT__base_underflow_sticky;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__wr_done_valid;
        CData/*5:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__wr_done_line_idx;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT___Vpast_1_1;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT___Vpast_3_1;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__ac_gen_done_raw;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__snoop_done;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__write_release_tracker;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy;
        CData/*5:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last;
        CData/*6:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r;
        CData/*6:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
        CData/*0:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted;
        CData/*6:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next;
        CData/*5:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__wr_done_line_idx;
        CData/*0:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT___Vpast_1_1;
        CData/*0:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT___Vpast_3_1;
        CData/*0:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__any_valid;
        CData/*0:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__any_undone;
        CData/*0:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__cam_any_match;
        CData/*5:0*/ __Vfunc_cci_page_relative_mask__62____VlefCall_2__cci_line_idx;
        CData/*0:0*/ __Vfunc_cci_page_relative_mask__62____VlefCall_0__cci_range_fits_page;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__63__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_range_fits_page__63__line_count;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__63____VlefCall_1__cci_valid_line_count;
        CData/*5:0*/ __Vfunc_cci_range_fits_page__63____VlefCall_0__cci_line_idx;
        CData/*7:0*/ __Vfunc_cci_range_fits_page__63__end_line;
        CData/*5:0*/ __Vfunc_cci_line_idx__64__Vfuncout;
        CData/*0:0*/ __Vfunc_cci_valid_line_count__65__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_valid_line_count__65__line_count;
        CData/*6:0*/ __Vfunc_cci_contiguous_mask__66__line_count;
        CData/*5:0*/ __Vfunc_cci_line_idx__67__Vfuncout;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_system_compare__DOT__prop_overflow_sticky;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_system_compare__DOT__prop_underflow_sticky;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_system_compare__DOT__rst_n;
    };
    struct {
        CData/*0:0*/ __Vsampled_TOP__tb_cci_system_compare__DOT__base_overflow_sticky;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_system_compare__DOT__base_underflow_sticky;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_system_compare__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_system_compare__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb_cci_system_compare__DOT__req_base_addr;
        QData/*63:0*/ tb_cci_system_compare__DOT__req_line_mask;
        QData/*63:0*/ tb_cci_system_compare__DOT__awaddr;
        QData/*63:0*/ tb_cci_system_compare__DOT__probe_addr;
        QData/*63:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__dec_line_mask;
        QData/*63:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__ac_line_mask_w;
        VlWide<6>/*186:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r;
        QData/*63:0*/ tb_cci_system_compare__DOT__proposed_dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask;
        QData/*51:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr;
        QData/*51:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__current_page;
        QData/*57:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__wr_done_cl_addr;
        QData/*63:0*/ tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__hazard_vec;
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__62__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__62____VlefCall_1__cci_contiguous_mask;
        QData/*63:0*/ __Vfunc_cci_range_fits_page__63__base_addr;
        QData/*63:0*/ __Vfunc_cci_line_idx__64__addr;
        QData/*63:0*/ __Vfunc_cci_contiguous_mask__66__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_line_idx__67__addr;
        QData/*63:0*/ __Vfunc_cci_page_addr__72__addr;
        VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__fifo;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__fifo_track_type;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__rd_ptr;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__wr_ptr;
        VlUnpacked<CData/*2:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__push;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__pop;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__push_ok;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__push_block;
        VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__fifo;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__fifo_track_type;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__rd_ptr;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__wr_ptr;
        VlUnpacked<CData/*2:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__push;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__pop;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__push_ok;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__push_block;
        VlUnpacked<QData/*63:0*/, 64> tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__entries;
        VlUnpacked<QData/*63:0*/, 64> tb_cci_system_compare__DOT__baseline_dut__DOT__i_tracker__DOT__alloc_e;
        VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_system_compare__DOT__proposed_dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_system_compare__DOT__baseline_dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__4__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__5__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_int__8__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__10__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__11__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__15__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__16__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__19__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__20__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__21__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__22__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__23__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__24__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__32__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__33__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__38__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__39__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__41__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__42__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__43__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__44__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__49__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__50__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__54__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__55__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__57__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__58__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__59__label;
    std::string __Vtask_tb_cci_system_compare__DOT__check_bit__60__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h51f5a533__0;
    VlTriggerScheduler __VtrigSched_h51f5a5df__0;

    // INTERNAL VARIABLES
    Vtb_cci_system_compare__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_system_compare___024root(Vtb_cci_system_compare__Syms* symsp, const char* namep);
    ~Vtb_cci_system_compare___024root();
    VL_UNCOPYABLE(Vtb_cci_system_compare___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
