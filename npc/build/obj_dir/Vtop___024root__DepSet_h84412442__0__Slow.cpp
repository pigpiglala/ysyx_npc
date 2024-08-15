// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_halt_ret_TOP____024unit();
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h367a1fec_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__pc)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->top__DOT__pc))));
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
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)((0x1fU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x14U))))))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U)))))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 7U))))))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__inst 
                                                >> 0x14U)))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (QData)((IData)((0xfffff000U & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->top__DOT__pc);
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
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__pc;
    vlSelf->__VdfgTmp_h52016a82__0 = vlSelf->top__DOT__my_regs__DOT__regs
        [((0x73U == vlSelf->top__DOT__inst) ? 0xfU : 
          (0x1fU & (vlSelf->top__DOT__inst >> 0x14U)))];
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (vlSelf->top__DOT__inst >> 0x14U));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->top__DOT__inst) 
                         | ((0x800U & (vlSelf->top__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->top__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 7U))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->top__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 7U)))));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__inst >> 0x14U));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->top__DOT__inst);
    vlSelf->top__DOT__csr_rd_addr = ((0x73U == vlSelf->top__DOT__inst)
                                      ? 0x305U : ((0x30200073U 
                                                   == vlSelf->top__DOT__inst)
                                                   ? 0x341U
                                                   : 
                                                  (vlSelf->top__DOT__inst 
                                                   >> 0x14U)));
    if (vlSelf->rst_n) {
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
    } else {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__regs_idu_reg1_rd_data = 0U;
    }
    if ((0x40U & vlSelf->top__DOT__inst)) {
        if ((0x20U & vlSelf->top__DOT__inst)) {
            if ((0x10U & vlSelf->top__DOT__inst)) {
                if ((8U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                } else if ((4U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                } else if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        if ((1U == (vlSelf->top__DOT__inst 
                                    >> 0x14U))) {
                            Vtop___024unit____Vdpiimwrap_halt_ret_TOP____024unit();
                        } else if ((0U == (vlSelf->top__DOT__inst 
                                           >> 0x14U))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 1U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 2U;
                            vlSelf->top__DOT__CsrWrite = 1U;
                        } else if ((0x302U == (vlSelf->top__DOT__inst 
                                               >> 0x14U))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 1U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 2U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 2U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__inst 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 1U;
                        } else if ((2U == (7U & (vlSelf->top__DOT__inst 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 1U;
                            vlSelf->top__DOT__CsrWrite = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else if ((8U & vlSelf->top__DOT__inst)) {
                if ((4U & vlSelf->top__DOT__inst)) {
                    if ((2U & vlSelf->top__DOT__inst)) {
                        if ((1U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 1U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 2U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 4U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 1U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 2U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((0x4000U & vlSelf->top__DOT__inst)) {
                        if ((0x2000U & vlSelf->top__DOT__inst)) {
                            if ((0x1000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 1U;
                                vlSelf->top__DOT__whichBranchD = 3U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            } else {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 1U;
                                vlSelf->top__DOT__whichBranchD = 2U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 1U;
                            vlSelf->top__DOT__whichBranchD = 5U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 1U;
                            vlSelf->top__DOT__whichBranchD = 4U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    } else if ((1U & (~ (vlSelf->top__DOT__inst 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 1U;
                            vlSelf->top__DOT__whichBranchD = 1U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 1U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 2U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__inst)) {
        if ((0x10U & vlSelf->top__DOT__inst)) {
            if ((8U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            } else if ((4U & vlSelf->top__DOT__inst)) {
                if ((2U & vlSelf->top__DOT__inst)) {
                    if ((1U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 0U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    if ((0x4000U & vlSelf->top__DOT__inst)) {
                        if ((0x2000U & vlSelf->top__DOT__inst)) {
                            if ((0x1000U & vlSelf->top__DOT__inst)) {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 0U;
                                vlSelf->top__DOT__whichBranchD = 0U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 5U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            } else {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 0U;
                                vlSelf->top__DOT__whichBranchD = 0U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                            if ((0U == (vlSelf->top__DOT__inst 
                                        >> 0x19U))) {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 0U;
                                vlSelf->top__DOT__whichBranchD = 0U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 8U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            } else if ((0x20U == (vlSelf->top__DOT__inst 
                                                  >> 0x19U))) {
                                vlSelf->top__DOT__SLTD = 0U;
                                vlSelf->top__DOT__JumpD = 0U;
                                vlSelf->top__DOT__BranchD = 0U;
                                vlSelf->top__DOT__whichBranchD = 0U;
                                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                                vlSelf->top__DOT__idu_exu_ALUControl = 9U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                                vlSelf->top__DOT__BitSrcD = 3U;
                                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                                vlSelf->top__DOT__CsrWrite = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 6U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    } else if ((0x2000U & vlSelf->top__DOT__inst)) {
                        if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__SLTD = 1U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 2U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else {
                            vlSelf->top__DOT__SLTD = 1U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 4U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 7U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else if ((0U == (vlSelf->top__DOT__inst 
                                       >> 0x19U))) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else if ((0x20U == (vlSelf->top__DOT__inst 
                                          >> 0x19U))) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 5U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    }
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            }
        } else if ((8U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        } else if ((4U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        } else if ((2U & vlSelf->top__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__inst)) {
                if ((0U == (7U & (vlSelf->top__DOT__inst 
                                  >> 0xcU)))) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 1U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 3U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                } else if ((1U == (7U & (vlSelf->top__DOT__inst 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 1U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 3U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 2U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                } else if ((2U == (7U & (vlSelf->top__DOT__inst 
                                         >> 0xcU)))) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 1U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 3U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                }
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__inst)) {
        if ((8U & vlSelf->top__DOT__inst)) {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        } else if ((4U & vlSelf->top__DOT__inst)) {
            if ((2U & vlSelf->top__DOT__inst)) {
                if ((1U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 2U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 0U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            }
        } else if ((2U & vlSelf->top__DOT__inst)) {
            if ((1U & vlSelf->top__DOT__inst)) {
                if ((0x4000U & vlSelf->top__DOT__inst)) {
                    if ((0x2000U & vlSelf->top__DOT__inst)) {
                        if ((0x1000U & vlSelf->top__DOT__inst)) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 5U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                        if ((0x20U == (vlSelf->top__DOT__inst 
                                       >> 0x19U))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 9U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 6U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        } else if ((0U == (vlSelf->top__DOT__inst 
                                           >> 0x19U))) {
                            vlSelf->top__DOT__SLTD = 0U;
                            vlSelf->top__DOT__JumpD = 0U;
                            vlSelf->top__DOT__BranchD = 0U;
                            vlSelf->top__DOT__whichBranchD = 0U;
                            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                            vlSelf->top__DOT__idu_exu_ALUControl = 8U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 6U;
                            vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                            vlSelf->top__DOT__BitSrcD = 3U;
                            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                            vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                            vlSelf->top__DOT__CsrWrite = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 6U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__inst)) {
                    if ((0x1000U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__SLTD = 1U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 2U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else {
                        vlSelf->top__DOT__SLTD = 1U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 4U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 3U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 7U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 6U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                } else {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                }
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 0U;
                vlSelf->top__DOT__BitSrcD = 3U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        }
    } else if ((8U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__SLTD = 0U;
        vlSelf->top__DOT__JumpD = 0U;
        vlSelf->top__DOT__BranchD = 0U;
        vlSelf->top__DOT__whichBranchD = 0U;
        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
        vlSelf->top__DOT__BitSrcD = 3U;
        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
    } else if ((4U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__SLTD = 0U;
        vlSelf->top__DOT__JumpD = 0U;
        vlSelf->top__DOT__BranchD = 0U;
        vlSelf->top__DOT__whichBranchD = 0U;
        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
        vlSelf->top__DOT__BitSrcD = 3U;
        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
    } else if ((2U & vlSelf->top__DOT__inst)) {
        if ((1U & vlSelf->top__DOT__inst)) {
            if ((0x4000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelf->top__DOT__inst)) {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 2U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    } else {
                        vlSelf->top__DOT__SLTD = 0U;
                        vlSelf->top__DOT__JumpD = 0U;
                        vlSelf->top__DOT__BranchD = 0U;
                        vlSelf->top__DOT__whichBranchD = 0U;
                        vlSelf->top__DOT__idu_wbu_ResultSrc = 0U;
                        vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                        vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                        vlSelf->top__DOT__BitSrcD = 1U;
                        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                        vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                        vlSelf->top__DOT__CsrWrite = 0U;
                    }
                }
            } else if ((0x2000U & vlSelf->top__DOT__inst)) {
                if ((1U & (~ (vlSelf->top__DOT__inst 
                              >> 0xcU)))) {
                    vlSelf->top__DOT__SLTD = 0U;
                    vlSelf->top__DOT__JumpD = 0U;
                    vlSelf->top__DOT__BranchD = 0U;
                    vlSelf->top__DOT__whichBranchD = 0U;
                    vlSelf->top__DOT__idu_wbu_ResultSrc = 0U;
                    vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                    vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                    vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                    vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                    vlSelf->top__DOT__BitSrcD = 3U;
                    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                    vlSelf->top__DOT__CsrWrite = 0U;
                }
            } else if ((0x1000U & vlSelf->top__DOT__inst)) {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 0U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                vlSelf->top__DOT__BitSrcD = 5U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                vlSelf->top__DOT__CsrWrite = 0U;
            } else {
                vlSelf->top__DOT__SLTD = 0U;
                vlSelf->top__DOT__JumpD = 0U;
                vlSelf->top__DOT__BranchD = 0U;
                vlSelf->top__DOT__whichBranchD = 0U;
                vlSelf->top__DOT__idu_wbu_ResultSrc = 0U;
                vlSelf->top__DOT__idu_vmu_MemWriteRead = 1U;
                vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
                vlSelf->top__DOT__idu_exu_ALUControl = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 0U;
                vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__idu_regs_RegWrite = 1U;
                vlSelf->top__DOT__BitSrcD = 4U;
                vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
                vlSelf->top__DOT__idu_inst__DOT__CsrSrc = 0U;
                vlSelf->top__DOT__CsrWrite = 0U;
            }
        } else {
            vlSelf->top__DOT__SLTD = 0U;
            vlSelf->top__DOT__JumpD = 0U;
            vlSelf->top__DOT__BranchD = 0U;
            vlSelf->top__DOT__whichBranchD = 0U;
            vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
            vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
            vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
            vlSelf->top__DOT__idu_exu_ALUControl = 0U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
            vlSelf->top__DOT__idu_regs_RegWrite = 0U;
            vlSelf->top__DOT__BitSrcD = 3U;
            vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
        }
    } else {
        vlSelf->top__DOT__SLTD = 0U;
        vlSelf->top__DOT__JumpD = 0U;
        vlSelf->top__DOT__BranchD = 0U;
        vlSelf->top__DOT__whichBranchD = 0U;
        vlSelf->top__DOT__idu_wbu_ResultSrc = 1U;
        vlSelf->top__DOT__idu_vmu_MemWriteRead = 0U;
        vlSelf->top__DOT__idu_vmu_MemWrite = 0U;
        vlSelf->top__DOT__idu_exu_ALUControl = 0U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = 1U;
        vlSelf->top__DOT__idu_inst__DOT__ImmSrc = 1U;
        vlSelf->top__DOT__idu_regs_RegWrite = 0U;
        vlSelf->top__DOT__BitSrcD = 3U;
        vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = 0U;
    }
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
    } else {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__regs_idu_reg2_rd_data = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 = 0U;
        vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__csr_data = 0U;
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1U] = 0U;
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data));
    vlSelf->__VdfgTmp_h26001c9e__0 = (0xffffffU & (- (IData)(
                                                             ((IData)(vlSelf->rst_n) 
                                                              & (vlSelf->__VdfgTmp_h52016a82__0 
                                                                 >> 7U)))));
    vlSelf->__Vtableidx1 = vlSelf->top__DOT__BitSrcD;
    vlSelf->top__DOT__lsu_inst__DOT__wmask = Vtop__ConstPool__TABLE_h367a1fec_0
        [vlSelf->__Vtableidx1];
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
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                       == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
           == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
                          == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__idu_inst__DOT__ImmSrc) 
              == vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu_inst__DOT__immExt = ((IData)(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit)
                                                ? vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out
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
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__vmu_wbu_mem_rd_data_out));
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__vmu_wbu_mem_rd_data_out;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__idu_inst__DOT__immExt));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                             + vlSelf->top__DOT__regs_idu_reg1_rd_data))));
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((vlSelf->top__DOT__idu_inst__DOT__immExt 
                           + vlSelf->top__DOT__pc)));
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__idu_inst__DOT__immExt;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__idu_inst__DOT__immExt 
           + vlSelf->top__DOT__regs_idu_reg1_rd_data);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__idu_inst__DOT__immExt 
           + vlSelf->top__DOT__pc);
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
