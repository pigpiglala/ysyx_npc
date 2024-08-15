// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h52016a82__0 = vlSelf->top__DOT__my_regs__DOT__regs
        [((0x73U == vlSelf->top__DOT__inst) ? 0xfU : 
          (0x1fU & (vlSelf->top__DOT__inst >> 0x14U)))];
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__csr_data = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
    } else {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__csr_data = 0U;
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__regs_idu_reg1_rd_data = vlSelf->top__DOT__my_regs__DOT__regs
            [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
    } else {
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__regs_idu_reg1_rd_data = 0U;
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                             + vlSelf->top__DOT__regs_idu_reg1_rd_data))));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__regs_idu_reg2_rd_data = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 
            = (0xffU & vlSelf->__VdfgTmp_h52016a82__0);
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 
            = (0xffffU & vlSelf->__VdfgTmp_h52016a82__0);
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
    } else {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__regs_idu_reg2_rd_data = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3U] = 0U;
    }
    vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__idu_inst__DOT__immExt 
           + vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->__VdfgTmp_h26001c9e__0 = (0xffffffU & (- (IData)(
                                                             ((IData)(vlSelf->rst_n) 
                                                              & (vlSelf->__VdfgTmp_h52016a82__0 
                                                                 >> 7U)))));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csr_wr_data_in_1 = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[0U] 
        = (IData)((0x200000000ULL | (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[1U] 
        = ((vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
            << 2U) | (IData)(((0x200000000ULL | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelf->top__DOT__pc)))) 
                              >> 0x20U)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[2U] 
        = (4U | (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                  << 4U) | (vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                            >> 0x1eU)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0)));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__PCTarget = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit)
                                   ? vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csr_wr_data_in_2 = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)(((vlSelf->__VdfgTmp_h26001c9e__0 
                                              << 8U) 
                                             | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[1U] 
        = ((vlSelf->__VdfgTmp_h26001c9e__0 << 8U) | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         ((IData)(vlSelf->rst_n) 
                                                          & (vlSelf->__VdfgTmp_h52016a82__0 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)(((IData)(vlSelf->rst_n) & (vlSelf->__VdfgTmp_h52016a82__0 
                                                  >> 0xfU)))) 
            << 0x10U) | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                       == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
           == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__SrcB = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__PCTarget)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[0U] 
        = (IData)((0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__PCTarget))));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[1U] 
        = ((vlSelf->top__DOT__pc << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__PCTarget))) 
                                                   >> 0x20U)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[2U] 
        = (8U | (vlSelf->top__DOT__pc >> 0x1eU));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[3U] 
        = (vlSelf->top__DOT__regs_idu_reg1_rd_data 
           << 6U);
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[4U] 
        = (0x40U | (vlSelf->top__DOT__regs_idu_reg1_rd_data 
                    >> 0x1aU));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__PCTarget;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                       == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__BitSrcD) == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                       == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
           == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__SrcA = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->top__DOT__exu_inst__DOT__equal = (vlSelf->top__DOT__SrcA 
                                              == vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__notEqual = (vlSelf->top__DOT__SrcA 
                                                 != vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__greatEqual = (vlSelf->top__DOT__SrcA 
                                                   >= vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned 
        = VL_GTES_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less = (vlSelf->top__DOT__SrcA 
                                             < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__lessSigned = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__alu_out = ((8U 
                                                 & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB)
                                                     : 
                                                    (- 
                                                     (vlSelf->top__DOT__SrcA 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    (vlSelf->top__DOT__SrcA 
                                                     >> vlSelf->top__DOT__SrcB)
                                                     : 0U))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    (vlSelf->top__DOT__SrcA 
                                                     << vlSelf->top__DOT__SrcB)
                                                     : 0U)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    ^ vlSelf->top__DOT__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    & vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (~ vlSelf->top__DOT__SrcA)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    | vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    * vlSelf->top__DOT__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    - vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    + vlSelf->top__DOT__SrcB)))));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[0U] 
        = VL_GTES_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[1U] 
        = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__SrcA >= vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__SrcA < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->top__DOT__SrcA != vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->top__DOT__SrcA == vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[0U] 
        = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__SrcA < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[5U] 
        = vlSelf->top__DOT__exu_inst__DOT__equal;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[4U] 
        = (2U | (IData)(vlSelf->top__DOT__exu_inst__DOT__notEqual));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[2U] 
        = (6U | (IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqual));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xaU | (IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[1U] 
        = (4U | (IData)(vlSelf->top__DOT__exu_inst__DOT__less));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->top__DOT__exu_inst__DOT__less));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[0U] 
        = (8U | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[1U] 
        = (8U | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_out)));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__exu_inst__DOT__alu_out;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__whichBranchD) 
            == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__whichBranchD) 
           == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__exu_inst__DOT__zero = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
                                             & (IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__whichBranchD) 
            == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__whichBranchD) 
           == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit) 
                                                 & (IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__pc_reg_inst__DOT__pc_next = (
                                                   ((IData)(vlSelf->top__DOT__JumpD) 
                                                    | ((IData)(vlSelf->top__DOT__BranchD) 
                                                       & (IData)(vlSelf->top__DOT__exu_inst__DOT__zero)))
                                                    ? vlSelf->top__DOT__PCTarget
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
            == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
           == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
               == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
              == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__SLTSrcE = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc 
        = ((IData)(vlSelf->top__DOT__SLTD) ? ((IData)(vlSelf->top__DOT__SLTSrcE)
                                               ? 3U
                                               : 2U)
            : (IData)(vlSelf->top__DOT__idu_wbu_ResultSrc));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                       == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
           == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__wbu_regs_Result = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit)
                                          ? vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out
                                          : 0U);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_regs__DOT__regs__v0;
    __Vdlyvdim0__top__DOT__my_regs__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__my_regs__DOT__regs__v0;
    __Vdlyvval__top__DOT__my_regs__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_regs__DOT__regs__v0;
    __Vdlyvset__top__DOT__my_regs__DOT__regs__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v0;
    __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v0;
    __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csrs_inst__DOT__csrs__v0;
    __Vdlyvset__top__DOT__csrs_inst__DOT__csrs__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v1;
    __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v1;
    __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v1 = 0;
    // Body
    __Vdlyvset__top__DOT__my_regs__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__csrs_inst__DOT__csrs__v0 = 0U;
    if (vlSelf->top__DOT__idu_regs_RegWrite) {
        __Vdlyvval__top__DOT__my_regs__DOT__regs__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__inst 
                                >> 7U))) ? 0U : vlSelf->top__DOT__wbu_regs_Result);
        __Vdlyvset__top__DOT__my_regs__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_regs__DOT__regs__v0 
            = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    }
    if (vlSelf->top__DOT__CsrWrite) {
        __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v0 
            = vlSelf->top__DOT__csr_wr_data_in_1;
        __Vdlyvset__top__DOT__csrs_inst__DOT__csrs__v0 = 1U;
        if ((0x73U == vlSelf->top__DOT__inst)) {
            __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v0 = 0x341U;
            __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v1 = 0x342U;
        } else {
            __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v0 
                = (vlSelf->top__DOT__inst >> 0x14U);
            __Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v1 
                = (vlSelf->top__DOT__inst >> 0x14U);
        }
        __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v1 
            = vlSelf->top__DOT__csr_wr_data_in_2;
    }
    if (__Vdlyvset__top__DOT__my_regs__DOT__regs__v0) {
        vlSelf->top__DOT__my_regs__DOT__regs[__Vdlyvdim0__top__DOT__my_regs__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__my_regs__DOT__regs__v0;
    }
    if (__Vdlyvset__top__DOT__csrs_inst__DOT__csrs__v0) {
        vlSelf->top__DOT__csrs_inst__DOT__csrs[__Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v0] 
            = __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v0;
        vlSelf->top__DOT__csrs_inst__DOT__csrs[__Vdlyvdim0__top__DOT__csrs_inst__DOT__csrs__v1] 
            = __Vdlyvval__top__DOT__csrs_inst__DOT__csrs__v1;
    }
    vlSelf->__VdfgTmp_h52016a82__0 = vlSelf->top__DOT__my_regs__DOT__regs
        [((0x73U == vlSelf->top__DOT__inst) ? 0xfU : 
          (0x1fU & (vlSelf->top__DOT__inst >> 0x14U)))];
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__pc = vlSelf->top__DOT__pc_reg_inst__DOT__pc_next;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3U] 
            = vlSelf->top__DOT__my_regs__DOT__regs[
            (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__regs_idu_reg1_rd_data = vlSelf->top__DOT__my_regs__DOT__regs
            [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
        vlSelf->top__DOT__csr_data = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__csrs_inst__DOT__csrs
            [vlSelf->top__DOT__csr_rd_addr];
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__regs_idu_reg2_rd_data = vlSelf->__VdfgTmp_h52016a82__0;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 
            = (0xffU & vlSelf->__VdfgTmp_h52016a82__0);
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 
            = (0xffffU & vlSelf->__VdfgTmp_h52016a82__0);
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_h52016a82__0;
    } else {
        vlSelf->top__DOT__pc = 0x80000000U;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__regs_idu_reg1_rd_data = 0U;
        vlSelf->top__DOT__csr_data = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__regs_idu_reg2_rd_data = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3U] = 0U;
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__pc)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->top__DOT__pc))));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((vlSelf->top__DOT__idu_inst__DOT__immExt 
                           + vlSelf->top__DOT__pc)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->top__DOT__pc);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__idu_inst__DOT__immExt 
           + vlSelf->top__DOT__pc);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                             + vlSelf->top__DOT__regs_idu_reg1_rd_data))));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__idu_inst__DOT__immExt 
           + vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->__VdfgTmp_h26001c9e__0 = (0xffffffU & (- (IData)(
                                                             ((IData)(vlSelf->rst_n) 
                                                              & (vlSelf->__VdfgTmp_h52016a82__0 
                                                                 >> 7U)))));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
        = (vlSelf->top__DOT__csr_data | vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__PCTarget = ((IData)(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit)
                                   ? vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)(((vlSelf->__VdfgTmp_h26001c9e__0 
                                              << 8U) 
                                             | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[1U] 
        = ((vlSelf->__VdfgTmp_h26001c9e__0 << 8U) | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         ((IData)(vlSelf->rst_n) 
                                                          & (vlSelf->__VdfgTmp_h52016a82__0 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)(((IData)(vlSelf->rst_n) & (vlSelf->__VdfgTmp_h52016a82__0 
                                                  >> 0xfU)))) 
            << 0x10U) | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                       == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
           == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__SrcB = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csr_wr_data_in_1 = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__CsrSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csr_wr_data_in_2 = ((IData)(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[0U] 
        = (IData)((0x200000000ULL | (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[1U] 
        = ((vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
            << 2U) | (IData)(((0x200000000ULL | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelf->top__DOT__pc)))) 
                              >> 0x20U)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[2U] 
        = (4U | (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                  << 4U) | (vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                            >> 0x1eU)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[0U] 
        = (IData)((0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__PCTarget))));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[1U] 
        = ((vlSelf->top__DOT__pc << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__PCTarget))) 
                                                   >> 0x20U)));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[2U] 
        = (8U | (vlSelf->top__DOT__pc >> 0x1eU));
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[3U] 
        = (vlSelf->top__DOT__regs_idu_reg1_rd_data 
           << 6U);
    vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4[4U] 
        = (0x40U | (vlSelf->top__DOT__regs_idu_reg1_rd_data 
                    >> 0x1aU));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__PCTarget)));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__PCTarget;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                       == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
           == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
                          == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA) 
              == vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__SrcA = ((IData)(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->top__DOT__exu_inst__DOT__equal = (vlSelf->top__DOT__SrcA 
                                              == vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__notEqual = (vlSelf->top__DOT__SrcA 
                                                 != vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__greatEqual = (vlSelf->top__DOT__SrcA 
                                                   >= vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned 
        = VL_GTES_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less = (vlSelf->top__DOT__SrcA 
                                             < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__lessSigned = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[0U] 
        = VL_GTES_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[1U] 
        = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__SrcA >= vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__SrcA < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->top__DOT__SrcA != vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->top__DOT__SrcA == vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[0U] 
        = VL_LTS_III(32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__SrcA < vlSelf->top__DOT__SrcB);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[5U] 
        = vlSelf->top__DOT__exu_inst__DOT__equal;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[4U] 
        = (2U | (IData)(vlSelf->top__DOT__exu_inst__DOT__notEqual));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[2U] 
        = (6U | (IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqual));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xaU | (IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[1U] 
        = (4U | (IData)(vlSelf->top__DOT__exu_inst__DOT__less));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->top__DOT__exu_inst__DOT__less));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[0U] 
        = (8U | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[1U] 
        = (8U | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__whichBranchD) 
            == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__whichBranchD) 
           == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__exu_inst__DOT__zero = ((IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit) 
                                             & (IData)(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__whichBranchD) 
            == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__whichBranchD) 
           == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__whichBranchD) 
               == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__whichBranchD) 
              == vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__less_tmp = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit) 
                                                 & (IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__pc_reg_inst__DOT__pc_next = (
                                                   ((IData)(vlSelf->top__DOT__JumpD) 
                                                    | ((IData)(vlSelf->top__DOT__BranchD) 
                                                       & (IData)(vlSelf->top__DOT__exu_inst__DOT__zero)))
                                                    ? vlSelf->top__DOT__PCTarget
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
            == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
           == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
               == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_inst__DOT__less_tmp) 
              == vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__SLTSrcE = ((IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc 
        = ((IData)(vlSelf->top__DOT__SLTD) ? ((IData)(vlSelf->top__DOT__SLTSrcE)
                                               ? 3U
                                               : 2U)
            : (IData)(vlSelf->top__DOT__idu_wbu_ResultSrc));
}

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_npc_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read_npc__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu_inst__DOT__pmem_write_npc_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__lsu_inst__DOT__pmem_read_npc__2__Vfuncout;
    __Vfunc_top__DOT__lsu_inst__DOT__pmem_read_npc__2__Vfuncout = 0;
    // Body
    if (vlSelf->top__DOT__idu_vmu_MemWriteRead) {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_npc_TOP(vlSelf->top__DOT__exu_inst__DOT__alu_out, __Vfunc_top__DOT__lsu_inst__DOT__pmem_read_npc__2__Vfuncout);
        vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
            = __Vfunc_top__DOT__lsu_inst__DOT__pmem_read_npc__2__Vfuncout;
        if (vlSelf->top__DOT__idu_vmu_MemWrite) {
            Vtop___024root____Vdpiimwrap_top__DOT__lsu_inst__DOT__pmem_write_npc_TOP(vlSelf->top__DOT__exu_inst__DOT__alu_out, vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp, (IData)(vlSelf->top__DOT__lsu_inst__DOT__wmask));
        }
    } else {
        vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp = 0U;
    }
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp)))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp)));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp))));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[3U] 
        = (0xffffU & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                       == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__BitSrcD) == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__vmu_wbu_mem_rd_data_out = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit)
                                                  ? vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out
                                                  : 0U);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__vmu_wbu_mem_rd_data_out));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__vmu_wbu_mem_rd_data_out;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                       == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__BitSrcD) == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__BitSrcD) 
                          == vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__BitSrcD) == 
              vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp 
        = ((IData)(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->top__DOT__exu_inst__DOT__alu_out = ((8U 
                                                 & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__SrcA, vlSelf->top__DOT__SrcB)
                                                     : 
                                                    (- 
                                                     (vlSelf->top__DOT__SrcA 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    (vlSelf->top__DOT__SrcA 
                                                     >> vlSelf->top__DOT__SrcB)
                                                     : 0U))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     ? 
                                                    (vlSelf->top__DOT__SrcA 
                                                     << vlSelf->top__DOT__SrcB)
                                                     : 0U)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    ^ vlSelf->top__DOT__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    & vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (~ vlSelf->top__DOT__SrcA)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    | vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    * vlSelf->top__DOT__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__idu_exu_ALUControl))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcA 
                                                    - vlSelf->top__DOT__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcA 
                                                    + vlSelf->top__DOT__SrcB)))));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_inst__DOT__alu_out)));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__exu_inst__DOT__alu_out;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                       == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
           == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
                          == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc) 
              == vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__wbu_regs_Result = ((IData)(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit)
                                          ? vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out
                                          : 0U);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/vastz/ysyx-workbench/npc/vsrc/top.v", 11, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/vastz/ysyx-workbench/npc/vsrc/top.v", 11, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/vastz/ysyx-workbench/npc/vsrc/top.v", 11, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
