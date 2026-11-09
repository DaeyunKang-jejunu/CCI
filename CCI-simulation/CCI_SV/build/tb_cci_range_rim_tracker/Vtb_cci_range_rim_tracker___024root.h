// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_range_rim_tracker.h for the primary calling header

#ifndef VERILATED_VTB_CCI_RANGE_RIM_TRACKER___024ROOT_H_
#define VERILATED_VTB_CCI_RANGE_RIM_TRACKER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_range_rim_tracker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_range_rim_tracker___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__clk;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__rst_n;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__req_valid;
    CData/*3:0*/ tb_cci_range_rim_tracker__DOT__req_source_id;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__ac_gen_done;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__wr_done_valid;
    CData/*5:0*/ tb_cci_range_rim_tracker__DOT__wr_done_line_idx;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__write_release;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__ac_start_seen;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__inv_done_seen;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__dut__DOT____VlemCall_0__cci_all_lines_done;
    CData/*0:0*/ tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*51:0*/ tb_cci_range_rim_tracker__DOT__req_base_page_addr;
    QData/*63:0*/ tb_cci_range_rim_tracker__DOT__req_line_mask;
    VlWide<6>/*186:0*/ tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__label;
    std::string __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb507e25e__0;
    VlTriggerScheduler __VtrigSched_hb507e30c__0;

    // INTERNAL VARIABLES
    Vtb_cci_range_rim_tracker__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_range_rim_tracker___024root(Vtb_cci_range_rim_tracker__Syms* symsp, const char* namep);
    ~Vtb_cci_range_rim_tracker___024root();
    VL_UNCOPYABLE(Vtb_cci_range_rim_tracker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
