// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_snoop_order_violation.h for the primary calling header

#include "Vtb_cci_snoop_order_violation__pch.h"

void Vtb_cci_snoop_order_violation___024root___timing_ready(Vtb_cci_snoop_order_violation___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_static(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_static\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__rst_n__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__rst_n;
    Vtb_cci_snoop_order_violation___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_initial__TOP(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_snoop_order_violation__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_final(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_final\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_snoop_order_violation___024root___eval_phase__stl(Vtb_cci_snoop_order_violation___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_settle(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_settle\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_snoop_order_violation___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_snoop_order_violation___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__stl(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_snoop_order_violation___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_snoop_order_violation___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_snoop_order_violation___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___eval_stl(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_stl\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool Vtb_cci_snoop_order_violation___024root___eval_phase__stl(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_phase__stl\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_snoop_order_violation___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_snoop_order_violation___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_snoop_order_violation___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_snoop_order_violation___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_snoop_order_violation___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_snoop_order_violation___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_snoop_order_violation.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_snoop_order_violation.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_snoop_order_violation.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_snoop_order_violation___024root___ctor_var_reset(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___ctor_var_reset\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_snoop_order_violation__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11300295752680880962ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16576237150441648970ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__seq_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3857813932833011270ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__ac_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12411807838293996227ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__ac_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14929578035699847985ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__ac_gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10883443947946374625ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__cr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12258436490884336591ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__cr_resp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16045358939667326182ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4303007067308218387ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13769484474921944495ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17187754648388015672ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__active_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8023001562854085877ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10537891178155146530ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6787462490023991035ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17105999896780503936ull);
    vlSelf->tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16174326437054916382ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
