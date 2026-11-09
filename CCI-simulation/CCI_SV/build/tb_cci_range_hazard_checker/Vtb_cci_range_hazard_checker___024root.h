// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_range_hazard_checker.h for the primary calling header

#ifndef VERILATED_VTB_CCI_RANGE_HAZARD_CHECKER___024ROOT_H_
#define VERILATED_VTB_CCI_RANGE_HAZARD_CHECKER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_range_hazard_checker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_range_hazard_checker___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_range_hazard_checker__DOT__probe_valid;
    CData/*3:0*/ tb_cci_range_hazard_checker__DOT__probe_source_id;
    CData/*0:0*/ tb_cci_range_hazard_checker__DOT__probe_hazard;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<6>/*186:0*/ tb_cci_range_hazard_checker__DOT__entry;
    QData/*63:0*/ tb_cci_range_hazard_checker__DOT__probe_addr;
    QData/*63:0*/ tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__2__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__5__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__8__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__11__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__14__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__16__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__19__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__21__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__24__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__26__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__29__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__31__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__34__test_name;
    std::string __Vtask_tb_cci_range_hazard_checker__DOT__check__37__test_name;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_cci_range_hazard_checker__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_range_hazard_checker___024root(Vtb_cci_range_hazard_checker__Syms* symsp, const char* namep);
    ~Vtb_cci_range_hazard_checker___024root();
    VL_UNCOPYABLE(Vtb_cci_range_hazard_checker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
