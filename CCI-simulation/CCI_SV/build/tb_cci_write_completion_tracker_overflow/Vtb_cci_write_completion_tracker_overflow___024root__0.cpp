// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_write_completion_tracker_overflow.h for the primary calling header

#include "Vtb_cci_write_completion_tracker_overflow__pch.h"

VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);
VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

void Vtb_cci_write_completion_tracker_overflow___024root___eval_initial(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk = 0U;
    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000001312d00ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                         43);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_write_completion_tracker_overflow.sv:44: Assertion failed in %m: WATCHDOG: overflow test exceeded 2000 cycles\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 44, "", false);
    co_return;
}

void Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ tb_cci_write_completion_tracker_overflow__DOT____VlemCall_1__make_addr;
    IData/*31:0*/ tb_cci_write_completion_tracker_overflow__DOT__pass_count;
    tb_cci_write_completion_tracker_overflow__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_write_completion_tracker_overflow__DOT__fail_count;
    tb_cci_write_completion_tracker_overflow__DOT__fail_count = 0;
    IData/*31:0*/ tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i;
    tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__exp = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__3__line_idx;
    __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__3__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__id;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__addr;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__exp = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__6__line_idx;
    __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__6__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__id;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__addr;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__id;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_valid;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_idx;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__got;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__exp;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__exp = 0;
    // Body
    tb_cci_write_completion_tracker_overflow__DOT__pass_count = 0U;
    tb_cci_write_completion_tracker_overflow__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         129);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                         129);
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         131);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                         131);
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__label = "OVF-00 overflow_sticky=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__1__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__label = "OVF-00 underflow_sticky=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__2__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__3__line_idx 
            = tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT____VlemCall_0__make_addr = 0;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT____VlemCall_0__make_addr 
            = (0x0000000000004000ULL | (QData)((IData)(
                                                       (0x00000fc0U 
                                                        & (__Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__3__line_idx 
                                                           << 6U)))));
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__addr 
            = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT____VlemCall_0__make_addr;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__id = 0U;
        Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker_overflow.clk)");
        co_await vlSelfRef.__VtrigSched_h8b20c589__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                             135);
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = 2U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid 
            = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__id;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
            = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__4__addr;
        Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
        co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                             137);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                             137);
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = 0U;
        tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__label = "OVF-01 overflow_sticky=0 before overflow"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__5__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    VL_WRITEF_NX("NOTE: intentional overflow follows \342\200\224 $warning below is expected:\n",0);
    __Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__6__line_idx = 0x0000003fU;
    tb_cci_write_completion_tracker_overflow__DOT____VlemCall_1__make_addr = 0;
    tb_cci_write_completion_tracker_overflow__DOT____VlemCall_1__make_addr 
        = (0x0000000000004000ULL | (QData)((IData)(
                                                   (0x00000fc0U 
                                                    & (__Vfunc_tb_cci_write_completion_tracker_overflow__DOT__make_addr__6__line_idx 
                                                       << 6U)))));
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__addr 
        = tb_cci_write_completion_tracker_overflow__DOT____VlemCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__id = 0U;
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c589__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         135);
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__id;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_aw__7__addr;
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         137);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                         137);
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__label = "OVF-02 overflow_sticky=1 after blocked push"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__8__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i)) {
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__id = 0U;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_valid = 0;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_idx = 0;
        Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker_overflow.clk)");
        co_await vlSelfRef.__VtrigSched_h8b20c589__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                             147);
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid 
            = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__id;
        Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
        co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                             149);
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_valid 
            = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_idx 
            = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_line_idx;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                             152);
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_v 
            = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_valid;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_i 
            = __Vtask_tb_cci_write_completion_tracker_overflow__DOT__do_b__9__got_idx;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__exp = 1U;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__got 
            = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_v;
        vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__label 
            = VL_SFORMATF_N_NX("OVF-03.%0d valid=1",1
                               , '~',32,tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i) ;
        if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__got) 
             == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__label));
            tb_cci_write_completion_tracker_overflow__DOT__pass_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__label)
                         , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__exp)
                         , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__10__got);
            tb_cci_write_completion_tracker_overflow__DOT__fail_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
        }
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__exp 
            = tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i;
        __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__got 
            = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_i;
        vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__label 
            = VL_SFORMATF_N_NX("OVF-03.%0d idx=%0d",2
                               , '~',32,tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i
                               , '~',32,tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i) ;
        if ((__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__got 
             == __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__label));
            tb_cci_write_completion_tracker_overflow__DOT__pass_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__label)
                         , '~',32,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__exp
                         , '~',32,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_int__11__got);
            tb_cci_write_completion_tracker_overflow__DOT__fail_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
        }
        tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i);
    }
    VL_WRITEF_NX("NOTE: intentional underflow follows \342\200\224 $warning below is expected:\n",0);
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c589__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         192);
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    co_await vlSelfRef.__VtrigSched_h8b20c4e1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker_overflow.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                                         194);
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__label = "OVF-04 wr_done_valid=0 (empty FIFO)"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__12__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                         196);
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid = 0U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__got 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__label = "OVF-05 underflow_sticky=1 after B to empty"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__label));
        tb_cci_write_completion_tracker_overflow__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker_overflow__DOT__check_bit__13__got);
        tb_cci_write_completion_tracker_overflow__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nOverflow/underflow test: %0d passed, %0d failed\nNOTE: the $warning messages above (from RTL) are the expected behavior.\n",2
                 , '~',32,tb_cci_write_completion_tracker_overflow__DOT__pass_count
                 , '~',32,tb_cci_write_completion_tracker_overflow__DOT__fail_count);
    if ((0U == tb_cci_write_completion_tracker_overflow__DOT__fail_count)) {
        VL_WRITEF_NX("Overflow and underflow protection VERIFIED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 204, "");
    } else {
        VL_WRITEF_NX("FAILURES detected.\n[%0t] %%Fatal: tb_cci_write_completion_tracker_overflow.sv:207: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.unnamedblk1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_write_completion_tracker_overflow__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 207, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 
                                             33);
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__act(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n;
}

bool Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_cci_write_completion_tracker_overflow___024root___act_comb__TOP__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___act_comb__TOP__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth
               [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U])));
}

