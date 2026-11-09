// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_write_completion_tracker.h for the primary calling header

#ifndef VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER___024ROOT_H_
#define VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cci_write_completion_tracker___024unit;


class Vtb_cci_write_completion_tracker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_write_completion_tracker___024root final {
  public:
    // CELLS
    Vtb_cci_write_completion_tracker___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__clk;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__rst_n;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__aw_valid;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__aw_ready;
    CData/*3:0*/ tb_cci_write_completion_tracker__DOT__awid;
    CData/*1:0*/ tb_cci_write_completion_tracker__DOT__aw_track_type;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__b_valid;
    CData/*3:0*/ tb_cci_write_completion_tracker__DOT__bid;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__wr_done_valid;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    CData/*1:0*/ tb_cci_write_completion_tracker__DOT__wr_done_type;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__overflow_sticky;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__underflow_sticky;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_i;
    CData/*1:0*/ tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_t;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i;
    CData/*1:0*/ tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_i;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i;
    CData/*1:0*/ tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v;
    CData/*5:0*/ tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_1_1;
    CData/*0:0*/ tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_3_1;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker__DOT__overflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker__DOT__underflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_write_completion_tracker__DOT__rst_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_cci_write_completion_tracker__DOT__aw_full;
    IData/*31:0*/ tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id;
    IData/*31:0*/ tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_cci_write_completion_tracker__DOT__awaddr;
    VlUnpacked<IData/*31:0*/, 16> tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt;
    VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__fifo;
    VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr;
    VlUnpacked<CData/*2:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__depth;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__push;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__pop;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_write_completion_tracker__DOT__dut__DOT__push_block;
    VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__label;
    std::string __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h85faadb8__0;
    VlTriggerScheduler __VtrigSched_h85faaa72__0;
    VlUnpacked<VlQueue<IData/*31:0*/>, 16> tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q;

    // INTERNAL VARIABLES
    Vtb_cci_write_completion_tracker__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_write_completion_tracker___024root(Vtb_cci_write_completion_tracker__Syms* symsp, const char* namep);
    ~Vtb_cci_write_completion_tracker___024root();
    VL_UNCOPYABLE(Vtb_cci_write_completion_tracker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
