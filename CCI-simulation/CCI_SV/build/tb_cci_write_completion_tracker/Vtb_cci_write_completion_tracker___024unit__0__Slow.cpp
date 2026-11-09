// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_write_completion_tracker.h for the primary calling header

#include "Vtb_cci_write_completion_tracker__pch.h"

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024unit___ctor_var_reset(Vtb_cci_write_completion_tracker___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_cci_write_completion_tracker___024unit___ctor_var_reset\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name25[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name25[0] = "CCI_WR_NONE"s;
    vlSelf->__Venumtab_enum_name25[1] = "CCI_WR_NORMAL"s;
    vlSelf->__Venumtab_enum_name25[2] = "CCI_WR_MEMCPY"s;
}
