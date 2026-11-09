// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_memcpy_range_unit.h for the primary calling header

#ifndef VERILATED_VTB_CCI_MEMCPY_RANGE_UNIT___024ROOT_H_
#define VERILATED_VTB_CCI_MEMCPY_RANGE_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_memcpy_range_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_memcpy_range_unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__clk;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__rst_n;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__req_valid;
        CData/*6:0*/ tb_cci_memcpy_range_unit__DOT__req_line_count;
        CData/*3:0*/ tb_cci_memcpy_range_unit__DOT__req_source_id;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__req_error;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__ac_valid;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__ac_ready;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__cr_valid;
        CData/*4:0*/ tb_cci_memcpy_range_unit__DOT__cr_resp;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__wr_done_valid;
        CData/*5:0*/ tb_cci_memcpy_range_unit__DOT__wr_done_line_idx;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__probe_valid;
        CData/*3:0*/ tb_cci_memcpy_range_unit__DOT__probe_source_id;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__probe_hazard;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy;
        CData/*5:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last;
        CData/*6:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r;
        CData/*6:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r;
        CData/*0:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted;
        CData/*6:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next;
        CData/*5:0*/ __Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx;
        CData/*0:0*/ __Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__95__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_range_fits_page__95__line_count;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count;
        CData/*5:0*/ __Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx;
        CData/*7:0*/ __Vfunc_cci_range_fits_page__95__end_line;
        CData/*5:0*/ __Vfunc_cci_line_idx__96__Vfuncout;
        CData/*0:0*/ __Vfunc_cci_valid_line_count__97__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_valid_line_count__97__line_count;
        CData/*6:0*/ __Vfunc_cci_contiguous_mask__98__line_count;
        CData/*5:0*/ __Vfunc_cci_line_idx__99__Vfuncout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__total;
        IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__before_wr;
        IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__test_T07__Vstatic__cnt;
        IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt;
        IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__cycle_cnt;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__req_base_addr;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__req_line_mask;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__probe_addr;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w;
        VlWide<6>/*186:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r;
        QData/*63:0*/ tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask;
    };
    struct {
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__94__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask;
        QData/*63:0*/ __Vfunc_cci_range_fits_page__95__base_addr;
        QData/*63:0*/ __Vfunc_cci_line_idx__96__addr;
        QData/*63:0*/ __Vfunc_cci_contiguous_mask__98__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_line_idx__99__addr;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__label;
    std::string __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9dacf008__0;
    VlTriggerScheduler __VtrigSched_h9dacf0c2__0;

    // INTERNAL VARIABLES
    Vtb_cci_memcpy_range_unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_memcpy_range_unit___024root(Vtb_cci_memcpy_range_unit__Syms* symsp, const char* namep);
    ~Vtb_cci_memcpy_range_unit___024root();
    VL_UNCOPYABLE(Vtb_cci_memcpy_range_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
