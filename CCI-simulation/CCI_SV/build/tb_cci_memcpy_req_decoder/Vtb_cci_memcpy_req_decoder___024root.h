// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_memcpy_req_decoder.h for the primary calling header

#ifndef VERILATED_VTB_CCI_MEMCPY_REQ_DECODER___024ROOT_H_
#define VERILATED_VTB_CCI_MEMCPY_REQ_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_memcpy_req_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_memcpy_req_decoder___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_memcpy_req_decoder__DOT__req_valid;
    CData/*6:0*/ tb_cci_memcpy_req_decoder__DOT__req_line_count;
    CData/*0:0*/ tb_cci_memcpy_req_decoder__DOT__dec_valid;
    CData/*0:0*/ tb_cci_memcpy_req_decoder__DOT__req_error;
    CData/*5:0*/ __Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx;
    CData/*0:0*/ __Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page;
    CData/*0:0*/ __Vfunc_cci_range_fits_page__17__Vfuncout;
    CData/*6:0*/ __Vfunc_cci_range_fits_page__17__line_count;
    CData/*0:0*/ __Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count;
    CData/*5:0*/ __Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx;
    CData/*7:0*/ __Vfunc_cci_range_fits_page__17__end_line;
    CData/*5:0*/ __Vfunc_cci_line_idx__18__Vfuncout;
    CData/*0:0*/ __Vfunc_cci_valid_line_count__19__Vfuncout;
    CData/*6:0*/ __Vfunc_cci_valid_line_count__19__line_count;
    CData/*6:0*/ __Vfunc_cci_contiguous_mask__20__line_count;
    CData/*5:0*/ __Vfunc_cci_line_idx__21__Vfuncout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_cci_memcpy_req_decoder__DOT__req_base_addr;
    QData/*63:0*/ tb_cci_memcpy_req_decoder__DOT__req_line_mask;
    QData/*63:0*/ tb_cci_memcpy_req_decoder__DOT__dec_line_mask;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__16__Vfuncout;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask;
    QData/*63:0*/ __Vfunc_cci_range_fits_page__17__base_addr;
    QData/*63:0*/ __Vfunc_cci_line_idx__18__addr;
    QData/*63:0*/ __Vfunc_cci_contiguous_mask__20__Vfuncout;
    QData/*63:0*/ __Vfunc_cci_line_idx__21__addr;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__label;
    std::string __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__label;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_cci_memcpy_req_decoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_memcpy_req_decoder___024root(Vtb_cci_memcpy_req_decoder__Syms* symsp, const char* namep);
    ~Vtb_cci_memcpy_req_decoder___024root();
    VL_UNCOPYABLE(Vtb_cci_memcpy_req_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
