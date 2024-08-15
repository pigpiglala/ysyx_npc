// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst_n", false,-1);
    tracep->declBus(c+310,"if_inst_data_in", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst_n", false,-1);
    tracep->declBus(c+310,"if_inst_data_in", false,-1, 31,0);
    tracep->declBit(c+361,"PCSrc", false,-1);
    tracep->declBus(c+56,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBit(c+222,"idu_regs_RegWrite", false,-1);
    tracep->declBus(c+223,"idu_regs_reg_wr_addr", false,-1, 4,0);
    tracep->declBus(c+224,"idu_regs_rd1_addr", false,-1, 4,0);
    tracep->declBus(c+225,"idu_regs_rd2_addr", false,-1, 4,0);
    tracep->declBus(c+57,"regs_idu_reg1_rd_data", false,-1, 31,0);
    tracep->declBus(c+58,"regs_idu_reg2_rd_data", false,-1, 31,0);
    tracep->declBus(c+312,"wbu_regs_Result", false,-1, 31,0);
    tracep->declBit(c+226,"CsrWrite", false,-1);
    tracep->declBus(c+227,"csr_rd_addr", false,-1, 11,0);
    tracep->declBus(c+59,"csr_data", false,-1, 31,0);
    tracep->declBus(c+60,"csr_wr_data_in_1", false,-1, 31,0);
    tracep->declBus(c+228,"csr_addr_out_1", false,-1, 11,0);
    tracep->declBus(c+61,"csr_wr_data_in_2", false,-1, 31,0);
    tracep->declBus(c+229,"csr_addr_out_2", false,-1, 11,0);
    tracep->declBus(c+311,"if_inst_addr_out", false,-1, 31,0);
    tracep->declBus(c+230,"if_inst_data_out", false,-1, 31,0);
    tracep->declBus(c+230,"inst", false,-1, 31,0);
    tracep->declBus(c+231,"idu_wbu_ResultSrc", false,-1, 1,0);
    tracep->declBit(c+232,"idu_vmu_MemWriteRead", false,-1);
    tracep->declBit(c+233,"idu_vmu_MemWrite", false,-1);
    tracep->declBus(c+234,"idu_exu_ALUControl", false,-1, 3,0);
    tracep->declBus(c+62,"SrcA", false,-1, 31,0);
    tracep->declBus(c+63,"SrcB", false,-1, 31,0);
    tracep->declBit(c+235,"SLTD", false,-1);
    tracep->declBit(c+236,"JumpD", false,-1);
    tracep->declBit(c+237,"BranchD", false,-1);
    tracep->declBus(c+238,"whichBranchD", false,-1, 2,0);
    tracep->declBus(c+239,"BitSrcD", false,-1, 2,0);
    tracep->declBus(c+313,"exu_vmu_result", false,-1, 31,0);
    tracep->declBit(c+64,"PCSrcE", false,-1);
    tracep->declBit(c+65,"SLTSrcE", false,-1);
    tracep->declBus(c+314,"vmu_wbu_mem_rd_data_out", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_inst ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst_n", false,-1);
    tracep->declBit(c+226,"csr_wr_en_in", false,-1);
    tracep->declBus(c+228,"csr_wr_addr_in_1", false,-1, 11,0);
    tracep->declBus(c+60,"csr_wr_data_in_1", false,-1, 31,0);
    tracep->declBus(c+229,"csr_wr_addr_in_2", false,-1, 11,0);
    tracep->declBus(c+61,"csr_wr_data_in_2", false,-1, 31,0);
    tracep->declBus(c+227,"csr_rd_addr_in", false,-1, 11,0);
    tracep->declBus(c+59,"csr_rd_data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_inst ");
    tracep->declBus(c+234,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+231,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+62,"op1_in", false,-1, 31,0);
    tracep->declBus(c+63,"op2_in", false,-1, 31,0);
    tracep->declBit(c+236,"Jump", false,-1);
    tracep->declBit(c+237,"Branch", false,-1);
    tracep->declBus(c+238,"whichBranch", false,-1, 2,0);
    tracep->declBit(c+65,"SLTSrc", false,-1);
    tracep->declBus(c+313,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+64,"PCSrc", false,-1);
    tracep->declBus(c+313,"alu_out", false,-1, 31,0);
    tracep->declBit(c+66,"equal", false,-1);
    tracep->declBit(c+67,"notEqual", false,-1);
    tracep->declBit(c+68,"less", false,-1);
    tracep->declBit(c+69,"lessSigned", false,-1);
    tracep->declBit(c+70,"greatEqual", false,-1);
    tracep->declBit(c+71,"greatEqualSigned", false,-1);
    tracep->declBit(c+72,"zero", false,-1);
    tracep->declBit(c+73,"less_tmp", false,-1);
    tracep->pushNamePrefix("Branch_mux ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 0,0);
    tracep->declBus(c+238,"key", false,-1, 2,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+74,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 0,0);
    tracep->declBus(c+238,"key", false,-1, 2,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+74,"lut", false,-1, 23,0);
    tracep->declBus(c+366,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+75+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+81+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+87,"lut_out", false,-1, 0,0);
    tracep->declBit(c+88,"hit", false,-1);
    tracep->declBus(c+367,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLTSrc_mux ");
    tracep->declBus(c+368,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 0,0);
    tracep->declBus(c+73,"key", false,-1, 0,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+369,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+368,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 0,0);
    tracep->declBus(c+73,"key", false,-1, 0,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+369,"lut", false,-1, 3,0);
    tracep->declBus(c+368,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+89,"lut_out", false,-1, 0,0);
    tracep->declBit(c+90,"hit", false,-1);
    tracep->declBus(c+370,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+62,"op1_in", false,-1, 31,0);
    tracep->declBus(c+63,"op2_in", false,-1, 31,0);
    tracep->declBus(c+234,"alu_op", false,-1, 3,0);
    tracep->declBus(c+313,"alu_out", false,-1, 31,0);
    tracep->declBit(c+66,"equal", false,-1);
    tracep->declBit(c+67,"notEqual", false,-1);
    tracep->declBit(c+68,"less", false,-1);
    tracep->declBit(c+69,"lessSigned", false,-1);
    tracep->declBit(c+70,"greatEqual", false,-1);
    tracep->declBit(c+71,"greatEqualSigned", false,-1);
    tracep->declBus(c+62,"op1_in_signed", false,-1, 31,0);
    tracep->declBus(c+63,"op2_in_signed", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("less_tmp_mux ");
    tracep->declBus(c+368,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 0,0);
    tracep->declBus(c+238,"key", false,-1, 2,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+91,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+368,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 0,0);
    tracep->declBus(c+238,"key", false,-1, 2,0);
    tracep->declBus(c+365,"default_out", false,-1, 0,0);
    tracep->declBus(c+91,"lut", false,-1, 7,0);
    tracep->declBus(c+366,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+92+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+94+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+96,"lut_out", false,-1, 0,0);
    tracep->declBit(c+97,"hit", false,-1);
    tracep->declBus(c+370,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+311,"inst_addr_in", false,-1, 31,0);
    tracep->declBus(c+230,"inst_data_in", false,-1, 31,0);
    tracep->declBus(c+57,"rd1_data_in", false,-1, 31,0);
    tracep->declBus(c+58,"rd2_data_in", false,-1, 31,0);
    tracep->declBus(c+59,"csr_data_in", false,-1, 31,0);
    tracep->declBus(c+227,"csr_rd_addr_out", false,-1, 11,0);
    tracep->declBit(c+226,"CsrWrite", false,-1);
    tracep->declBus(c+228,"csr_wr_addr_out_1", false,-1, 11,0);
    tracep->declBus(c+60,"csr_wr_data_out_1", false,-1, 31,0);
    tracep->declBus(c+229,"csr_wr_addr_out_2", false,-1, 11,0);
    tracep->declBus(c+61,"csr_wr_data_out_2", false,-1, 31,0);
    tracep->declBus(c+224,"rd1_addr_out", false,-1, 4,0);
    tracep->declBus(c+225,"rd2_addr_out", false,-1, 4,0);
    tracep->declBus(c+223,"reg_wr_addr_out", false,-1, 4,0);
    tracep->declBit(c+235,"SLT", false,-1);
    tracep->declBit(c+236,"Jump", false,-1);
    tracep->declBit(c+237,"Branch", false,-1);
    tracep->declBus(c+238,"whichBranch", false,-1, 2,0);
    tracep->declBus(c+231,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+232,"MemWriteRead", false,-1);
    tracep->declBit(c+233,"MemWrite", false,-1);
    tracep->declBus(c+234,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+222,"RegWrite", false,-1);
    tracep->declBus(c+62,"SrcA", false,-1, 31,0);
    tracep->declBus(c+63,"SrcB", false,-1, 31,0);
    tracep->declBus(c+239,"BitSrc", false,-1, 2,0);
    tracep->declBus(c+56,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+240,"ALUSrcA", false,-1, 1,0);
    tracep->declBus(c+241,"ALUSrcB", false,-1, 1,0);
    tracep->declBus(c+242,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+243,"immExt", false,-1, 31,0);
    tracep->declBus(c+244,"PCTargetSrc", false,-1, 1,0);
    tracep->declBus(c+245,"imm", false,-1, 11,0);
    tracep->declBus(c+246,"opcode", false,-1, 6,0);
    tracep->declBus(c+223,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+247,"funct3", false,-1, 2,0);
    tracep->declBus(c+224,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+225,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+248,"funct7", false,-1, 6,0);
    tracep->declBus(c+245,"csr", false,-1, 11,0);
    tracep->declBus(c+249,"CsrSrc", false,-1, 1,0);
    tracep->declBus(c+371,"four", false,-1, 31,0);
    tracep->declBus(c+63,"srcb_signed", false,-1, 31,0);
    tracep->pushNamePrefix("PCTarget_mux ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+98,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+98,"lut", false,-1, 135,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+103+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+115,"lut_out", false,-1, 31,0);
    tracep->declBit(c+116,"hit", false,-1);
    tracep->declBus(c+375,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SrcA_mux ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 31,0);
    tracep->declBus(c+240,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+117,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 31,0);
    tracep->declBus(c+240,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+117,"lut", false,-1, 135,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+122+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+130+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+134,"lut_out", false,-1, 31,0);
    tracep->declBit(c+135,"hit", false,-1);
    tracep->declBus(c+375,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SrcB_mux ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+241,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+136,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+241,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+136,"lut", false,-1, 135,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+141+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+149+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+153,"lut_out", false,-1, 31,0);
    tracep->declBit(c+154,"hit", false,-1);
    tracep->declBus(c+375,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_wr_data_out_1_mux ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+249,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+155,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+249,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+155,"lut", false,-1, 101,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+159+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+27+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+165+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+168,"lut_out", false,-1, 31,0);
    tracep->declBit(c+169,"hit", false,-1);
    tracep->declBus(c+376,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_wr_data_out_2_mux ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->declBus(c+249,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+170,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->declBus(c+249,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+170,"lut", false,-1, 101,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+174+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+30+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+180+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+183,"lut_out", false,-1, 31,0);
    tracep->declBit(c+184,"hit", false,-1);
    tracep->declBus(c+376,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctrlu_inst ");
    tracep->declBus(c+245,"imm", false,-1, 11,0);
    tracep->declBus(c+246,"op", false,-1, 6,0);
    tracep->declBus(c+247,"funct3", false,-1, 2,0);
    tracep->declBus(c+248,"funct7", false,-1, 6,0);
    tracep->declBit(c+235,"SLT", false,-1);
    tracep->declBit(c+236,"Jump", false,-1);
    tracep->declBit(c+237,"Branch", false,-1);
    tracep->declBus(c+238,"whichBranch", false,-1, 2,0);
    tracep->declBus(c+231,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+222,"RegWrite", false,-1);
    tracep->declBit(c+232,"MemWriteRead", false,-1);
    tracep->declBit(c+233,"MemWrite", false,-1);
    tracep->declBus(c+234,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+240,"ALUSrcA", false,-1, 1,0);
    tracep->declBus(c+241,"ALUSrcB", false,-1, 1,0);
    tracep->declBus(c+242,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+239,"BitSrc", false,-1, 2,0);
    tracep->declBus(c+244,"PCTargetSrc", false,-1, 1,0);
    tracep->declBit(c+226,"CsrWrite", false,-1);
    tracep->declBus(c+249,"CsrSrc", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend_inst ");
    tracep->declBus(c+230,"inst_data_in", false,-1, 31,0);
    tracep->declBus(c+242,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+243,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+243,"out", false,-1, 31,0);
    tracep->declBus(c+242,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+243,"out", false,-1, 31,0);
    tracep->declBus(c+242,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 244,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+258+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+33+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+272+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+279,"lut_out", false,-1, 31,0);
    tracep->declBit(c+280,"hit", false,-1);
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ifu_inst ");
    tracep->declBus(c+311,"inst_addr_in", false,-1, 31,0);
    tracep->declBus(c+230,"inst_data_in", false,-1, 31,0);
    tracep->declBus(c+311,"inst_addr_out", false,-1, 31,0);
    tracep->declBus(c+230,"inst_data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_inst ");
    tracep->declBit(c+232,"mem_wr_rd_en_in", false,-1);
    tracep->declBit(c+233,"mem_wr_en_in", false,-1);
    tracep->declBus(c+313,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+58,"mem_wr_data_in", false,-1, 31,0);
    tracep->declBus(c+239,"BitSrc", false,-1, 2,0);
    tracep->declBus(c+314,"mem_rd_data_out", false,-1, 31,0);
    tracep->declBus(c+315,"mem_wr_data_in_tmp", false,-1, 31,0);
    tracep->declBus(c+281,"wmask", false,-1, 7,0);
    tracep->declBus(c+380,"temp", false,-1, 31,0);
    tracep->declBus(c+282,"mem_rd_data_out_tmp", false,-1, 31,0);
    tracep->pushNamePrefix("mem_rd_data_out_mux ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+314,"out", false,-1, 31,0);
    tracep->declBus(c+239,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+283,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+314,"out", false,-1, 31,0);
    tracep->declBus(c+239,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+283,"lut", false,-1, 209,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+290+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+40+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+302+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+316,"lut_out", false,-1, 31,0);
    tracep->declBit(c+317,"hit", false,-1);
    tracep->declBus(c+367,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_wr_data_in_mux ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+315,"out", false,-1, 31,0);
    tracep->declBus(c+239,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+318,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+315,"out", false,-1, 31,0);
    tracep->declBus(c+239,"key", false,-1, 2,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+318,"lut", false,-1, 209,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+185+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+46+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+197+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+325,"lut_out", false,-1, 31,0);
    tracep->declBit(c+326,"hit", false,-1);
    tracep->declBus(c+367,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_regs ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst_n", false,-1);
    tracep->declBit(c+222,"reg_wr_en_in", false,-1);
    tracep->declBus(c+223,"reg_wr_addr_in", false,-1, 4,0);
    tracep->declBus(c+312,"reg_wr_data_in", false,-1, 31,0);
    tracep->declBus(c+224,"reg1_rd_addr_in", false,-1, 4,0);
    tracep->declBus(c+225,"reg2_rd_addr_in", false,-1, 4,0);
    tracep->declBus(c+57,"reg1_rd_data_out", false,-1, 31,0);
    tracep->declBus(c+58,"reg2_rd_data_out", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+327+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst_n", false,-1);
    tracep->declBit(c+64,"PCSrc", false,-1);
    tracep->declBus(c+56,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBus(c+203,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_inst ");
    tracep->declBus(c+231,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+235,"SLT", false,-1);
    tracep->declBit(c+65,"SLTSrc", false,-1);
    tracep->declBus(c+313,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+314,"mem_rd_data_in", false,-1, 31,0);
    tracep->declBus(c+312,"Result", false,-1, 31,0);
    tracep->declBus(c+204,"FinalResultSrc", false,-1, 1,0);
    tracep->pushNamePrefix("Result_mux ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+312,"out", false,-1, 31,0);
    tracep->declBus(c+204,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+368,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+312,"out", false,-1, 31,0);
    tracep->declBus(c+204,"key", false,-1, 1,0);
    tracep->declBus(c+373,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 135,0);
    tracep->declBus(c+374,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+210+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+218+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+359,"lut_out", false,-1, 31,0);
    tracep->declBit(c+360,"hit", false,-1);
    tracep->declBus(c+375,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h8fba5d78__0;
    VlWide<5>/*159:0*/ __Vtemp_hcce9e454__0;
    VlWide<4>/*127:0*/ __Vtemp_hce57d4d9__0;
    VlWide<5>/*159:0*/ __Vtemp_hac3c1fc7__0;
    VlWide<8>/*255:0*/ __Vtemp_h578d117c__0;
    VlWide<7>/*223:0*/ __Vtemp_h1246d7cc__0;
    VlWide<7>/*223:0*/ __Vtemp_h27acd29d__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__PCTarget),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__regs_idu_reg1_rd_data),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__regs_idu_reg2_rd_data),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__csr_data),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__csr_wr_data_in_1),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__csr_wr_data_in_2),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__SrcA),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__SrcB),32);
    bufp->fullBit(oldp+64,(((IData)(vlSelf->top__DOT__JumpD) 
                            | ((IData)(vlSelf->top__DOT__BranchD) 
                               & (IData)(vlSelf->top__DOT__exu_inst__DOT__zero)))));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__SLTSrcE));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__exu_inst__DOT__equal));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__exu_inst__DOT__notEqual));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__exu_inst__DOT__less));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__exu_inst__DOT__lessSigned));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__exu_inst__DOT__greatEqual));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__exu_inst__DOT__greatEqualSigned));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__exu_inst__DOT__zero));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__exu_inst__DOT__less_tmp));
    bufp->fullIData(oldp+74,((0x2468aU | (((IData)(vlSelf->top__DOT__exu_inst__DOT__equal) 
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
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__exu_inst__DOT__Branch_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__exu_inst__DOT__SLTSrc_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+91,((0x48U | (((IData)(vlSelf->top__DOT__exu_inst__DOT__less) 
                                        << 4U) | (IData)(vlSelf->top__DOT__exu_inst__DOT__lessSigned)))),8);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__exu_inst__DOT__less_tmp_mux__DOT__i0__DOT__hit));
    __Vtemp_h8fba5d78__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__csr_data))));
    __Vtemp_h8fba5d78__0[1U] = ((vlSelf->top__DOT__csr_data 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__csr_data))) 
                                                   >> 0x20U)));
    __Vtemp_h8fba5d78__0[2U] = (8U | (((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                        + vlSelf->top__DOT__regs_idu_reg1_rd_data) 
                                       << 4U) | (vlSelf->top__DOT__csr_data 
                                                 >> 0x1eU)));
    __Vtemp_h8fba5d78__0[3U] = (0x10U | (((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                           + vlSelf->top__DOT__pc) 
                                          << 6U) | 
                                         ((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                           + vlSelf->top__DOT__regs_idu_reg1_rd_data) 
                                          >> 0x1cU)));
    __Vtemp_h8fba5d78__0[4U] = ((vlSelf->top__DOT__idu_inst__DOT__immExt 
                                 + vlSelf->top__DOT__pc) 
                                >> 0x1aU);
    bufp->fullWData(oldp+98,(__Vtemp_h8fba5d78__0),136);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+105,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+107,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+109,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__idu_inst__DOT__PCTarget_mux__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+117,(vlSelf->top__DOT__idu_inst__DOT____Vcellinp__SrcA_mux____pinNumber4),136);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__idu_inst__DOT__SrcA_mux__DOT__i0__DOT__hit));
    __Vtemp_hcce9e454__0[0U] = vlSelf->top__DOT__csr_data;
    __Vtemp_hcce9e454__0[1U] = 0x13U;
    __Vtemp_hcce9e454__0[2U] = (0xcU | (vlSelf->top__DOT__idu_inst__DOT__immExt 
                                        << 4U));
    __Vtemp_hcce9e454__0[3U] = ((vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                 << 6U) | (vlSelf->top__DOT__idu_inst__DOT__immExt 
                                           >> 0x1cU));
    __Vtemp_hcce9e454__0[4U] = (0x40U | (vlSelf->top__DOT__regs_idu_reg2_rd_data 
                                         >> 0x1aU));
    bufp->fullWData(oldp+136,(__Vtemp_hcce9e454__0),136);
    bufp->fullQData(oldp+141,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__idu_inst__DOT__SrcB_mux__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__idu_inst__DOT____Vcellinp__csr_wr_data_out_1_mux____pinNumber4),102);
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_1_mux__DOT__i0__DOT__hit));
    __Vtemp_hce57d4d9__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data))));
    __Vtemp_hce57d4d9__0[1U] = ((vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                                 << 2U) | (IData)((
                                                   (0x200000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__regs_idu_reg2_rd_data))) 
                                                   >> 0x20U)));
    __Vtemp_hce57d4d9__0[2U] = (4U | (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                                       << 4U) | (vlSelf->top__DOT__idu_inst__DOT____VdfgTmp_h523e3c21__0 
                                                 >> 0x1eU)));
    __Vtemp_hce57d4d9__0[3U] = (((IData)((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__regs_idu_reg1_rd_data)) 
                                                       >> 0x20U)) 
                                              << 4U));
    bufp->fullWData(oldp+170,(__Vtemp_hce57d4d9__0),102);
    bufp->fullQData(oldp+174,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+176,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+178,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__idu_inst__DOT__csr_wr_data_out_2_mux__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+185,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+187,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+189,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+191,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+193,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+195,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__pc_reg_inst__DOT__pc_next),32);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__wbu_inst__DOT__FinalResultSrc),2);
    __Vtemp_hac3c1fc7__0[0U] = 1U;
    __Vtemp_hac3c1fc7__0[1U] = 3U;
    __Vtemp_hac3c1fc7__0[2U] = (8U | (vlSelf->top__DOT__vmu_wbu_mem_rd_data_out 
                                      << 4U));
    __Vtemp_hac3c1fc7__0[3U] = ((vlSelf->top__DOT__exu_inst__DOT__alu_out 
                                 << 6U) | (vlSelf->top__DOT__vmu_wbu_mem_rd_data_out 
                                           >> 0x1cU));
    __Vtemp_hac3c1fc7__0[4U] = (0x40U | (vlSelf->top__DOT__exu_inst__DOT__alu_out 
                                         >> 0x1aU));
    bufp->fullWData(oldp+205,(__Vtemp_hac3c1fc7__0),136);
    bufp->fullQData(oldp+210,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+212,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+216,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__idu_regs_RegWrite));
    bufp->fullCData(oldp+223,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+224,((0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+225,(((0x73U == vlSelf->top__DOT__inst)
                                ? 0xfU : (0x1fU & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)))),5);
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__CsrWrite));
    bufp->fullSData(oldp+227,(vlSelf->top__DOT__csr_rd_addr),12);
    bufp->fullSData(oldp+228,(((0x73U == vlSelf->top__DOT__inst)
                                ? 0x341U : (vlSelf->top__DOT__inst 
                                            >> 0x14U))),12);
    bufp->fullSData(oldp+229,(((0x73U == vlSelf->top__DOT__inst)
                                ? 0x342U : (vlSelf->top__DOT__inst 
                                            >> 0x14U))),12);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__inst),32);
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__idu_wbu_ResultSrc),2);
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__idu_vmu_MemWriteRead));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__idu_vmu_MemWrite));
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__idu_exu_ALUControl),4);
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__SLTD));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__JumpD));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__BranchD));
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__whichBranchD),3);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__BitSrcD),3);
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__idu_inst__DOT__ALUSrcA),2);
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__idu_inst__DOT__ALUSrcB),2);
    bufp->fullCData(oldp+242,(vlSelf->top__DOT__idu_inst__DOT__ImmSrc),3);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__idu_inst__DOT__immExt),32);
    bufp->fullCData(oldp+244,(vlSelf->top__DOT__idu_inst__DOT__PCTargetSrc),2);
    bufp->fullSData(oldp+245,((vlSelf->top__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+246,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullCData(oldp+247,((7U & (vlSelf->top__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+248,((vlSelf->top__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+249,(vlSelf->top__DOT__idu_inst__DOT__CsrSrc),2);
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
    bufp->fullWData(oldp+250,(__Vtemp_h578d117c__0),245);
    bufp->fullQData(oldp+258,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+260,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+262,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+264,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+266,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+268,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+270,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__idu_inst__DOT__extend_inst__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__lsu_inst__DOT__wmask),8);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp),32);
    __Vtemp_h1246d7cc__0[0U] = (IData)((0x500000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp))))));
    __Vtemp_h1246d7cc__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_tmp 
                                                                >> 7U)))) 
                                                 << 0xbU) 
                                                | (0x7f8U 
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
                                          << 6U) | 
                                         (7U & ((- (IData)(
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
    bufp->fullWData(oldp+283,(__Vtemp_h1246d7cc__0),210);
    bufp->fullQData(oldp+290,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+292,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+294,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+296,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+298,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+300,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullBit(oldp+308,(vlSelf->clk));
    bufp->fullBit(oldp+309,(vlSelf->rst_n));
    bufp->fullIData(oldp+310,(vlSelf->if_inst_data_in),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__wbu_regs_Result),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__exu_inst__DOT__alu_out),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__vmu_wbu_mem_rd_data_out),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_tmp),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__lsu_inst__DOT__mem_rd_data_out_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+318,(__Vtemp_h27acd29d__0),210);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+326,(vlSelf->top__DOT__lsu_inst__DOT__mem_wr_data_in_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__my_regs__DOT__regs[0]),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__my_regs__DOT__regs[1]),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__my_regs__DOT__regs[2]),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__my_regs__DOT__regs[3]),32);
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__my_regs__DOT__regs[4]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__my_regs__DOT__regs[5]),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__my_regs__DOT__regs[6]),32);
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__my_regs__DOT__regs[7]),32);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__my_regs__DOT__regs[8]),32);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__my_regs__DOT__regs[9]),32);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__my_regs__DOT__regs[10]),32);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__my_regs__DOT__regs[11]),32);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__my_regs__DOT__regs[12]),32);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__my_regs__DOT__regs[13]),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__my_regs__DOT__regs[14]),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__my_regs__DOT__regs[15]),32);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__my_regs__DOT__regs[16]),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__my_regs__DOT__regs[17]),32);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__my_regs__DOT__regs[18]),32);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__my_regs__DOT__regs[19]),32);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__my_regs__DOT__regs[20]),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__my_regs__DOT__regs[21]),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__my_regs__DOT__regs[22]),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__my_regs__DOT__regs[23]),32);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__my_regs__DOT__regs[24]),32);
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__my_regs__DOT__regs[25]),32);
    bufp->fullIData(oldp+353,(vlSelf->top__DOT__my_regs__DOT__regs[26]),32);
    bufp->fullIData(oldp+354,(vlSelf->top__DOT__my_regs__DOT__regs[27]),32);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__my_regs__DOT__regs[28]),32);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__my_regs__DOT__regs[29]),32);
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__my_regs__DOT__regs[30]),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__my_regs__DOT__regs[31]),32);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__wbu_inst__DOT__Result_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__PCSrc));
    bufp->fullIData(oldp+362,(6U),32);
    bufp->fullIData(oldp+363,(3U),32);
    bufp->fullIData(oldp+364,(1U),32);
    bufp->fullBit(oldp+365,(0U));
    bufp->fullIData(oldp+366,(4U),32);
    bufp->fullIData(oldp+367,(6U),32);
    bufp->fullIData(oldp+368,(2U),32);
    bufp->fullCData(oldp+369,(0xcU),4);
    bufp->fullIData(oldp+370,(2U),32);
    bufp->fullIData(oldp+371,(4U),32);
    bufp->fullIData(oldp+372,(0x20U),32);
    bufp->fullIData(oldp+373,(0U),32);
    bufp->fullIData(oldp+374,(0x22U),32);
    bufp->fullIData(oldp+375,(4U),32);
    bufp->fullIData(oldp+376,(3U),32);
    bufp->fullIData(oldp+377,(7U),32);
    bufp->fullIData(oldp+378,(0x23U),32);
    bufp->fullIData(oldp+379,(7U),32);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__lsu_inst__DOT__temp),32);
}
