// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_existing_system.h for the primary calling header

#ifndef VERILATED_VTB_CCI_EXISTING_SYSTEM___024ROOT_H_
#define VERILATED_VTB_CCI_EXISTING_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_existing_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_existing_system___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_existing_system__DOT__clk;
    CData/*0:0*/ tb_cci_existing_system__DOT__rst_n;
    CData/*0:0*/ tb_cci_existing_system__DOT__req_valid;
    CData/*3:0*/ tb_cci_existing_system__DOT__req_source_id;
    CData/*3:0*/ tb_cci_existing_system__DOT__awid;
    CData/*0:0*/ tb_cci_existing_system__DOT__aw_valid;
    CData/*0:0*/ tb_cci_existing_system__DOT__aw_ready;
    CData/*1:0*/ tb_cci_existing_system__DOT__aw_track_type;
    CData/*3:0*/ tb_cci_existing_system__DOT__bid;
    CData/*0:0*/ tb_cci_existing_system__DOT__b_valid;
    CData/*0:0*/ tb_cci_existing_system__DOT__probe_valid;
    CData/*3:0*/ tb_cci_existing_system__DOT__probe_source_id;
    CData/*0:0*/ tb_cci_existing_system__DOT__normal_req_error;
    CData/*0:0*/ tb_cci_existing_system__DOT__overflow_sticky;
    CData/*0:0*/ tb_cci_existing_system__DOT__underflow_sticky;
    CData/*5:0*/ tb_cci_existing_system__DOT__dut__DOT__wr_done_line_idx;
    CData/*0:0*/ tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1;
    CData/*0:0*/ tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1;
    CData/*0:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    CData/*0:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone;
    CData/*0:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match;
    CData/*3:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_existing_system__DOT__overflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_existing_system__DOT__underflow_sticky;
    CData/*0:0*/ __Vsampled_TOP__tb_cci_existing_system__DOT__rst_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_cci_existing_system__DOT__aw_full_mask;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_cci_existing_system__DOT__req_base_addr;
    QData/*63:0*/ tb_cci_existing_system__DOT__req_line_mask;
    QData/*63:0*/ tb_cci_existing_system__DOT__awaddr;
    QData/*63:0*/ tb_cci_existing_system__DOT__probe_addr;
    QData/*51:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr;
    QData/*51:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__current_page;
    QData/*57:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr;
    QData/*63:0*/ __Vfunc_cci_page_addr__138__addr;
    VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo;
    VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr;
    VlUnpacked<CData/*1:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr;
    VlUnpacked<CData/*2:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok;
    VlUnpacked<CData/*0:0*/, 16> tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block;
    VlUnpacked<QData/*63:0*/, 4> tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries;
    VlUnpacked<QData/*63:0*/, 4> tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e;
    VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__2__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__5__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__12__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__17__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__19__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__20__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__21__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__27__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__32__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__34__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__39__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__40__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__46__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__51__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__59__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__60__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__65__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__74__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__75__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__78__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__87__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__90__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__92__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__94__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__96__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__97__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__99__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__104__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__105__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__107__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__109__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__114__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__119__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__120__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__121__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__125__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__126__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__127__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__128__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__129__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__133__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__134__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__135__label;
    std::string __Vtask_tb_cci_existing_system__DOT__check_bit__136__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h04344311__0;
    VlTriggerScheduler __VtrigSched_h043443b9__0;

    // INTERNAL VARIABLES
    Vtb_cci_existing_system__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_existing_system___024root(Vtb_cci_existing_system__Syms* symsp, const char* namep);
    ~Vtb_cci_existing_system___024root();
    VL_UNCOPYABLE(Vtb_cci_existing_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
