// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h8fba5d78__0;
    VlWide<5>/*159:0*/ __Vtemp_hcce9e454__0;
    VlWide<4>/*127:0*/ __Vtemp_hce57d4d9__0;
    VlWide<5>/*159:0*/ __Vtemp_hac3c1fc7__0;
    VlWide<8>/*255:0*/ __Vtemp_h578d117c__0;
    VlWide<7>/*223:0*/ __Vtemp_h1246d7cc__0;
    VlWide<7>/*223:0*/ __Vtemp_h27acd29d__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__PCTarget),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__regs_idu_reg1_rd_data),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__regs_idu_reg2_rd_data),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__csr_data),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__csr_wr_data_in_1),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__csr_wr_data_in_2),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__SrcA),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__SrcB),32);
        bufp->chgBit(oldp+63,(((IData)(vlSelf->top__DOT__JumpD) 
                               | ((IData)(vlSelf->top__DOT__BranchD) 
                                  & (IData)(vlSelf->top__DOT__exu_inst__DOT__zero)))));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__SLTSrcE));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__exu_inst__DOT__equal));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__exu_inst__DOT__notEqual));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__exu_inst__DOT__less));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__exu_inst__DOT__greatEqual));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__exu_inst__DOT__zero));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__exu_inst__DOT__less_tmp));
        bufp->chgIData(oldp+73,((0x2468aU | (((IData)(vlSelf->top__DOT__exu_inst__DOT__equal) 
                                              << 0x14U) 
                                             | (((IData)(vlSelf->top__DOT__exu_inst__DOT__notEqual) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->top__DOT__exu_inst__DOT__less) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqual) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned) 
                                                          << 4U) 
                                                         | (IData)(vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned)))))))),24);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+90,((0x48U | (((IData)(vlSelf->top__DOT__exu_inst__DOT__less) 
                                           << 4U) | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned)))),8);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit));
        __Vtemp_h8fba5d78__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__csr_data))));
        __Vtemp_h8fba5d78__0[1U] = ((vlSelf->top__DOT__csr_data 
                                     << 2U) | (IData)(
                                                      ((0x300000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__csr_data))) 
                                                       >> 0x20U)));
        __Vtemp_h8fba5d78__0[2U] = (8U | (((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                            + vlSelf->top__DOT__regs_idu_reg1_rd_data) 
                                           << 4U) | 
                                          (vlSelf->top__DOT__csr_data 
                                           >> 0x1eU)));
        __Vtemp_h8fba5d78__0[3U] = (0x10U | (((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                               + vlSelf->top__DOT__pc) 
                                              << 6U) 
                                             | ((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                                 + vlSelf->top__DOT__regs_idu_reg1_rd_data) 
                                                >> 0x1cU)));
        __Vtemp_h8fba5d78__0[4U] = ((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                     + vlSelf->top__DOT__pc) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+97,(__Vtemp_h8fba5d78__0),136);
        bufp->chgQData(oldp+102,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+116,(vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4),136);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit));
        __Vtemp_hcce9e454__0[0U] = vlSelf->top__DOT__csr_data;
        __Vtemp_hcce9e454__0[1U] = 0x13U;
        __Vtemp_hcce9e454__0[2U] = (0xcU | (vlSelf->top__DOT__idu_inst__DOT__immExt 
                                            << 4U));
        __Vtemp_hcce9e454__0[3U] = ((vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                     << 6U) | (vlSelf->top__DOT__idu_inst__DOT__immExt 
                                               >> 0x1cU));
        __Vtemp_hcce9e454__0[4U] = (0x40U | (vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                             >> 0x1aU));
        bufp->chgWData(oldp+135,(__Vtemp_hcce9e454__0),136);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+154,(vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4),102);
        bufp->chgQData(oldp+158,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+160,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit));
        __Vtemp_hce57d4d9__0[0U] = (IData)((0x200000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data))));
        __Vtemp_hce57d4d9__0[1U] = ((vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                                     << 2U) | (IData)(
                                                      ((0x200000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data))) 
                                                       >> 0x20U)));
        __Vtemp_hce57d4d9__0[2U] = (4U | (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                                           << 4U) | 
                                          (vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                                           >> 0x1eU)));
        __Vtemp_hce57d4d9__0[3U] = (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)) 
                                                           >> 0x20U)) 
                                                  << 4U));
        bufp->chgWData(oldp+169,(__Vtemp_hce57d4d9__0),102);
        bufp->chgQData(oldp+173,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+175,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+177,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+184,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+186,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+188,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+190,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+192,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+194,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__pc_reg_inst__DOT__pc_next),32);
        bufp->chgCData(oldp+203,(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [4U]) | vlSelf->__Vm_traceActivity
                     [5U]))) {
        __Vtemp_hac3c1fc7__0[0U] = 1U;
        __Vtemp_hac3c1fc7__0[1U] = 3U;
        __Vtemp_hac3c1fc7__0[2U] = (8U | (vlSelf->top__DOT__vmu_wbu_mem_rd_data_out 
                                          << 4U));
        __Vtemp_hac3c1fc7__0[3U] = ((vlSelf->top__DOT__exu_inst__DOT__alu_out 
                                     << 6U) | (vlSelf->top__DOT__vmu_wbu_mem_rd_data_out 
                                               >> 0x1cU));
        __Vtemp_hac3c1fc7__0[4U] = (0x40U | (vlSelf->top__DOT__exu_inst__DOT__alu_out 
                                             >> 0x1aU));
        bufp->chgWData(oldp+204,(__Vtemp_hac3c1fc7__0),136);
        bufp->chgQData(oldp+209,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+211,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+213,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+215,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[3]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+221,(vlSelf->top__DOT__idu_regs_RegWrite));
        bufp->chgCData(oldp+222,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+223,((0x1fU & (vlSelf->top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+224,(((0x73U == vlSelf->top__DOT__inst)
                                   ? 0xfU : (0x1fU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)))),5);
        bufp->chgBit(oldp+225,(vlSelf->top__DOT__CsrWrite));
        bufp->chgSData(oldp+226,(vlSelf->top__DOT__csr_rd_addr),12);
        bufp->chgSData(oldp+227,(((0x73U == vlSelf->top__DOT__inst)
                                   ? 0x341U : (vlSelf->top__DOT__inst 
                                               >> 0x14U))),12);
        bufp->chgSData(oldp+228,(((0x73U == vlSelf->top__DOT__inst)
                                   ? 0x342U : (vlSelf->top__DOT__inst 
                                               >> 0x14U))),12);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__inst),32);
        bufp->chgCData(oldp+230,(vlSelf->top__DOT__idu_wbu_ResultSrc),2);
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__idu_vmu_MemWriteRead));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__idu_vmu_MemWrite));
        bufp->chgCData(oldp+233,(vlSelf->top__DOT__idu_exu_ALUControl),4);
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__SLTD));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__JumpD));
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__BranchD));
        bufp->chgCData(oldp+237,(vlSelf->top__DOT__whichBranchD),3);
        bufp->chgCData(oldp+238,(vlSelf->top__DOT__BitSrcD),3);
        bufp->chgCData(oldp+239,(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA),2);
        bufp->chgCData(oldp+240,(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB),2);
        bufp->chgCData(oldp+241,(vlSelf->top__DOT__idu_inst__DOT__ImmSrc),3);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__idu_inst__DOT__immExt),32);
        bufp->chgCData(oldp+243,(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc),2);
        bufp->chgSData(oldp+244,((vlSelf->top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+245,((0x7fU & vlSelf->top__DOT__inst)),7);
        bufp->chgCData(oldp+246,((7U & (vlSelf->top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+247,((vlSelf->top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+248,(vlSelf->top__DOT__idu_inst__DOT__CsrSrc),2);
        __Vtemp_h578d117c__0[0U] = (IData)((0x500000000ULL 
                                            | ((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__inst 
                                                                   >> 0x14U)))) 
                                               << 0x23U)));
        __Vtemp_h578d117c__0[1U] = (IData)(((0x500000000ULL 
                                             | ((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__inst 
                                                                    >> 0x14U)))) 
                                                << 0x23U)) 
                                            >> 0x20U));
        __Vtemp_h578d117c__0[2U] = (0x30U | (((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | ((0x3fc0000U 
                                                 & (vlSelf->top__DOT__inst 
                                                    << 6U)) 
                                                | ((0x20000U 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 3U)) 
                                                   | (0x1ff80U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0xeU))))));
        __Vtemp_h578d117c__0[3U] = (0x100U | (((- (IData)(
                                                          (vlSelf->top__DOT__inst 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xbU)) 
                                                 | ((0x3e00U 
                                                     & (vlSelf->top__DOT__inst 
                                                        << 2U)) 
                                                    | (0x3fU 
                                                       & ((- (IData)(
                                                                     (vlSelf->top__DOT__inst 
                                                                      >> 0x1fU))) 
                                                          >> 6U))))));
        __Vtemp_h578d117c__0[4U] = (0x600U | (((- (IData)(
                                                          (vlSelf->top__DOT__inst 
                                                           >> 0x1fU))) 
                                               << 0x18U) 
                                              | ((0x800000U 
                                                  & (vlSelf->top__DOT__inst 
                                                     << 0x10U)) 
                                                 | ((0x7e0000U 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 8U)) 
                                                    | ((0x1e000U 
                                                        & (vlSelf->top__DOT__inst 
                                                           << 5U)) 
                                                       | (0x1ffU 
                                                          & ((- (IData)(
                                                                        (vlSelf->top__DOT__inst 
                                                                         >> 0x1fU))) 
                                                             >> 0xbU)))))));
        __Vtemp_h578d117c__0[5U] = (0x2000U | ((0xffff8000U 
                                                & (((- (IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0x1bU) 
                                                   | (0x7ff8000U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 5U)))) 
                                               | (0xfffU 
                                                  & ((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     >> 8U))));
        __Vtemp_h578d117c__0[6U] = (0x8000U | ((0xc0000000U 
                                                & (vlSelf->top__DOT__inst 
                                                   << 0x12U)) 
                                               | (0x7fffU 
                                                  & ((- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     >> 5U))));
        __Vtemp_h578d117c__0[7U] = (0x3fffffffU & (vlSelf->top__DOT__inst 
                                                   >> 0xeU));
        bufp->chgWData(oldp+249,(__Vtemp_h578d117c__0),245);
        bufp->chgQData(oldp+257,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+259,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+261,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+263,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+265,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+267,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+269,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+279,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+280,(vlSelf->top__DOT__lsu_inst__DOT__wmask),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp),32);
        __Vtemp_h1246d7cc__0[0U] = (IData)((0x500000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp))))));
        __Vtemp_h1246d7cc__0[1U] = ((0xfffffff8U & 
                                     (((- (IData)((1U 
                                                   & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                      >> 7U)))) 
                                       << 0xbU) | (0x7f8U 
                                                   & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                      << 3U)))) 
                                    | (IData)(((0x500000000ULL 
                                                | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                                                >> 0xfU)))) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp))))) 
                                               >> 0x20U)));
        __Vtemp_h1246d7cc__0[2U] = (0x20U | ((vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                              << 6U) 
                                             | (7U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                                  >> 7U)))) 
                                                   >> 0x15U))));
        __Vtemp_h1246d7cc__0[3U] = (0xc0U | ((0x1fffe00U 
                                              & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                 << 9U)) 
                                             | (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                >> 0x1aU)));
        __Vtemp_h1246d7cc__0[4U] = (0x400U | (0xff000U 
                                              & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                 << 0xcU)));
        __Vtemp_h1246d7cc__0[5U] = 0x1000U;
        __Vtemp_h1246d7cc__0[6U] = 0U;
        bufp->chgWData(oldp+282,(__Vtemp_h1246d7cc__0),210);
        bufp->chgQData(oldp+289,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+291,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+293,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+295,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+297,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+299,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[5]),32);
    }
    bufp->chgBit(oldp+307,(vlSelf->clk));
    bufp->chgBit(oldp+308,(vlSelf->rst_n));
    bufp->chgIData(oldp+309,(vlSelf->if_inst_data_in),32);
    bufp->chgIData(oldp+310,(vlSelf->top__DOT__pc),32);
    bufp->chgIData(oldp+311,(vlSelf->top__DOT__wbu_regs_Result),32);
    bufp->chgIData(oldp+312,(vlSelf->top__DOT__exu_inst__DOT__alu_out),32);
    bufp->chgIData(oldp+313,(vlSelf->top__DOT__vmu_wbu_mem_rd_data_out),32);
    bufp->chgIData(oldp+314,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp),32);
    bufp->chgIData(oldp+315,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+316,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit));
    __Vtemp_h27acd29d__0[0U] = (IData)((0x500000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       ((IData)(vlSelf->rst_n) 
                                                                        & (vlSelf->__VdfgTmp_h52016a82__0 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0))))));
    __Vtemp_h27acd29d__0[1U] = ((0xfffffff8U & ((vlSelf->__VdfgTmp_h26001c9e__0 
                                                 << 0xbU) 
                                                | ((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0) 
                                                   << 3U))) 
                                | (IData)(((0x500000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           ((IData)(vlSelf->rst_n) 
                                                                            & (vlSelf->__VdfgTmp_h52016a82__0 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0))))) 
                                           >> 0x20U)));
    __Vtemp_h27acd29d__0[2U] = (0x20U | ((vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                          << 6U) | 
                                         (7U & ((7U 
                                                 & (vlSelf->__VdfgTmp_h26001c9e__0 
                                                    >> 0x15U)) 
                                                | ((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0) 
                                                   >> 0x1dU)))));
    __Vtemp_h27acd29d__0[3U] = (0xc0U | (((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0) 
                                          << 9U) | 
                                         (vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                          >> 0x1aU)));
    __Vtemp_h27acd29d__0[4U] = (0x400U | ((IData)(vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0) 
                                          << 0xcU));
    __Vtemp_h27acd29d__0[5U] = 0x1000U;
    __Vtemp_h27acd29d__0[6U] = 0U;
    bufp->chgWData(oldp+317,(__Vtemp_h27acd29d__0),210);
    bufp->chgIData(oldp+324,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+325,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+326,(vlSelf->top__DOT__my_regs__DOT__regs[0]),32);
    bufp->chgIData(oldp+327,(vlSelf->top__DOT__my_regs__DOT__regs[1]),32);
    bufp->chgIData(oldp+328,(vlSelf->top__DOT__my_regs__DOT__regs[2]),32);
    bufp->chgIData(oldp+329,(vlSelf->top__DOT__my_regs__DOT__regs[3]),32);
    bufp->chgIData(oldp+330,(vlSelf->top__DOT__my_regs__DOT__regs[4]),32);
    bufp->chgIData(oldp+331,(vlSelf->top__DOT__my_regs__DOT__regs[5]),32);
    bufp->chgIData(oldp+332,(vlSelf->top__DOT__my_regs__DOT__regs[6]),32);
    bufp->chgIData(oldp+333,(vlSelf->top__DOT__my_regs__DOT__regs[7]),32);
    bufp->chgIData(oldp+334,(vlSelf->top__DOT__my_regs__DOT__regs[8]),32);
    bufp->chgIData(oldp+335,(vlSelf->top__DOT__my_regs__DOT__regs[9]),32);
    bufp->chgIData(oldp+336,(vlSelf->top__DOT__my_regs__DOT__regs[10]),32);
    bufp->chgIData(oldp+337,(vlSelf->top__DOT__my_regs__DOT__regs[11]),32);
    bufp->chgIData(oldp+338,(vlSelf->top__DOT__my_regs__DOT__regs[12]),32);
    bufp->chgIData(oldp+339,(vlSelf->top__DOT__my_regs__DOT__regs[13]),32);
    bufp->chgIData(oldp+340,(vlSelf->top__DOT__my_regs__DOT__regs[14]),32);
    bufp->chgIData(oldp+341,(vlSelf->top__DOT__my_regs__DOT__regs[15]),32);
    bufp->chgIData(oldp+342,(vlSelf->top__DOT__my_regs__DOT__regs[16]),32);
    bufp->chgIData(oldp+343,(vlSelf->top__DOT__my_regs__DOT__regs[17]),32);
    bufp->chgIData(oldp+344,(vlSelf->top__DOT__my_regs__DOT__regs[18]),32);
    bufp->chgIData(oldp+345,(vlSelf->top__DOT__my_regs__DOT__regs[19]),32);
    bufp->chgIData(oldp+346,(vlSelf->top__DOT__my_regs__DOT__regs[20]),32);
    bufp->chgIData(oldp+347,(vlSelf->top__DOT__my_regs__DOT__regs[21]),32);
    bufp->chgIData(oldp+348,(vlSelf->top__DOT__my_regs__DOT__regs[22]),32);
    bufp->chgIData(oldp+349,(vlSelf->top__DOT__my_regs__DOT__regs[23]),32);
    bufp->chgIData(oldp+350,(vlSelf->top__DOT__my_regs__DOT__regs[24]),32);
    bufp->chgIData(oldp+351,(vlSelf->top__DOT__my_regs__DOT__regs[25]),32);
    bufp->chgIData(oldp+352,(vlSelf->top__DOT__my_regs__DOT__regs[26]),32);
    bufp->chgIData(oldp+353,(vlSelf->top__DOT__my_regs__DOT__regs[27]),32);
    bufp->chgIData(oldp+354,(vlSelf->top__DOT__my_regs__DOT__regs[28]),32);
    bufp->chgIData(oldp+355,(vlSelf->top__DOT__my_regs__DOT__regs[29]),32);
    bufp->chgIData(oldp+356,(vlSelf->top__DOT__my_regs__DOT__regs[30]),32);
    bufp->chgIData(oldp+357,(vlSelf->top__DOT__my_regs__DOT__regs[31]),32);
    bufp->chgIData(oldp+358,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+359,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
