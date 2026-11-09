// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_write_completion_tracker_overflow.h for the primary calling header

#ifndef VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER_OVERFLOW___024ROOT_H_
#define VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER_OVERFLOW___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_write_completion_tracker_overflow__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_write_completion_tracker_overflow___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__clk;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__rst_n;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__aw_valid;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__aw_ready;
    CData/*3:0*/ tb_cci_write_completion_tracker_overflow__DOT__awid;
    CData/*1:0*/ tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__b_valid;
    CData/*3:0*/ tb_cci_write_completion_tracker_overflow__DOT__bid;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid;
    CData/*5:0*/ tb_cci_write_completion_tracker_overflow__DOT__wr_done_line_idx;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_i;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_1_1;
    CData/*0:0*/ tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_3_1;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_cci_write_completion_tracker_overflow__DOT____VlemCall_0__make_addr;
    QData/*63:0*/ tb_cci_write_completion_tracker_overflow__DOT__awaddr;
    VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo;
    VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr;
    VlUnpacked<CData/*2:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block;
    VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__label;
    std::string __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8b20c4e1__0;
    VlTriggerScheduler __VtrigSched_h8b20c589__0;

    // INTERNAL VARIABLES
    Vtb_cci_write_completion_tracker_overflow__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_write_completion_tracker_overflow___024root(Vtb_cci_write_completion_tracker_overflow__Syms* symsp, const char* namep);
    ~Vtb_cci_write_completion_tracker_overflow___024root();
    VL_UNCOPYABLE(Vtb_cci_write_completion_tracker_overflow___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
