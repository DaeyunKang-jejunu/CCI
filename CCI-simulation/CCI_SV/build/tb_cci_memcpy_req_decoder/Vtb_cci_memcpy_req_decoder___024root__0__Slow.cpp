// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_memcpy_req_decoder.h for the primary calling header

#include "Vtb_cci_memcpy_req_decoder__pch.h"

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___eval_static(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_static\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___eval_final(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_final\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_memcpy_req_decoder___024root___eval_phase__stl(Vtb_cci_memcpy_req_decoder___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___eval_settle(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_settle\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_memcpy_req_decoder___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 17, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_memcpy_req_decoder___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__stl(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___stl_sequent__TOP__0(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___stl_sequent__TOP__0\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__16__base_addr;
    __Vfunc_cci_page_relative_mask__16__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__16__line_count;
    __Vfunc_cci_page_relative_mask__16__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__16__explicit_mask;
    __Vfunc_cci_page_relative_mask__16__explicit_mask = 0;
    // Body
    __Vfunc_cci_page_relative_mask__16__explicit_mask 
        = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__16__line_count 
        = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__16__base_addr = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__16__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__16__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
                = __Vfunc_cci_page_relative_mask__16__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__16__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count 
            = __Vfunc_cci_page_relative_mask__16__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr 
            = __Vfunc_cci_page_relative_mask__16__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__17__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__17__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__18__addr = vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr;
        vlSelf->__Vfunc_cci_line_idx__18__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__18__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__18__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__18__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__17__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__19__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__19__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__19__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__17__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__17__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count 
            = __Vfunc_cci_page_relative_mask__16__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__20__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__21__addr = __Vfunc_cci_page_relative_mask__16__base_addr;
        vlSelf->__Vfunc_cci_line_idx__21__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__21__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__21__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__21__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid 
        = ((~ ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid) 
               & (0ULL == vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask))) 
           & (IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid));
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask));
}

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___eval_stl(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_stl\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
    __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr = 0;
    CData/*6:0*/ __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
    __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count = 0;
    QData/*63:0*/ __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
    __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask = 0;
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask;
        __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count;
        __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr;
        {
            vlSelf->__Vfunc_cci_page_relative_mask__16__Vfuncout = 0;
            if ((0ULL != __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask)) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
                    = __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
                goto __Vlabel0;
            }
            if ((0U != (0x0000003fU & (IData)(__Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count 
                = __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
            vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr 
                = __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
            vlSelf->__Vfunc_cci_range_fits_page__17__Vfuncout = 0;
            vlSelf->__Vfunc_cci_range_fits_page__17__end_line = 0;
            vlSelfRef.__Vfunc_cci_line_idx__18__addr 
                = vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr;
            vlSelf->__Vfunc_cci_line_idx__18__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_line_idx__18__Vfuncout 
                = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__18__addr 
                                          >> 6U)));
            vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx 
                = vlSelfRef.__Vfunc_cci_line_idx__18__Vfuncout;
            vlSelfRef.__Vfunc_cci_range_fits_page__17__end_line 
                = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx) 
                                  + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count)));
            vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count 
                = vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count;
            vlSelf->__Vfunc_cci_valid_line_count__19__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_valid_line_count__19__Vfuncout 
                = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count)) 
                   & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__19__line_count)));
            vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count 
                = vlSelfRef.__Vfunc_cci_valid_line_count__19__Vfuncout;
            vlSelfRef.__Vfunc_cci_range_fits_page__17__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count) 
                   & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__17__end_line)));
            vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page 
                = vlSelfRef.__Vfunc_cci_range_fits_page__17__Vfuncout;
            if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count 
                = __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
            {
                vlSelf->__Vfunc_cci_contiguous_mask__20__Vfuncout = 0;
                if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0ULL;
                    goto __Vlabel1;
                }
                if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0ULL;
                    goto __Vlabel1;
                }
                if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout = 0xffffffffffffffffULL;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout 
                    = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__20__line_count)) 
                       - 1ULL);
                __Vlabel1: ;
            }
            vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask 
                = vlSelfRef.__Vfunc_cci_contiguous_mask__20__Vfuncout;
            vlSelfRef.__Vfunc_cci_line_idx__21__addr 
                = __Vinline__stl_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
            vlSelf->__Vfunc_cci_line_idx__21__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_line_idx__21__Vfuncout 
                = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__21__addr 
                                          >> 6U)));
            vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx 
                = vlSelfRef.__Vfunc_cci_line_idx__21__Vfuncout;
            vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
                = (vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask 
                   << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx));
            __Vlabel0: ;
        }
        vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
            = vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout;
        vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid 
            = ((~ ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid) 
                   & (0ULL == vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask))) 
               & (IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid));
        vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error 
            = ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid) 
               & (0ULL == vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask));
    }
}

VL_ATTR_COLD bool Vtb_cci_memcpy_req_decoder___024root___eval_phase__stl(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_phase__stl\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_memcpy_req_decoder___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_memcpy_req_decoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___ctor_var_reset(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___ctor_var_reset\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258081780333967078ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__req_base_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13938163610632410385ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__req_line_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15945777803844553555ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__req_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17933860301122854354ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__dec_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10456042460045534747ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__dec_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2389397149606485376ull);
    vlSelf->tb_cci_memcpy_req_decoder__DOT__req_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5052464906593600821ull);
    vlSelf->__Vfunc_cci_page_relative_mask__16__Vfuncout = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__16____VlefCall_2__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__16____VlefCall_1__cci_contiguous_mask = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__16____VlefCall_0__cci_range_fits_page = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17__Vfuncout = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17__base_addr = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17__line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17____VlefCall_1__cci_valid_line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17____VlefCall_0__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_range_fits_page__17__end_line = 0;
    vlSelf->__Vfunc_cci_line_idx__18__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__18__addr = 0;
    vlSelf->__Vfunc_cci_valid_line_count__19__Vfuncout = 0;
    vlSelf->__Vfunc_cci_valid_line_count__19__line_count = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__20__Vfuncout = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__20__line_count = 0;
    vlSelf->__Vfunc_cci_line_idx__21__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__21__addr = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
