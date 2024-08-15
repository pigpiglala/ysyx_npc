// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void halt_ret();

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_halt_ret_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_halt_ret_TOP____024unit\n"); );
    // Body
    halt_ret();
}
