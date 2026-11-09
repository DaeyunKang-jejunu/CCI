// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_ac_range_gen.h for the primary calling header

#ifndef VERILATED_VTB_CCI_AC_RANGE_GEN___024ROOT_H_
#define VERILATED_VTB_CCI_AC_RANGE_GEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_ac_range_gen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_ac_range_gen___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__clk;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__rst_n;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__start;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__ac_valid;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__ac_ready;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__ac_gen_done;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__dut__DOT__busy;
    CData/*5:0*/ tb_cci_ac_range_gen__DOT__dut__DOT__current_idx;
    CData/*0:0*/ tb_cci_ac_range_gen__DOT__dut__DOT__is_last;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*51:0*/ tb_cci_ac_range_gen__DOT__start_page_addr;
    QData/*63:0*/ tb_cci_ac_range_gen__DOT__start_line_mask;
    QData/*51:0*/ tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r;
    QData/*63:0*/ tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__label;
    std::string __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h62a9b322__0;
    VlTriggerScheduler __VtrigSched_h62a9b3e8__0;

    // INTERNAL VARIABLES
    Vtb_cci_ac_range_gen__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_ac_range_gen___024root(Vtb_cci_ac_range_gen__Syms* symsp, const char* namep);
    ~Vtb_cci_ac_range_gen___024root();
    VL_UNCOPYABLE(Vtb_cci_ac_range_gen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
