// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__idu_vmu_MemWriteRead;
        CData/*0:0*/ top__DOT__idu_vmu_MemWrite;
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ top__DOT__PCSrc;
        CData/*0:0*/ top__DOT__idu_regs_RegWrite;
        CData/*0:0*/ top__DOT__CsrWrite;
        CData/*1:0*/ top__DOT__idu_wbu_ResultSrc;
        CData/*3:0*/ top__DOT__idu_exu_ALUControl;
        CData/*0:0*/ top__DOT__SLTD;
        CData/*0:0*/ top__DOT__JumpD;
        CData/*0:0*/ top__DOT__BranchD;
        CData/*2:0*/ top__DOT__whichBranchD;
        CData/*2:0*/ top__DOT__BitSrcD;
        CData/*0:0*/ top__DOT__SLTSrcE;
        CData/*1:0*/ top__DOT__idu_inst__DOT__ALUSrcA;
        CData/*1:0*/ top__DOT__idu_inst__DOT__ALUSrcB;
        CData/*2:0*/ top__DOT__idu_inst__DOT__ImmSrc;
        CData/*1:0*/ top__DOT__idu_inst__DOT__PCTargetSrc;
        CData/*1:0*/ top__DOT__idu_inst__DOT__CsrSrc;
        CData/*0:0*/ top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu_inst__DOT__equal;
        CData/*0:0*/ top__DOT__exu_inst__DOT__notEqual;
        CData/*0:0*/ top__DOT__exu_inst__DOT__less;
        CData/*0:0*/ top__DOT__exu_inst__DOT__lessSigned;
        CData/*0:0*/ top__DOT__exu_inst__DOT__greatEqual;
        CData/*0:0*/ top__DOT__exu_inst__DOT__greatEqualSigned;
        CData/*0:0*/ top__DOT__exu_inst__DOT__zero;
        CData/*0:0*/ top__DOT__exu_inst__DOT__less_tmp;
        CData/*0:0*/ top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__lsu_inst__DOT__wmask;
        CData/*7:0*/ top__DOT__lsu_inst__DOT____VdfgTmp_hc7811b44__0;
        CData/*0:0*/ top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__wbu_inst__DOT__FinalResultSrc;
        CData/*0:0*/ top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit;
        CData/*2:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__idu_vmu_MemWrite;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__idu_vmu_MemWriteRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__csr_rd_addr;
        SData/*15:0*/ top__DOT__lsu_inst__DOT____VdfgTmp_hc7811942__0;
        VL_IN(if_inst_data_in,31,0);
        IData/*31:0*/ top__DOT__PCTarget;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__regs_idu_reg1_rd_data;
        IData/*31:0*/ top__DOT__regs_idu_reg2_rd_data;
        IData/*31:0*/ top__DOT__wbu_regs_Result;
        IData/*31:0*/ top__DOT__csr_data;
        IData/*31:0*/ top__DOT__csr_wr_data_in_1;
        IData/*31:0*/ top__DOT__csr_wr_data_in_2;
        IData/*31:0*/ top__DOT__inst;
    };
    struct {
        IData/*31:0*/ top__DOT__SrcA;
        IData/*31:0*/ top__DOT__SrcB;
        IData/*31:0*/ top__DOT__vmu_wbu_mem_rd_data_out;
        IData/*31:0*/ top__DOT__pc_reg_inst__DOT__pc_next;
        IData/*31:0*/ top__DOT__idu_inst__DOT__immExt;
        VlWide<5>/*135:0*/ top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4;
        VlWide<4>/*101:0*/ top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4;
        IData/*31:0*/ top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0;
        IData/*31:0*/ top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__exu_inst__DOT__alu_out;
        IData/*31:0*/ top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp;
        IData/*31:0*/ top__DOT__lsu_inst__DOT__temp;
        IData/*31:0*/ top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp;
        IData/*31:0*/ top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VdfgTmp_h52016a82__0;
        IData/*23:0*/ __VdfgTmp_h26001c9e__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__top__DOT__pc;
        IData/*31:0*/ __Vtrigrprev__TOP__top__DOT__exu_inst__DOT__alu_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__my_regs__DOT__regs;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__csrs_inst__DOT__csrs;
        VlUnpacked<QData/*34:0*/, 7> top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 7> top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 6> top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 6> top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 6> top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 4> top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
