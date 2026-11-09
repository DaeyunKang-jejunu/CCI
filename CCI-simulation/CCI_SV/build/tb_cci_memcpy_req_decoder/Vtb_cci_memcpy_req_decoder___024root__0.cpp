// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_memcpy_req_decoder.h for the primary calling header

#include "Vtb_cci_memcpy_req_decoder__pch.h"

VlCoroutine Vtb_cci_memcpy_req_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_req_decoder___024root* vlSelf);

void Vtb_cci_memcpy_req_decoder___024root___eval_initial(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_initial\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cci_memcpy_req_decoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_cci_memcpy_req_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_memcpy_req_decoder__DOT__pass_count;
    tb_cci_memcpy_req_decoder__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_memcpy_req_decoder__DOT__fail_count;
    tb_cci_memcpy_req_decoder__DOT__fail_count = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask = 0;
    QData/*51:0*/ __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page = 0;
    // Body
    tb_cci_memcpy_req_decoder__DOT__pass_count = 0U;
    tb_cci_memcpy_req_decoder__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001000ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 1U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__label = "T01 nCACHELINE=1"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__0__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 8U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask = 0x00000000000000ffULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__label = "T02 nCACHELINE=8"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__1__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0x10U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask = 0x000000000000ffffULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__label = "T03 nCACHELINE=16"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__2__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0x40U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask = 0xffffffffffffffffULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__label = "T04 nCACHELINE=64"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__3__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001f00ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 8U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error = 1U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__label = "T05 page boundary crossing (line60+8)"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__4__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001e00ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 8U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask = 0xff00000000000000ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__label = "T05b line56+8 exactly fits"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__5__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001fc0ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 1U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask = 0x8000000000000000ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__label = "T05c line63+1 exactly fits"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__6__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001000ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0x00000000000000a5ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask = 0x00000000000000a5ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__label = "T06 explicit sparse mask 0xA5"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__7__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0x10U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0xdeadbeef00000000ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask = 0xdeadbeef00000000ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__label = "T06b explicit mask overrides line_count"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__8__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001000ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error = 1U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__label = "T07 count=0 mask=0 (error)"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__9__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0x41U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error = 1U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__label = "T07b count=65 (out of range, error)"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__10__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001000ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__label = "T08a req_valid=0 count=0 mask=0"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         81);
    if ((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
          == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid)) 
         & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error)))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__11__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0x10U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__label = "T08b req_valid=0 count=16 (don't-care mask)"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         81);
    if ((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
          == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid)) 
         & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error)))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__12__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0xdeadbeef00000000ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid = 0U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__label = "T08c req_valid=0 explicit mask (don't-care)"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         81);
    if ((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
          == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid)) 
         & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error)))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:  exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check_status__13__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr = 0x0000000000001100ULL;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count = 8U;
    vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask = 0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page = 1ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask = 0x0000000000000ff0ULL;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error = 0U;
    __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__label = "T09 non-aligned base line4 count8"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 
                                         54);
    if ((((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
            == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid)) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
              == (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error))) 
          & (vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
             == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask)) 
         & ((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
             >> 0x0000000cU) == __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__label));
        tb_cci_memcpy_req_decoder__DOT__pass_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__label));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid))))) {
            VL_WRITEF_NX("      dec_valid:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_dec_valid
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_valid));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error) 
                          != (IData)(__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error))))) {
            VL_WRITEF_NX("      req_error:     exp=%0b got=%0b\n",2
                         , '#',1,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_req_error
                         , '#',1,(IData)(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_error));
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask 
                          != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask)))) {
            VL_WRITEF_NX("      dec_line_mask: exp=%016h got=%016h\n",2
                         , '#',64,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_mask
                         , '#',64,vlSelfRef.tb_cci_memcpy_req_decoder__DOT__dec_line_mask);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                           >> 0x0000000cU) != __Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page)))) {
            VL_WRITEF_NX("      dec_page_addr: exp=%013h got=%013h\n",2
                         , '#',52,__Vtask_tb_cci_memcpy_req_decoder__DOT__check__14__exp_page
                         , '#',52,(vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr 
                                   >> 0x0000000cU));
        }
        tb_cci_memcpy_req_decoder__DOT__fail_count 
            = ((IData)(1U) + tb_cci_memcpy_req_decoder__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_memcpy_req_decoder__DOT__pass_count
                 , '~',32,tb_cci_memcpy_req_decoder__DOT__fail_count);
    if ((0U == tb_cci_memcpy_req_decoder__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 215, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_req_decoder.sv:217: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_req_decoder", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_memcpy_req_decoder__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 217, "", false);
    }
    co_return;
}

void Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__act(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_memcpy_req_decoder___024root___act_sequent__TOP__0(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___act_sequent__TOP__0\n"); );
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

void Vtb_cci_memcpy_req_decoder___024root___eval_act(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_act\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
    __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr = 0;
    CData/*6:0*/ __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
    __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count = 0;
    QData/*63:0*/ __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
    __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask = 0;
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask;
        __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count;
        __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr;
        {
            vlSelf->__Vfunc_cci_page_relative_mask__16__Vfuncout = 0;
            if ((0ULL != __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask)) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
                    = __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
                goto __Vlabel0;
            }
            if ((0U != (0x0000003fU & (IData)(__Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count 
                = __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
            vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr 
                = __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
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
                = __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
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
                = __Vinline__act_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
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

void Vtb_cci_memcpy_req_decoder___024root___nba_sequent__TOP__0(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___nba_sequent__TOP__0\n"); );
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

void Vtb_cci_memcpy_req_decoder___024root___eval_nba(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_nba\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
    __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr = 0;
    CData/*6:0*/ __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
    __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count = 0;
    QData/*63:0*/ __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
    __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_mask;
        __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_line_count;
        __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr 
            = vlSelfRef.tb_cci_memcpy_req_decoder__DOT__req_base_addr;
        {
            vlSelf->__Vfunc_cci_page_relative_mask__16__Vfuncout = 0;
            if ((0ULL != __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask)) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout 
                    = __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__explicit_mask;
                goto __Vlabel0;
            }
            if ((0U != (0x0000003fU & (IData)(__Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__16__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_range_fits_page__17__line_count 
                = __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
            vlSelfRef.__Vfunc_cci_range_fits_page__17__base_addr 
                = __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
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
                = __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__line_count;
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
                = __Vinline__nba_sequent__TOP__0___Vfunc_cci_page_relative_mask__16__base_addr;
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

void Vtb_cci_memcpy_req_decoder___024root___timing_resume(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___timing_resume\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_memcpy_req_decoder___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_memcpy_req_decoder___024root___eval_phase__act(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_phase__act\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_memcpy_req_decoder___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_memcpy_req_decoder___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_memcpy_req_decoder___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_memcpy_req_decoder___024root___timing_resume(vlSelf);
        Vtb_cci_memcpy_req_decoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_memcpy_req_decoder___024root___eval_phase__inact(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_phase__inact\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 17, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_memcpy_req_decoder___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_memcpy_req_decoder___024root___eval_phase__nba(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_phase__nba\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_memcpy_req_decoder___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_memcpy_req_decoder___024root___eval_nba(vlSelf);
        Vtb_cci_memcpy_req_decoder___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_memcpy_req_decoder___024root___eval(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 17, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 17, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_memcpy_req_decoder___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_req_decoder.sv", 17, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_memcpy_req_decoder___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_memcpy_req_decoder___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_memcpy_req_decoder___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_cci_memcpy_req_decoder___024root___eval_debug_assertions(Vtb_cci_memcpy_req_decoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_req_decoder___024root___eval_debug_assertions\n"); );
    Vtb_cci_memcpy_req_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
