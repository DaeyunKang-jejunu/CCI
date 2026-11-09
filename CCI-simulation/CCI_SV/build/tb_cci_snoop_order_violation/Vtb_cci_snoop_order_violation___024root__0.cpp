// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_snoop_order_violation.h for the primary calling header

#include "Vtb_cci_snoop_order_violation__pch.h"

VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_snoop_order_violation___024root* vlSelf);
VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_snoop_order_violation___024root* vlSelf);
VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_snoop_order_violation___024root* vlSelf);

void Vtb_cci_snoop_order_violation___024root___eval_initial(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__clk = 0U;
    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000007a120ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                         27);
    VL_WRITEF_NX("FAIL  CR-before-AC $fatal did not fire within 50 cycles \342\200\224 assertion missing or disabled\n",0);
    VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 30, "");
    co_return;
}

void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__seq_start = 0U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_valid = 0U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_gen_done = 0U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_resp = 0U;
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                         62);
    vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n = 1U;
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                         64);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(vlSelf, 
                                                                        "@(negedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd0449e4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         67);
    vlSelfRef.tb_cci_snoop_order_violation__DOT__seq_start = 1U;
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         69);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                         69);
    vlSelfRef.tb_cci_snoop_order_violation__DOT__seq_start = 0U;
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(vlSelf, 
                                                                        "@(negedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd0449e4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         73);
    vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid = 1U;
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                                         75);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                         75);
    vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid = 0U;
    VL_WRITEF_NX("FAIL  CR-before-AC $fatal did not fire after CR stimulus\n",0);
    VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 81, "");
    co_return;
}

VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 
                                             20);
        vlSelfRef.tb_cci_snoop_order_violation__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__act(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__rst_n__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n;
}

bool Vtb_cci_snoop_order_violation___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_snoop_order_violation___024root___act_comb__TOP__0(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___act_comb__TOP__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                             & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))));
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_valid) 
           & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_ready));
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted))));
}

void Vtb_cci_snoop_order_violation___024root___eval_act(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_act\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                              + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                 & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))));
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted 
            = ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_valid) 
               & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_ready));
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r) 
                              + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                                 & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted))));
    }
}

void Vtb_cci_snoop_order_violation___024root___nba_sequent__TOP__0(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                       & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid)) 
                      & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                                         + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                            & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r)))) 
                         > (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_snoop_order_violation.dut", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))))
                     , '#',7,(IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next));
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
    }
}

void Vtb_cci_snoop_order_violation___024root___nba_sequent__TOP__1(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 0;
    CData/*6:0*/ __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0;
    CData/*6:0*/ __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0;
    CData/*0:0*/ __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0;
    CData/*0:0*/ __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0;
    // Body
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
    if (vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n) {
        if ((((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
              & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid)) 
             & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_resp) 
                >> 1U))) {
            __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 1U;
        }
        if (vlSelfRef.tb_cci_snoop_order_violation__DOT__seq_start) {
            __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
            __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
            __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
            __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 1U;
        } else if (vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) {
            if (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                 & (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r) 
                     | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_gen_done) 
                        & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))) 
                    & ((~ ((0U == (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next)) 
                           | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r) 
                              | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                                 & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                    & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_resp) 
                                       >> 1U)))))) 
                       & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next) 
                          == (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next)))))) {
                __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0U;
                __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
                __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
                __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
            } else {
                if (vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted) {
                    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r)));
                }
                if (vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) {
                    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r)));
                }
                if (vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_gen_done) {
                    __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 1U;
                }
            }
        }
    } else {
        __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
        __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
        __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
        __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0U;
        __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 0U;
    }
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r 
        = __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r 
        = __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
        = __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
        = __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r 
        = __Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
}

void Vtb_cci_snoop_order_violation___024root___nba_comb__TOP__0(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_valid) 
           & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_ready));
}

void Vtb_cci_snoop_order_violation___024root___nba_comb__TOP__1(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                             & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))));
    vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted))));
}

void Vtb_cci_snoop_order_violation___024root___eval_nba(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_nba\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 0;
    CData/*6:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0;
    CData/*6:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                           & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid)) 
                          & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r)))) 
                             > (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_snoop_order_violation.dut", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                                  & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))))
                         , '#',7,(IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next));
            VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r 
            = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r 
            = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
            = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
            = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r 
            = vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
        if (vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n) {
            if ((((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid)) 
                 & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_resp) 
                    >> 1U))) {
                __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 1U;
            }
            if (vlSelfRef.tb_cci_snoop_order_violation__DOT__seq_start) {
                __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 1U;
            } else if (vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) {
                if (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                     & (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r) 
                         | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_gen_done) 
                            & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))) 
                        & ((~ ((0U == (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next)) 
                               | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r) 
                                  | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                                     & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                        & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_resp) 
                                           >> 1U)))))) 
                           & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next) 
                              == (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next)))))) {
                    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0U;
                    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
                    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
                    __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
                } else {
                    if (vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted) {
                        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r)));
                    }
                    if (vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) {
                        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r)));
                    }
                    if (vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_gen_done) {
                        __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 1U;
                    }
                }
            }
        } else {
            __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = 0U;
        }
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r 
            = __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r 
            = __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r 
            = __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r 
            = __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r 
            = __Vinline__nba_sequent__TOP__1___Vdly__tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted 
            = ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_valid) 
               & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__ac_ready));
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r) 
                              + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__cr_valid) 
                                 & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r))));
        vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r) 
                              + ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__active_r) 
                                 & (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted))));
    }
}

void Vtb_cci_snoop_order_violation___024root___timing_ready(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___timing_ready\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready("@(posedge tb_cci_snoop_order_violation.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd0449e4c__0.ready("@(negedge tb_cci_snoop_order_violation.clk)");
    }
}

void Vtb_cci_snoop_order_violation___024root___timing_resume(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___timing_resume\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd044919e__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_snoop_order_violation.clk)");
    vlSelfRef.__VtrigSched_hd0449e4c__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_snoop_order_violation.clk)");
    vlSelfRef.__VtrigSched_hd044919e__0.resume("@(posedge tb_cci_snoop_order_violation.clk)");
    vlSelfRef.__VtrigSched_hd0449e4c__0.resume("@(negedge tb_cci_snoop_order_violation.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_snoop_order_violation___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_snoop_order_violation___024root___eval_phase__act(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_phase__act\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_snoop_order_violation___024root___timing_ready(vlSelf);
    Vtb_cci_snoop_order_violation___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_snoop_order_violation___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_snoop_order_violation___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_snoop_order_violation___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_snoop_order_violation___024root___timing_resume(vlSelf);
        Vtb_cci_snoop_order_violation___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_snoop_order_violation___024root___eval_phase__inact(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_phase__inact\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 14, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_snoop_order_violation___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_snoop_order_violation___024root___eval_phase__nba(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_phase__nba\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_snoop_order_violation___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_snoop_order_violation___024root___eval_nba(vlSelf);
        Vtb_cci_snoop_order_violation___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_snoop_order_violation___024root___eval(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_snoop_order_violation___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_snoop_order_violation___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_snoop_order_violation___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_snoop_order_violation___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_snoop_order_violation___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd0449e4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd0449e4c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd0449e4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd0449e4c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cci_snoop_order_violation___024root___eval_debug_assertions(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_debug_assertions\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
