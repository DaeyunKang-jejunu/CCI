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
                                         nullptr, "tb/tb_cci_snoop_order_violation.sv", 
                                         27);
    VL_WRITEF_NX("FAIL  CR-before-AC $fatal did not fire within 50 cycles \342\200\224 assertion missing or disabled\n",0);
    VL_FINISH_MT("tb/tb_cci_snoop_order_violation.sv", 30, "");
    co_return;
}

void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(Vtb_cci_snoop_order_violation___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_cci_snoop_order_violation.sv", 
                                         62);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_cci_snoop_order_violation.sv", 
                                         64);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(vlSelf, 
                                                                        "@(negedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd0449e4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         67);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         69);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_cci_snoop_order_violation.sv", 
                                         69);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd0449e4c__0(vlSelf, 
                                                                        "@(negedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd0449e4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         73);
    Vtb_cci_snoop_order_violation___024root____VbeforeTrig_hd044919e__0(vlSelf, 
                                                                        "@(posedge tb_cci_snoop_order_violation.clk)");
    co_await vlSelfRef.__VtrigSched_hd044919e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_snoop_order_violation.clk)", 
                                                         "tb/tb_cci_snoop_order_violation.sv", 
                                                         75);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_cci_snoop_order_violation.sv", 
                                         75);
    VL_WRITEF_NX("FAIL  CR-before-AC $fatal did not fire after CR stimulus\n",0);
    VL_FINISH_MT("tb/tb_cci_snoop_order_violation.sv", 81, "");
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
                                             "tb/tb_cci_snoop_order_violation.sv", 
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
                                                    ((((~ (IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0))) 
                                                         << 1U) 
                                                        | vlSelfRef.__VdlySched.awaitingCurrentTime()))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
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

void Vtb_cci_snoop_order_violation___024root___timing_ready(Vtb_cci_snoop_order_violation___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_snoop_order_violation___024root___timing_ready\n"); );
    Vtb_cci_snoop_order_violation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready("@(posedge tb_cci_snoop_order_violation.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
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
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
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
        VL_FATAL_MT("tb/tb_cci_snoop_order_violation.sv", 14, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_snoop_order_violation___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_cci_snoop_order_violation.sv", 14, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
                                   << 2U) | (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0))) 
                                             << 1U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
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
                                   << 2U) | (((IData)(vlSelfRef.tb_cci_snoop_order_violation__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0))) 
                                             << 1U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0 
        = vlSelfRef.tb_cci_snoop_order_violation__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd044919e__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
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
