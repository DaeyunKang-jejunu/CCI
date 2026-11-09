// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_baseline_line_tracker.h for the primary calling header

#ifndef VERILATED_VTB_BASELINE_LINE_TRACKER___024ROOT_H_
#define VERILATED_VTB_BASELINE_LINE_TRACKER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_baseline_line_tracker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_baseline_line_tracker___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_baseline_line_tracker__DOT__clk;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__rst_n;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__req_valid;
    CData/*3:0*/ tb_baseline_line_tracker__DOT__req_source_id;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__wr_done_valid;
    CData/*5:0*/ tb_baseline_line_tracker__DOT__wr_done_line_idx;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__probe_valid;
    CData/*3:0*/ tb_baseline_line_tracker__DOT__probe_source_id;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__req_error;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__dut__DOT__any_undone;
    CData/*0:0*/ tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_baseline_line_tracker__DOT__req_base_addr;
    QData/*63:0*/ tb_baseline_line_tracker__DOT__req_line_mask;
    QData/*63:0*/ tb_baseline_line_tracker__DOT__probe_addr;
    QData/*63:0*/ tb_baseline_line_tracker__DOT__test_T08__Vstatic__sparse;
    QData/*51:0*/ tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr;
    QData/*51:0*/ tb_baseline_line_tracker__DOT__dut__DOT__current_page;
    QData/*57:0*/ tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr;
    QData/*63:0*/ tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec;
    QData/*63:0*/ __Vfunc_cci_page_addr__80__addr;
    VlUnpacked<QData/*63:0*/, 64> tb_baseline_line_tracker__DOT__dut__DOT__entries;
    VlUnpacked<QData/*63:0*/, 64> tb_baseline_line_tracker__DOT__dut__DOT__alloc_e;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__label;
    std::string __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0f7f4a18__0;
    VlTriggerScheduler __VtrigSched_h0f7f4ad2__0;

    // INTERNAL VARIABLES
    Vtb_baseline_line_tracker__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_baseline_line_tracker___024root(Vtb_baseline_line_tracker__Syms* symsp, const char* namep);
    ~Vtb_baseline_line_tracker___024root();
    VL_UNCOPYABLE(Vtb_baseline_line_tracker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
