// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__top__DOT__pc = vlSelf->top__DOT__pc;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__exu_inst__DOT__alu_out 
        = vlSelf->top__DOT__exu_inst__DOT__alu_out;
    vlSelf->__Vtrigrprev__TOP__top__DOT__idu_vmu_MemWrite 
        = vlSelf->top__DOT__idu_vmu_MemWrite;
    vlSelf->__Vtrigrprev__TOP__top__DOT__idu_vmu_MemWriteRead 
        = vlSelf->top__DOT__idu_vmu_MemWriteRead;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[6U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] = 0x500000000ULL;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[2U] = 0ULL;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[1U] = 0x300000004ULL;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[5U] = 0ULL;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[0U] = 0x300000001ULL;
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[1U] = 0x200000000ULL;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[0U] = 0U;
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[1U] = 3U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[5U] = 0ULL;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/vastz/ysyx-workbench/npc/vsrc/top.v", 11, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] top.pc)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] top.exu_inst.alu_out or [changed] top.idu_vmu_MemWrite or [changed] top.idu_vmu_MemWriteRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] top.pc)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] top.exu_inst.alu_out or [changed] top.idu_vmu_MemWrite or [changed] top.idu_vmu_MemWriteRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->if_inst_data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCTarget = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_regs_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regs_idu_reg1_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regs_idu_reg2_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wbu_regs_Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CsrWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_rd_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr_wr_data_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr_wr_data_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_wbu_ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu_vmu_MemWriteRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu_vmu_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu_exu_ALUControl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SLTD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__whichBranchD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__BitSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__SLTSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__vmu_wbu_mem_rd_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc_reg_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__my_regs__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__csrs_inst__DOT__csrs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__ALUSrcA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu_inst__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu_inst__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__idu_inst__DOT__immExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu_inst__DOT__CsrSrc = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(136, vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4);
    VL_RAND_RESET_W(102, vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4);
    vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exu_inst__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__notEqual = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__lessSigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__greatEqual = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_inst__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__lsu_inst__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0 = 0;
    vlSelf->top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h52016a82__0 = 0;
    vlSelf->__VdfgTmp_h26001c9e__0 = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__exu_inst__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__top__DOT__idu_vmu_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__idu_vmu_MemWriteRead = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
