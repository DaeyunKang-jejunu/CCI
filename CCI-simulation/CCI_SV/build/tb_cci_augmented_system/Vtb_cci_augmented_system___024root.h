// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_augmented_system.h for the primary calling header

#ifndef VERILATED_VTB_CCI_AUGMENTED_SYSTEM___024ROOT_H_
#define VERILATED_VTB_CCI_AUGMENTED_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_augmented_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_augmented_system___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cci_augmented_system__DOT__clk;
        CData/*0:0*/ tb_cci_augmented_system__DOT__rst_n;
        CData/*0:0*/ tb_cci_augmented_system__DOT__req_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__req_ready;
        CData/*1:0*/ tb_cci_augmented_system__DOT__req_type;
        CData/*3:0*/ tb_cci_augmented_system__DOT__req_source_id;
        CData/*6:0*/ tb_cci_augmented_system__DOT__req_line_count;
        CData/*0:0*/ tb_cci_augmented_system__DOT__req_error;
        CData/*0:0*/ tb_cci_augmented_system__DOT__ac_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__ac_ready;
        CData/*0:0*/ tb_cci_augmented_system__DOT__cr_valid;
        CData/*4:0*/ tb_cci_augmented_system__DOT__cr_resp;
        CData/*3:0*/ tb_cci_augmented_system__DOT__awid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__aw_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__aw_ready;
        CData/*1:0*/ tb_cci_augmented_system__DOT__aw_track_type;
        CData/*3:0*/ tb_cci_augmented_system__DOT__bid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__b_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__probe_valid;
        CData/*3:0*/ tb_cci_augmented_system__DOT__probe_source_id;
        CData/*0:0*/ tb_cci_augmented_system__DOT__memcpy_probe_hazard;
        CData/*0:0*/ tb_cci_augmented_system__DOT__probe_hazard;
        CData/*0:0*/ tb_cci_augmented_system__DOT__normal_req_error;
        CData/*0:0*/ tb_cci_augmented_system__DOT__overflow_sticky;
        CData/*0:0*/ tb_cci_augmented_system__DOT__underflow_sticky;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid;
        CData/*5:0*/ tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx;
        CData/*1:0*/ tb_cci_augmented_system__DOT__dut__DOT__wr_done_type;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match;
        CData/*3:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy;
        CData/*5:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last;
        CData/*6:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r;
        CData/*6:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r;
        CData/*0:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted;
        CData/*6:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next;
        CData/*5:0*/ __Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx;
        CData/*0:0*/ __Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__178__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_range_fits_page__178__line_count;
        CData/*0:0*/ __Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count;
        CData/*5:0*/ __Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx;
        CData/*7:0*/ __Vfunc_cci_range_fits_page__178__end_line;
        CData/*5:0*/ __Vfunc_cci_line_idx__179__Vfuncout;
        CData/*0:0*/ __Vfunc_cci_valid_line_count__180__Vfuncout;
        CData/*6:0*/ __Vfunc_cci_valid_line_count__180__line_count;
        CData/*6:0*/ __Vfunc_cci_contiguous_mask__181__line_count;
        CData/*5:0*/ __Vfunc_cci_line_idx__182__Vfuncout;
    };
    struct {
        CData/*0:0*/ __Vsampled_TOP__tb_cci_augmented_system__DOT__overflow_sticky;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_augmented_system__DOT__underflow_sticky;
        CData/*0:0*/ __Vsampled_TOP__tb_cci_augmented_system__DOT__rst_n;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_cci_augmented_system__DOT__test_T02__Vstatic__cnt;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb_cci_augmented_system__DOT__req_base_addr;
        QData/*63:0*/ tb_cci_augmented_system__DOT__req_line_mask;
        QData/*63:0*/ tb_cci_augmented_system__DOT__awaddr;
        QData/*63:0*/ tb_cci_augmented_system__DOT__probe_addr;
        QData/*51:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr;
        QData/*51:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page;
        QData/*57:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr;
        QData/*63:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask;
        QData/*63:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w;
        VlWide<6>/*186:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r;
        QData/*63:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask;
        QData/*63:0*/ __Vfunc_cci_page_addr__174__addr;
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask;
        QData/*63:0*/ __Vfunc_cci_range_fits_page__178__base_addr;
        QData/*63:0*/ __Vfunc_cci_line_idx__179__addr;
        QData/*63:0*/ __Vfunc_cci_contiguous_mask__181__Vfuncout;
        QData/*63:0*/ __Vfunc_cci_line_idx__182__addr;
        VlUnpacked<VlUnpacked<CData/*5:0*/, 4>, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr;
        VlUnpacked<CData/*1:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr;
        VlUnpacked<CData/*2:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok;
        VlUnpacked<CData/*0:0*/, 16> tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block;
        VlUnpacked<QData/*63:0*/, 4> tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries;
        VlUnpacked<QData/*63:0*/, 4> tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e;
        VlUnpacked<CData/*2:0*/, 16> __Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__2__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__3__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__6__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__7__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__12__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__17__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__18__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__19__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__22__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__25__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__26__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__27__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__29__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__30__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__32__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__37__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__42__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__43__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__48__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__51__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__52__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__55__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__64__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__65__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__74__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__75__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__84__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__90__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__91__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__93__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__101__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__102__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__107__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__113__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__114__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__115__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__132__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__133__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__134__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__140__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__145__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__150__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__151__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__156__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__161__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__162__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__163__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__167__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__168__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__169__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__170__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__171__label;
    std::string __Vtask_tb_cci_augmented_system__DOT__check_bit__172__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbde63173__0;
    VlTriggerScheduler __VtrigSched_hbde63e1f__0;

    // INTERNAL VARIABLES
    Vtb_cci_augmented_system__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_augmented_system___024root(Vtb_cci_augmented_system__Syms* symsp, const char* namep);
    ~Vtb_cci_augmented_system___024root();
    VL_UNCOPYABLE(Vtb_cci_augmented_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
