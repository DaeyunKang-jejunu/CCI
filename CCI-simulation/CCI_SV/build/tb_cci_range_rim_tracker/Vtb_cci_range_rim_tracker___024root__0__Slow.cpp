// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_range_rim_tracker.h for the primary calling header

#include "Vtb_cci_range_rim_tracker__pch.h"

void Vtb_cci_range_rim_tracker___024root___timing_ready(Vtb_cci_range_rim_tracker___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_static(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_static\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__rst_n__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n;
    Vtb_cci_range_rim_tracker___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_initial__TOP(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_initial__TOP\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_range_rim_tracker__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_final(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_final\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_range_rim_tracker___024root___eval_phase__stl(Vtb_cci_range_rim_tracker___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_settle(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_settle\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_range_rim_tracker___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 23, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_range_rim_tracker___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__stl(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_range_rim_tracker___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_range_rim_tracker___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_range_rim_tracker___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___stl_sequent__TOP__0(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___stl_sequent__TOP__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_range_rim_tracker__DOT__write_release 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
               >> 0x0000001aU)) & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid));
}

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___eval_stl(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_stl\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_cci_range_rim_tracker__DOT__write_release 
            = (IData)((0x05000000U == (0x07000000U 
                                       & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
        vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req 
            = ((~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                   >> 0x0000001aU)) & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid));
    }
}

VL_ATTR_COLD bool Vtb_cci_range_rim_tracker___024root___eval_phase__stl(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_phase__stl\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_range_rim_tracker___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_range_rim_tracker___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_range_rim_tracker___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_range_rim_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_range_rim_tracker___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_range_rim_tracker.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_range_rim_tracker.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_range_rim_tracker.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___ctor_var_reset(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___ctor_var_reset\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_range_rim_tracker__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17601061164365001429ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15817643093348784131ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15288269804249983818ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__req_base_page_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 3328787537745721216ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__req_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12477086177432251830ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__req_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7763923719513234089ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__ac_gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11129706492452789131ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17234227180505047032ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2483120780814777759ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__write_release = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1741864579851678400ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__ac_start_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3328710752199888681ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__inv_done_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8498630371342447646ull);
    VL_SCOPED_RAND_RESET_W(187, vlSelf->tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r, __VscopeHash, 14319708608984517487ull);
    vlSelf->tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810415581134600740ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
