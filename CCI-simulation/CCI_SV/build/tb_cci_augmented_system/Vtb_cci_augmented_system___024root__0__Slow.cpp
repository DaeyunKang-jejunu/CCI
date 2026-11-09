// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_augmented_system.h for the primary calling header

#include "Vtb_cci_augmented_system__pch.h"

void Vtb_cci_augmented_system___024root___timing_ready(Vtb_cci_augmented_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_static(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_static\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_static__TOP_tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei;
    __Vinline__eval_static__TOP_tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__test_T02__Vstatic__cnt = 0U;
    __Vinline__eval_static__TOP_tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__rst_n;
    Vtb_cci_augmented_system___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_static__TOP(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_static__TOP\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__test_T02__Vstatic__cnt = 0U;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0U;
}

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_initial__TOP(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_initial__TOP\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_final(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_final\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_augmented_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_augmented_system___024root___eval_phase__stl(Vtb_cci_augmented_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_settle(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_settle\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_augmented_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 29, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_augmented_system___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_triggers_vec__stl(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_augmented_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_augmented_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_augmented_system___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_augmented_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___stl_sequent__TOP__0(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___stl_sequent__TOP__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount;
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0;
    QData/*63:0*/ __Vfunc_cci_popcount__173__m;
    __Vfunc_cci_popcount__173__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__173__cnt;
    __Vfunc_cci_popcount__173__cnt = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__base_addr;
    __Vfunc_cci_page_relative_mask__177__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__177__line_count;
    __Vfunc_cci_page_relative_mask__177__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__explicit_mask;
    __Vfunc_cci_page_relative_mask__177__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.tb_cci_augmented_system__DOT__memcpy_probe_hazard 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
           & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                   != (0x0000000fU 
                                       & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                  & (((0x000fffffffffffffULL 
                                       & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                           << 0x0000001cU) 
                                          | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                             >> 4U))) 
                                      == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                          >> 0x0000000cU)) 
                                     & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                           [(((IData)(0x00000044U) 
                                              + (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                            >> 6U)))) 
                                             >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000044U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
               [vlSelfRef.tb_cci_augmented_system__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]
              [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[0U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[1U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[2U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[3U] = 0ULL;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0U;
    if ((1U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0x800000000000001fULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                  << 0x0000000bU));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 1U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000020ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 2U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000040ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 3U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000060ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 4U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000080ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 5U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 6U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 7U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 8U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000100ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 9U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000120ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000140ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000160ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000180ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x10U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000200ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x11U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000220ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x12U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000240ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x13U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000260ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x14U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000280ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x15U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x16U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x17U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x18U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000300ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x19U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000320ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000340ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000360ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000380ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x20U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000400ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x21U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000420ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x22U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000440ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x23U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000460ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x24U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000480ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x25U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x26U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x27U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x28U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000500ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x29U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000520ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000540ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000560ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000580ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x30U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000600ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x31U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000620ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x32U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000640ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x33U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000660ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x34U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000680ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x35U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x36U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x37U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x38U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000700ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x39U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000720ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000740ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000760ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000780ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0eU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | (((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                 & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                            >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
               & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                            >> 5U)) 
                  == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                      >> 6U))) & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0dU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 1U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0bU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 2U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((7U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 3U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__ac_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & (0ULL != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask));
    __Vfunc_cci_page_relative_mask__177__explicit_mask 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__177__line_count 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__177__base_addr 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__177__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__177__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
                = __Vfunc_cci_page_relative_mask__177__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__177__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr 
            = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__178__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__178__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__addr = vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr;
        vlSelf->__Vfunc_cci_line_idx__179__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__179__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__180__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__181__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__182__addr = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_line_idx__182__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__182__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)));
    vlSelfRef.tb_cci_augmented_system__DOT__probe_hazard 
        = ((0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
              & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                  >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                      != (0x0000000fU 
                                          & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                     & (((0x000fffffffffffffULL 
                                          & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                                >> 4U))) 
                                         == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                             >> 0x0000000cU)) 
                                        & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                               [(((IData)(4U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))) 
                                                 >> 5U)] 
                                               >> (0x0000001fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                  >> 6U))))))) 
                                           & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                              [(((IData)(0x00000044U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000044U) 
                                                     + 
                                                     (0x0000003fU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                 >> 6U))))))))))));
    __Vfunc_cci_popcount__173__m = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_popcount__173__cnt = 0U;
    if ((1U & (IData)(__Vfunc_cci_popcount__173__m))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 1U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 2U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 3U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 4U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 5U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 6U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 7U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 8U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 9U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x10U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x11U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x12U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x13U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x14U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x15U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x16U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x17U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x18U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x19U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x20U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x21U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x22U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x23U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x24U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x25U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x26U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x27U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x28U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x29U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x30U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x31U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x32U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x33U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x34U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x35U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x36U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x37U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x38U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x39U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount 
        = __Vfunc_cci_popcount__173__cnt;
    vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid) 
            & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid))) 
           & ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask) 
              | VL_LTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid));
    vlSelfRef.tb_cci_augmented_system__DOT__req_error 
        = ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 0U;
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_augmented_system__DOT__req_ready 
        = (1U & ((1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type))
                  ? ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                         >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error))
                  : ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid)) 
                     & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
}

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___eval_stl(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_stl\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_augmented_system___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_augmented_system___024root___eval_phase__stl(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_phase__stl\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_augmented_system___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_augmented_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_augmented_system___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_augmented_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_augmented_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_augmented_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_augmented_system___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_augmented_system.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_augmented_system.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_augmented_system.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_augmented_system___024root___ctor_var_reset(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___ctor_var_reset\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_augmented_system__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4008524625593764990ull);
    vlSelf->tb_cci_augmented_system__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6737087141160992186ull);
    vlSelf->tb_cci_augmented_system__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296890033591540710ull);
    vlSelf->tb_cci_augmented_system__DOT__req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13612324132301107243ull);
    vlSelf->tb_cci_augmented_system__DOT__req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4853668399951719033ull);
    vlSelf->tb_cci_augmented_system__DOT__req_base_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12611167193545937949ull);
    vlSelf->tb_cci_augmented_system__DOT__req_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15776939415189368479ull);
    vlSelf->tb_cci_augmented_system__DOT__req_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11941142417978350142ull);
    vlSelf->tb_cci_augmented_system__DOT__req_line_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6377113707316719527ull);
    vlSelf->tb_cci_augmented_system__DOT__req_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6408217833029716807ull);
    vlSelf->tb_cci_augmented_system__DOT__ac_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 639036073686439372ull);
    vlSelf->tb_cci_augmented_system__DOT__ac_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3238992332544098186ull);
    vlSelf->tb_cci_augmented_system__DOT__cr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2348174293299576332ull);
    vlSelf->tb_cci_augmented_system__DOT__cr_resp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7219455507409348817ull);
    vlSelf->tb_cci_augmented_system__DOT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2441650273923583915ull);
    vlSelf->tb_cci_augmented_system__DOT__aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3983281987108288700ull);
    vlSelf->tb_cci_augmented_system__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5365446030962492445ull);
    vlSelf->tb_cci_augmented_system__DOT__aw_track_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16851883948135954383ull);
    vlSelf->tb_cci_augmented_system__DOT__awaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7575589485898600440ull);
    vlSelf->tb_cci_augmented_system__DOT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17110933746255178470ull);
    vlSelf->tb_cci_augmented_system__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6471611346564520239ull);
    vlSelf->tb_cci_augmented_system__DOT__probe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269216643738577203ull);
    vlSelf->tb_cci_augmented_system__DOT__probe_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17364358840903094980ull);
    vlSelf->tb_cci_augmented_system__DOT__probe_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15113025008468107653ull);
    vlSelf->tb_cci_augmented_system__DOT__memcpy_probe_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17925398492099383363ull);
    vlSelf->tb_cci_augmented_system__DOT__probe_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14178921790856855028ull);
    vlSelf->tb_cci_augmented_system__DOT__normal_req_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15635638588024310471ull);
    vlSelf->tb_cci_augmented_system__DOT__overflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7868294223822477592ull);
    vlSelf->tb_cci_augmented_system__DOT__underflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13699918170986261125ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6772738200128520894ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047139360881697697ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13614660616984334025ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13431579540964892931ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__wr_done_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5844915545231833340ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17850826661811447311ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5375669904554781119ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16126172862133758700ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18365788633380169451ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2654650243386752106ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15471373891581296656ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2701753561029189768ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1133843971917368341ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15203861137488543354ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17150552405210015670ull);
    }
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 = 0;
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4089797691065246432ull);
    }
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17708018166986130469ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 669346472740061537ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17280865437120531436ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3028274277348171355ull);
    }
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 13990002691415101327ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15150897757902437142ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2613347334012782199ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5436071074146386536ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10831094214247004376ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8271580045190111640ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16385747136893112194ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8875771565296316244ull);
    VL_SCOPED_RAND_RESET_W(187, vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r, __VscopeHash, 2500014802916853442ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14476931192907397061ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15232152649351075219ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13908927046527525786ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14818130794415437722ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3203143996365486164ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14284009306607729630ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7155540991981433489ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2185283029821792415ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12890928259954738619ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3836671139060546209ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835796292633259950ull);
    vlSelf->tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1951598262348072844ull);
    vlSelf->__Vfunc_cci_page_addr__174__addr = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__177__Vfuncout = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178__Vfuncout = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178__base_addr = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178__line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_range_fits_page__178__end_line = 0;
    vlSelf->__Vfunc_cci_line_idx__179__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__179__addr = 0;
    vlSelf->__Vfunc_cci_valid_line_count__180__Vfuncout = 0;
    vlSelf->__Vfunc_cci_valid_line_count__180__line_count = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__181__Vfuncout = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__181__line_count = 0;
    vlSelf->__Vfunc_cci_line_idx__182__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__182__addr = 0;
    vlSelf->__Vsampled_TOP__tb_cci_augmented_system__DOT__overflow_sticky = 0;
    vlSelf->__Vsampled_TOP__tb_cci_augmented_system__DOT__underflow_sticky = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__tb_cci_augmented_system__DOT__rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
