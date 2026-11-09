// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_write_completion_tracker.h for the primary calling header

#ifndef VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER___024UNIT_H_
#define VERILATED_VTB_CCI_WRITE_COMPLETION_TRACKER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_write_completion_tracker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_write_completion_tracker___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 4> __Venumtab_enum_name25;

    // INTERNAL VARIABLES
    Vtb_cci_write_completion_tracker__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_write_completion_tracker___024unit();
    ~Vtb_cci_write_completion_tracker___024unit();
    void ctor(Vtb_cci_write_completion_tracker__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cci_write_completion_tracker___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