void Vtb_cci_write_completion_tracker_overflow___024root___eval_act(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_act\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_write_completion_tracker_overflow___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:136: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 136, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:137: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 137, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[0]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[1]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[2]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[3]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[4]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[5]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[6]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[7]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[8]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[9]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[10]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[11]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[12]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[13]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[14]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.gen_sva_depth[15]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
        }
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[0U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=0 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[1U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=1 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[2U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=2 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[3U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=3 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[4U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=4 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[5U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=5 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[6U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=6 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[7U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=7 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[8U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=8 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[9U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=9 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[10U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=10 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[11U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=11 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[12U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=12 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[13U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=13 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[14U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=14 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[15U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=15 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
                      & (0U == vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth
                         [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]))))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:152: %m: %m: B response for AWID=%0d arrived with empty FIFO \342\200\224 underflow; B cannot be matched to any AW\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker_overflow.dut", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid));
    }
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky));
}

void Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__1(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v0;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v0 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v1;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v1 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v2;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v2 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v3;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v3 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v4;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v4 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v5;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v5 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v6;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v6 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v7;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v7 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v8;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v8 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v9;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v9 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v10;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v10 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v11;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v11 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v12;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v12 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v13;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v13 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v14;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v14 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15;
    __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v15;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v16;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v16 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v16;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31;
    __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v32;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v32 = 0;
    // Body
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v32 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 = 0U;
    if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n) {
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[0U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[1U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[2U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[3U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[4U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[5U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[6U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[7U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[8U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[9U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[10U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[11U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[12U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[13U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[14U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[15U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[0U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[0U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[0U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[1U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[1U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[1U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[2U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[2U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[2U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[3U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[3U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[3U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[4U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[4U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[4U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[5U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[5U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[5U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[6U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[6U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[6U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[7U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[7U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[7U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[8U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[8U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[8U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[9U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[9U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[9U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[10U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[10U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[10U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[11U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[11U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[11U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[12U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[12U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[12U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[13U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[13U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[13U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[14U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[14U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[14U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U]) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[15U];
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[15U];
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[15U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[0U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[1U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[2U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[3U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[4U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[5U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[6U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[7U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[8U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[9U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[10U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[11U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[12U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[13U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[14U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[15U]) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 1U;
        }
        if (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
             & (0U == vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth
                [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]))) {
            vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U])))) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U])));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U])) {
            __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31 = 1U;
        }
    } else {
        __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v16 = 1U;
        __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v16 = 1U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky = 0U;
        __VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v32 = 1U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr__v16) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v0;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[0U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v0;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[0U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v1;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[1U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v1;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[1U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v2;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[2U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v2;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[2U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v3;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[3U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v3;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[3U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v4;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[4U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v4;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[4U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v5;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[5U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v5;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[5U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v6;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[6U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v6;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[6U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v7;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[7U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v7;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[7U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v8;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[8U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v8;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[8U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v9;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[9U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v9;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[9U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v10;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[10U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v10;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[10U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v11;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[11U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v11;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[11U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v12;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[12U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v12;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[12U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v13;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[13U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v13;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[13U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v14;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[14U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v14;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[14U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v15;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[15U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo__v15;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[15U][__VdlyDim0__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr__v16) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v16;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v17;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v18;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v19;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v20;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v21;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v22;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v23;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v24;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v25;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v26;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v27;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v28;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v29;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v30;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v31;
    }
    if (__VdlySet__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth__v32) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U] = 0U;
    }
}

void Vtb_cci_write_completion_tracker_overflow___024root___nba_comb__TOP__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
}

void Vtb_cci_write_completion_tracker_overflow___024root___nba_comb__TOP__1(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth
               [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr
              [vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid]]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[0U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[1U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[2U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[3U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[4U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[5U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[6U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[7U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[8U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[9U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[10U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[11U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[12U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[13U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[14U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[15U]));
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[15U])));
}

void Vtb_cci_write_completion_tracker_overflow___024root___eval_nba(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_nba\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker_overflow___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[0U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[1U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[2U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[3U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[4U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[5U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[6U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[7U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[8U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[9U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[10U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[11U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[12U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[13U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[14U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[15U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__aw_ready)) 
               & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__awid)));
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker_overflow___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_cci_write_completion_tracker_overflow___024root___timing_ready(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___timing_ready\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready("@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8b20c589__0.ready("@(negedge tb_cci_write_completion_tracker_overflow.clk)");
    }
}

void Vtb_cci_write_completion_tracker_overflow___024root___timing_resume(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___timing_resume\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8b20c4e1__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    vlSelfRef.__VtrigSched_h8b20c589__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_write_completion_tracker_overflow.clk)");
    vlSelfRef.__VtrigSched_h8b20c4e1__0.resume("@(posedge tb_cci_write_completion_tracker_overflow.clk)");
    vlSelfRef.__VtrigSched_h8b20c589__0.resume("@(negedge tb_cci_write_completion_tracker_overflow.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_write_completion_tracker_overflow___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__act(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__act\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_write_completion_tracker_overflow___024root___timing_ready(vlSelf);
    Vtb_cci_write_completion_tracker_overflow___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_write_completion_tracker_overflow___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_write_completion_tracker_overflow___024root___timing_resume(vlSelf);
        Vtb_cci_write_completion_tracker_overflow___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__inact(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__inact\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 25, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_write_completion_tracker_overflow___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__nba(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__nba\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_write_completion_tracker_overflow___024root___eval_nba(vlSelf);
        Vtb_cci_write_completion_tracker_overflow___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_write_completion_tracker_overflow___024root___sample(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

void Vtb_cci_write_completion_tracker_overflow___024root___eval(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vtb_cci_write_completion_tracker_overflow___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 25, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 25, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 25, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c4e1__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root____VbeforeTrig_h8b20c589__0\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c4e1__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b20c589__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_write_completion_tracker_overflow___024root___sample(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___sample\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n;
}

#ifdef VL_DEBUG
void Vtb_cci_write_completion_tracker_overflow___024root___eval_debug_assertions(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_debug_assertions\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
