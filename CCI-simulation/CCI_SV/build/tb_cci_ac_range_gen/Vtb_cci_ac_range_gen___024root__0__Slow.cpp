// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_ac_range_gen.h for the primary calling header

#include "Vtb_cci_ac_range_gen__pch.h"

void Vtb_cci_ac_range_gen___024root___timing_ready(Vtb_cci_ac_range_gen___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_static(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_static\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__rst_n__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n;
    Vtb_cci_ac_range_gen___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_initial__TOP(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_initial__TOP\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_ac_range_gen__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_final(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_final\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_ac_range_gen___024root___eval_phase__stl(Vtb_cci_ac_range_gen___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_settle(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_settle\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_ac_range_gen___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 16, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_ac_range_gen___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_triggers_vec__stl(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_ac_range_gen___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_ac_range_gen___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_ac_range_gen___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___stl_sequent__TOP__0(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___stl_sequent__TOP__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid = 
        ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
         & (0ULL != vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask));
    vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done 
        = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last))));
}

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___eval_stl(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_stl\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_ac_range_gen___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_ac_range_gen___024root___eval_phase__stl(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_phase__stl\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_ac_range_gen___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_ac_range_gen___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_ac_range_gen___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_ac_range_gen___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_ac_range_gen___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_ac_range_gen___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_ac_range_gen.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_ac_range_gen.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_ac_range_gen.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___ctor_var_reset(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___ctor_var_reset\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_ac_range_gen__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16645410017578723790ull);
    vlSelf->tb_cci_ac_range_gen__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4299413830002429445ull);
    vlSelf->tb_cci_ac_range_gen__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4798066047252061107ull);
    vlSelf->tb_cci_ac_range_gen__DOT__start_page_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16157866871975217716ull);
    vlSelf->tb_cci_ac_range_gen__DOT__start_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1368754118032939982ull);
    vlSelf->tb_cci_ac_range_gen__DOT__ac_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11497977811394191565ull);
    vlSelf->tb_cci_ac_range_gen__DOT__ac_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3529091632976933817ull);
    vlSelf->tb_cci_ac_range_gen__DOT__ac_gen_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11486711286124706367ull);
    vlSelf->tb_cci_ac_range_gen__DOT__dut__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18326952980778122928ull);
    vlSelf->tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 9582107578588991242ull);
    vlSelf->tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17327994202127681471ull);
    vlSelf->tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1414714526633283697ull);
    vlSelf->tb_cci_ac_range_gen__DOT__dut__DOT__is_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15866465591266706641ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
