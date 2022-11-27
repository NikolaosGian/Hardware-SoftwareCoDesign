// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "A_0"
#define AUTOTB_TVIN_A_0  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_0.dat"
// wrapc file define: "A_1"
#define AUTOTB_TVIN_A_1  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_1.dat"
// wrapc file define: "A_2"
#define AUTOTB_TVIN_A_2  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_2.dat"
// wrapc file define: "A_3"
#define AUTOTB_TVIN_A_3  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_3.dat"
// wrapc file define: "A_4"
#define AUTOTB_TVIN_A_4  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_4.dat"
// wrapc file define: "A_5"
#define AUTOTB_TVIN_A_5  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_5.dat"
// wrapc file define: "A_6"
#define AUTOTB_TVIN_A_6  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_6.dat"
// wrapc file define: "A_7"
#define AUTOTB_TVIN_A_7  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_7.dat"
// wrapc file define: "A_8"
#define AUTOTB_TVIN_A_8  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_8.dat"
// wrapc file define: "A_9"
#define AUTOTB_TVIN_A_9  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_9.dat"
// wrapc file define: "A_10"
#define AUTOTB_TVIN_A_10  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_10.dat"
// wrapc file define: "A_11"
#define AUTOTB_TVIN_A_11  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_11.dat"
// wrapc file define: "A_12"
#define AUTOTB_TVIN_A_12  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_12.dat"
// wrapc file define: "A_13"
#define AUTOTB_TVIN_A_13  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_13.dat"
// wrapc file define: "A_14"
#define AUTOTB_TVIN_A_14  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_14.dat"
// wrapc file define: "A_15"
#define AUTOTB_TVIN_A_15  "../tv/cdatafile/c.MATRIX_MUL.autotvin_A_15.dat"
// wrapc file define: "B_0"
#define AUTOTB_TVIN_B_0  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_0.dat"
// wrapc file define: "B_1"
#define AUTOTB_TVIN_B_1  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_1.dat"
// wrapc file define: "B_2"
#define AUTOTB_TVIN_B_2  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_2.dat"
// wrapc file define: "B_3"
#define AUTOTB_TVIN_B_3  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_3.dat"
// wrapc file define: "B_4"
#define AUTOTB_TVIN_B_4  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_4.dat"
// wrapc file define: "B_5"
#define AUTOTB_TVIN_B_5  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_5.dat"
// wrapc file define: "B_6"
#define AUTOTB_TVIN_B_6  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_6.dat"
// wrapc file define: "B_7"
#define AUTOTB_TVIN_B_7  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_7.dat"
// wrapc file define: "B_8"
#define AUTOTB_TVIN_B_8  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_8.dat"
// wrapc file define: "B_9"
#define AUTOTB_TVIN_B_9  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_9.dat"
// wrapc file define: "B_10"
#define AUTOTB_TVIN_B_10  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_10.dat"
// wrapc file define: "B_11"
#define AUTOTB_TVIN_B_11  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_11.dat"
// wrapc file define: "B_12"
#define AUTOTB_TVIN_B_12  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_12.dat"
// wrapc file define: "B_13"
#define AUTOTB_TVIN_B_13  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_13.dat"
// wrapc file define: "B_14"
#define AUTOTB_TVIN_B_14  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_14.dat"
// wrapc file define: "B_15"
#define AUTOTB_TVIN_B_15  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_15.dat"
// wrapc file define: "B_16"
#define AUTOTB_TVIN_B_16  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_16.dat"
// wrapc file define: "B_17"
#define AUTOTB_TVIN_B_17  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_17.dat"
// wrapc file define: "B_18"
#define AUTOTB_TVIN_B_18  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_18.dat"
// wrapc file define: "B_19"
#define AUTOTB_TVIN_B_19  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_19.dat"
// wrapc file define: "B_20"
#define AUTOTB_TVIN_B_20  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_20.dat"
// wrapc file define: "B_21"
#define AUTOTB_TVIN_B_21  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_21.dat"
// wrapc file define: "B_22"
#define AUTOTB_TVIN_B_22  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_22.dat"
// wrapc file define: "B_23"
#define AUTOTB_TVIN_B_23  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_23.dat"
// wrapc file define: "B_24"
#define AUTOTB_TVIN_B_24  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_24.dat"
// wrapc file define: "B_25"
#define AUTOTB_TVIN_B_25  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_25.dat"
// wrapc file define: "B_26"
#define AUTOTB_TVIN_B_26  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_26.dat"
// wrapc file define: "B_27"
#define AUTOTB_TVIN_B_27  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_27.dat"
// wrapc file define: "B_28"
#define AUTOTB_TVIN_B_28  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_28.dat"
// wrapc file define: "B_29"
#define AUTOTB_TVIN_B_29  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_29.dat"
// wrapc file define: "B_30"
#define AUTOTB_TVIN_B_30  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_30.dat"
// wrapc file define: "B_31"
#define AUTOTB_TVIN_B_31  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_31.dat"
// wrapc file define: "B_32"
#define AUTOTB_TVIN_B_32  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_32.dat"
// wrapc file define: "B_33"
#define AUTOTB_TVIN_B_33  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_33.dat"
// wrapc file define: "B_34"
#define AUTOTB_TVIN_B_34  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_34.dat"
// wrapc file define: "B_35"
#define AUTOTB_TVIN_B_35  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_35.dat"
// wrapc file define: "B_36"
#define AUTOTB_TVIN_B_36  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_36.dat"
// wrapc file define: "B_37"
#define AUTOTB_TVIN_B_37  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_37.dat"
// wrapc file define: "B_38"
#define AUTOTB_TVIN_B_38  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_38.dat"
// wrapc file define: "B_39"
#define AUTOTB_TVIN_B_39  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_39.dat"
// wrapc file define: "B_40"
#define AUTOTB_TVIN_B_40  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_40.dat"
// wrapc file define: "B_41"
#define AUTOTB_TVIN_B_41  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_41.dat"
// wrapc file define: "B_42"
#define AUTOTB_TVIN_B_42  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_42.dat"
// wrapc file define: "B_43"
#define AUTOTB_TVIN_B_43  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_43.dat"
// wrapc file define: "B_44"
#define AUTOTB_TVIN_B_44  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_44.dat"
// wrapc file define: "B_45"
#define AUTOTB_TVIN_B_45  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_45.dat"
// wrapc file define: "B_46"
#define AUTOTB_TVIN_B_46  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_46.dat"
// wrapc file define: "B_47"
#define AUTOTB_TVIN_B_47  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_47.dat"
// wrapc file define: "B_48"
#define AUTOTB_TVIN_B_48  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_48.dat"
// wrapc file define: "B_49"
#define AUTOTB_TVIN_B_49  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_49.dat"
// wrapc file define: "B_50"
#define AUTOTB_TVIN_B_50  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_50.dat"
// wrapc file define: "B_51"
#define AUTOTB_TVIN_B_51  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_51.dat"
// wrapc file define: "B_52"
#define AUTOTB_TVIN_B_52  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_52.dat"
// wrapc file define: "B_53"
#define AUTOTB_TVIN_B_53  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_53.dat"
// wrapc file define: "B_54"
#define AUTOTB_TVIN_B_54  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_54.dat"
// wrapc file define: "B_55"
#define AUTOTB_TVIN_B_55  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_55.dat"
// wrapc file define: "B_56"
#define AUTOTB_TVIN_B_56  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_56.dat"
// wrapc file define: "B_57"
#define AUTOTB_TVIN_B_57  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_57.dat"
// wrapc file define: "B_58"
#define AUTOTB_TVIN_B_58  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_58.dat"
// wrapc file define: "B_59"
#define AUTOTB_TVIN_B_59  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_59.dat"
// wrapc file define: "B_60"
#define AUTOTB_TVIN_B_60  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_60.dat"
// wrapc file define: "B_61"
#define AUTOTB_TVIN_B_61  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_61.dat"
// wrapc file define: "B_62"
#define AUTOTB_TVIN_B_62  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_62.dat"
// wrapc file define: "B_63"
#define AUTOTB_TVIN_B_63  "../tv/cdatafile/c.MATRIX_MUL.autotvin_B_63.dat"
// wrapc file define: "C_0"
#define AUTOTB_TVIN_C_0  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_0.dat"
#define AUTOTB_TVOUT_C_0  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_0.dat"
// wrapc file define: "C_1"
#define AUTOTB_TVIN_C_1  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_1.dat"
#define AUTOTB_TVOUT_C_1  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_1.dat"
// wrapc file define: "C_2"
#define AUTOTB_TVIN_C_2  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_2.dat"
#define AUTOTB_TVOUT_C_2  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_2.dat"
// wrapc file define: "C_3"
#define AUTOTB_TVIN_C_3  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_3.dat"
#define AUTOTB_TVOUT_C_3  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_3.dat"
// wrapc file define: "C_4"
#define AUTOTB_TVIN_C_4  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_4.dat"
#define AUTOTB_TVOUT_C_4  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_4.dat"
// wrapc file define: "C_5"
#define AUTOTB_TVIN_C_5  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_5.dat"
#define AUTOTB_TVOUT_C_5  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_5.dat"
// wrapc file define: "C_6"
#define AUTOTB_TVIN_C_6  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_6.dat"
#define AUTOTB_TVOUT_C_6  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_6.dat"
// wrapc file define: "C_7"
#define AUTOTB_TVIN_C_7  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_7.dat"
#define AUTOTB_TVOUT_C_7  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_7.dat"
// wrapc file define: "C_8"
#define AUTOTB_TVIN_C_8  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_8.dat"
#define AUTOTB_TVOUT_C_8  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_8.dat"
// wrapc file define: "C_9"
#define AUTOTB_TVIN_C_9  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_9.dat"
#define AUTOTB_TVOUT_C_9  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_9.dat"
// wrapc file define: "C_10"
#define AUTOTB_TVIN_C_10  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_10.dat"
#define AUTOTB_TVOUT_C_10  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_10.dat"
// wrapc file define: "C_11"
#define AUTOTB_TVIN_C_11  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_11.dat"
#define AUTOTB_TVOUT_C_11  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_11.dat"
// wrapc file define: "C_12"
#define AUTOTB_TVIN_C_12  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_12.dat"
#define AUTOTB_TVOUT_C_12  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_12.dat"
// wrapc file define: "C_13"
#define AUTOTB_TVIN_C_13  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_13.dat"
#define AUTOTB_TVOUT_C_13  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_13.dat"
// wrapc file define: "C_14"
#define AUTOTB_TVIN_C_14  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_14.dat"
#define AUTOTB_TVOUT_C_14  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_14.dat"
// wrapc file define: "C_15"
#define AUTOTB_TVIN_C_15  "../tv/cdatafile/c.MATRIX_MUL.autotvin_C_15.dat"
#define AUTOTB_TVOUT_C_15  "../tv/cdatafile/c.MATRIX_MUL.autotvout_C_15.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "C_0"
#define AUTOTB_TVOUT_PC_C_0  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_0.dat"
// tvout file define: "C_1"
#define AUTOTB_TVOUT_PC_C_1  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_1.dat"
// tvout file define: "C_2"
#define AUTOTB_TVOUT_PC_C_2  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_2.dat"
// tvout file define: "C_3"
#define AUTOTB_TVOUT_PC_C_3  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_3.dat"
// tvout file define: "C_4"
#define AUTOTB_TVOUT_PC_C_4  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_4.dat"
// tvout file define: "C_5"
#define AUTOTB_TVOUT_PC_C_5  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_5.dat"
// tvout file define: "C_6"
#define AUTOTB_TVOUT_PC_C_6  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_6.dat"
// tvout file define: "C_7"
#define AUTOTB_TVOUT_PC_C_7  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_7.dat"
// tvout file define: "C_8"
#define AUTOTB_TVOUT_PC_C_8  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_8.dat"
// tvout file define: "C_9"
#define AUTOTB_TVOUT_PC_C_9  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_9.dat"
// tvout file define: "C_10"
#define AUTOTB_TVOUT_PC_C_10  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_10.dat"
// tvout file define: "C_11"
#define AUTOTB_TVOUT_PC_C_11  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_11.dat"
// tvout file define: "C_12"
#define AUTOTB_TVOUT_PC_C_12  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_12.dat"
// tvout file define: "C_13"
#define AUTOTB_TVOUT_PC_C_13  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_13.dat"
// tvout file define: "C_14"
#define AUTOTB_TVOUT_PC_C_14  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_14.dat"
// tvout file define: "C_15"
#define AUTOTB_TVOUT_PC_C_15  "../tv/rtldatafile/rtl.MATRIX_MUL.autotvout_C_15.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			A_0_depth = 0;
			A_1_depth = 0;
			A_2_depth = 0;
			A_3_depth = 0;
			A_4_depth = 0;
			A_5_depth = 0;
			A_6_depth = 0;
			A_7_depth = 0;
			A_8_depth = 0;
			A_9_depth = 0;
			A_10_depth = 0;
			A_11_depth = 0;
			A_12_depth = 0;
			A_13_depth = 0;
			A_14_depth = 0;
			A_15_depth = 0;
			B_0_depth = 0;
			B_1_depth = 0;
			B_2_depth = 0;
			B_3_depth = 0;
			B_4_depth = 0;
			B_5_depth = 0;
			B_6_depth = 0;
			B_7_depth = 0;
			B_8_depth = 0;
			B_9_depth = 0;
			B_10_depth = 0;
			B_11_depth = 0;
			B_12_depth = 0;
			B_13_depth = 0;
			B_14_depth = 0;
			B_15_depth = 0;
			B_16_depth = 0;
			B_17_depth = 0;
			B_18_depth = 0;
			B_19_depth = 0;
			B_20_depth = 0;
			B_21_depth = 0;
			B_22_depth = 0;
			B_23_depth = 0;
			B_24_depth = 0;
			B_25_depth = 0;
			B_26_depth = 0;
			B_27_depth = 0;
			B_28_depth = 0;
			B_29_depth = 0;
			B_30_depth = 0;
			B_31_depth = 0;
			B_32_depth = 0;
			B_33_depth = 0;
			B_34_depth = 0;
			B_35_depth = 0;
			B_36_depth = 0;
			B_37_depth = 0;
			B_38_depth = 0;
			B_39_depth = 0;
			B_40_depth = 0;
			B_41_depth = 0;
			B_42_depth = 0;
			B_43_depth = 0;
			B_44_depth = 0;
			B_45_depth = 0;
			B_46_depth = 0;
			B_47_depth = 0;
			B_48_depth = 0;
			B_49_depth = 0;
			B_50_depth = 0;
			B_51_depth = 0;
			B_52_depth = 0;
			B_53_depth = 0;
			B_54_depth = 0;
			B_55_depth = 0;
			B_56_depth = 0;
			B_57_depth = 0;
			B_58_depth = 0;
			B_59_depth = 0;
			B_60_depth = 0;
			B_61_depth = 0;
			B_62_depth = 0;
			B_63_depth = 0;
			C_0_depth = 0;
			C_1_depth = 0;
			C_2_depth = 0;
			C_3_depth = 0;
			C_4_depth = 0;
			C_5_depth = 0;
			C_6_depth = 0;
			C_7_depth = 0;
			C_8_depth = 0;
			C_9_depth = 0;
			C_10_depth = 0;
			C_11_depth = 0;
			C_12_depth = 0;
			C_13_depth = 0;
			C_14_depth = 0;
			C_15_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{A_0 " << A_0_depth << "}\n";
			total_list << "{A_1 " << A_1_depth << "}\n";
			total_list << "{A_2 " << A_2_depth << "}\n";
			total_list << "{A_3 " << A_3_depth << "}\n";
			total_list << "{A_4 " << A_4_depth << "}\n";
			total_list << "{A_5 " << A_5_depth << "}\n";
			total_list << "{A_6 " << A_6_depth << "}\n";
			total_list << "{A_7 " << A_7_depth << "}\n";
			total_list << "{A_8 " << A_8_depth << "}\n";
			total_list << "{A_9 " << A_9_depth << "}\n";
			total_list << "{A_10 " << A_10_depth << "}\n";
			total_list << "{A_11 " << A_11_depth << "}\n";
			total_list << "{A_12 " << A_12_depth << "}\n";
			total_list << "{A_13 " << A_13_depth << "}\n";
			total_list << "{A_14 " << A_14_depth << "}\n";
			total_list << "{A_15 " << A_15_depth << "}\n";
			total_list << "{B_0 " << B_0_depth << "}\n";
			total_list << "{B_1 " << B_1_depth << "}\n";
			total_list << "{B_2 " << B_2_depth << "}\n";
			total_list << "{B_3 " << B_3_depth << "}\n";
			total_list << "{B_4 " << B_4_depth << "}\n";
			total_list << "{B_5 " << B_5_depth << "}\n";
			total_list << "{B_6 " << B_6_depth << "}\n";
			total_list << "{B_7 " << B_7_depth << "}\n";
			total_list << "{B_8 " << B_8_depth << "}\n";
			total_list << "{B_9 " << B_9_depth << "}\n";
			total_list << "{B_10 " << B_10_depth << "}\n";
			total_list << "{B_11 " << B_11_depth << "}\n";
			total_list << "{B_12 " << B_12_depth << "}\n";
			total_list << "{B_13 " << B_13_depth << "}\n";
			total_list << "{B_14 " << B_14_depth << "}\n";
			total_list << "{B_15 " << B_15_depth << "}\n";
			total_list << "{B_16 " << B_16_depth << "}\n";
			total_list << "{B_17 " << B_17_depth << "}\n";
			total_list << "{B_18 " << B_18_depth << "}\n";
			total_list << "{B_19 " << B_19_depth << "}\n";
			total_list << "{B_20 " << B_20_depth << "}\n";
			total_list << "{B_21 " << B_21_depth << "}\n";
			total_list << "{B_22 " << B_22_depth << "}\n";
			total_list << "{B_23 " << B_23_depth << "}\n";
			total_list << "{B_24 " << B_24_depth << "}\n";
			total_list << "{B_25 " << B_25_depth << "}\n";
			total_list << "{B_26 " << B_26_depth << "}\n";
			total_list << "{B_27 " << B_27_depth << "}\n";
			total_list << "{B_28 " << B_28_depth << "}\n";
			total_list << "{B_29 " << B_29_depth << "}\n";
			total_list << "{B_30 " << B_30_depth << "}\n";
			total_list << "{B_31 " << B_31_depth << "}\n";
			total_list << "{B_32 " << B_32_depth << "}\n";
			total_list << "{B_33 " << B_33_depth << "}\n";
			total_list << "{B_34 " << B_34_depth << "}\n";
			total_list << "{B_35 " << B_35_depth << "}\n";
			total_list << "{B_36 " << B_36_depth << "}\n";
			total_list << "{B_37 " << B_37_depth << "}\n";
			total_list << "{B_38 " << B_38_depth << "}\n";
			total_list << "{B_39 " << B_39_depth << "}\n";
			total_list << "{B_40 " << B_40_depth << "}\n";
			total_list << "{B_41 " << B_41_depth << "}\n";
			total_list << "{B_42 " << B_42_depth << "}\n";
			total_list << "{B_43 " << B_43_depth << "}\n";
			total_list << "{B_44 " << B_44_depth << "}\n";
			total_list << "{B_45 " << B_45_depth << "}\n";
			total_list << "{B_46 " << B_46_depth << "}\n";
			total_list << "{B_47 " << B_47_depth << "}\n";
			total_list << "{B_48 " << B_48_depth << "}\n";
			total_list << "{B_49 " << B_49_depth << "}\n";
			total_list << "{B_50 " << B_50_depth << "}\n";
			total_list << "{B_51 " << B_51_depth << "}\n";
			total_list << "{B_52 " << B_52_depth << "}\n";
			total_list << "{B_53 " << B_53_depth << "}\n";
			total_list << "{B_54 " << B_54_depth << "}\n";
			total_list << "{B_55 " << B_55_depth << "}\n";
			total_list << "{B_56 " << B_56_depth << "}\n";
			total_list << "{B_57 " << B_57_depth << "}\n";
			total_list << "{B_58 " << B_58_depth << "}\n";
			total_list << "{B_59 " << B_59_depth << "}\n";
			total_list << "{B_60 " << B_60_depth << "}\n";
			total_list << "{B_61 " << B_61_depth << "}\n";
			total_list << "{B_62 " << B_62_depth << "}\n";
			total_list << "{B_63 " << B_63_depth << "}\n";
			total_list << "{C_0 " << C_0_depth << "}\n";
			total_list << "{C_1 " << C_1_depth << "}\n";
			total_list << "{C_2 " << C_2_depth << "}\n";
			total_list << "{C_3 " << C_3_depth << "}\n";
			total_list << "{C_4 " << C_4_depth << "}\n";
			total_list << "{C_5 " << C_5_depth << "}\n";
			total_list << "{C_6 " << C_6_depth << "}\n";
			total_list << "{C_7 " << C_7_depth << "}\n";
			total_list << "{C_8 " << C_8_depth << "}\n";
			total_list << "{C_9 " << C_9_depth << "}\n";
			total_list << "{C_10 " << C_10_depth << "}\n";
			total_list << "{C_11 " << C_11_depth << "}\n";
			total_list << "{C_12 " << C_12_depth << "}\n";
			total_list << "{C_13 " << C_13_depth << "}\n";
			total_list << "{C_14 " << C_14_depth << "}\n";
			total_list << "{C_15 " << C_15_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int A_0_depth;
		int A_1_depth;
		int A_2_depth;
		int A_3_depth;
		int A_4_depth;
		int A_5_depth;
		int A_6_depth;
		int A_7_depth;
		int A_8_depth;
		int A_9_depth;
		int A_10_depth;
		int A_11_depth;
		int A_12_depth;
		int A_13_depth;
		int A_14_depth;
		int A_15_depth;
		int B_0_depth;
		int B_1_depth;
		int B_2_depth;
		int B_3_depth;
		int B_4_depth;
		int B_5_depth;
		int B_6_depth;
		int B_7_depth;
		int B_8_depth;
		int B_9_depth;
		int B_10_depth;
		int B_11_depth;
		int B_12_depth;
		int B_13_depth;
		int B_14_depth;
		int B_15_depth;
		int B_16_depth;
		int B_17_depth;
		int B_18_depth;
		int B_19_depth;
		int B_20_depth;
		int B_21_depth;
		int B_22_depth;
		int B_23_depth;
		int B_24_depth;
		int B_25_depth;
		int B_26_depth;
		int B_27_depth;
		int B_28_depth;
		int B_29_depth;
		int B_30_depth;
		int B_31_depth;
		int B_32_depth;
		int B_33_depth;
		int B_34_depth;
		int B_35_depth;
		int B_36_depth;
		int B_37_depth;
		int B_38_depth;
		int B_39_depth;
		int B_40_depth;
		int B_41_depth;
		int B_42_depth;
		int B_43_depth;
		int B_44_depth;
		int B_45_depth;
		int B_46_depth;
		int B_47_depth;
		int B_48_depth;
		int B_49_depth;
		int B_50_depth;
		int B_51_depth;
		int B_52_depth;
		int B_53_depth;
		int B_54_depth;
		int B_55_depth;
		int B_56_depth;
		int B_57_depth;
		int B_58_depth;
		int B_59_depth;
		int B_60_depth;
		int B_61_depth;
		int B_62_depth;
		int B_63_depth;
		int C_0_depth;
		int C_1_depth;
		int C_2_depth;
		int C_3_depth;
		int C_4_depth;
		int C_5_depth;
		int C_6_depth;
		int C_7_depth;
		int C_8_depth;
		int C_9_depth;
		int C_10_depth;
		int C_11_depth;
		int C_12_depth;
		int C_13_depth;
		int C_14_depth;
		int C_15_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void MATRIX_MUL (
unsigned char A[64][64],
unsigned char B[64][64],
unsigned int C[64][64]);

void AESL_WRAP_MATRIX_MUL (
unsigned char A[64][64],
unsigned char B[64][64],
unsigned int C[64][64])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "C_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_0, AESL_token); // data

			sc_bv<32> *C_0_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_0
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_0_3_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (0) => (3) @ (1)
							for (int i_0 = 0; i_0 <= 3; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_0_3_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_0_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (0) => (3) @ (1)
							for (int i_0 = 0; i_0 <= 3; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_0_3_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_0_3_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_0_pc_buffer;
		}

		// output port post check: "C_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_1, AESL_token); // data

			sc_bv<32> *C_1_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_1
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_4_7_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (4) => (7) @ (1)
							for (int i_0 = 4; i_0 <= 7; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_4_7_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_1_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (4) => (7) @ (1)
							for (int i_0 = 4; i_0 <= 7; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_4_7_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_4_7_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_1_pc_buffer;
		}

		// output port post check: "C_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_2, AESL_token); // data

			sc_bv<32> *C_2_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_2
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_8_11_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (8) => (11) @ (1)
							for (int i_0 = 8; i_0 <= 11; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_8_11_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_2_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (8) => (11) @ (1)
							for (int i_0 = 8; i_0 <= 11; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_8_11_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_8_11_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_2_pc_buffer;
		}

		// output port post check: "C_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_3, AESL_token); // data

			sc_bv<32> *C_3_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_3
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_12_15_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (12) => (15) @ (1)
							for (int i_0 = 12; i_0 <= 15; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_12_15_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_3_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (12) => (15) @ (1)
							for (int i_0 = 12; i_0 <= 15; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_12_15_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_12_15_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_3_pc_buffer;
		}

		// output port post check: "C_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_4, AESL_token); // data

			sc_bv<32> *C_4_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_4
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_16_19_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (16) => (19) @ (1)
							for (int i_0 = 16; i_0 <= 19; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_16_19_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_4_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (16) => (19) @ (1)
							for (int i_0 = 16; i_0 <= 19; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_16_19_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_16_19_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_4_pc_buffer;
		}

		// output port post check: "C_5"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_5, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_5, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_5, AESL_token); // data

			sc_bv<32> *C_5_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_5_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_5, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_5))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_5
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_20_23_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (20) => (23) @ (1)
							for (int i_0 = 20; i_0 <= 23; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_20_23_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_5_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (20) => (23) @ (1)
							for (int i_0 = 20; i_0 <= 23; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_20_23_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_20_23_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_5_pc_buffer;
		}

		// output port post check: "C_6"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_6, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_6, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_6, AESL_token); // data

			sc_bv<32> *C_6_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_6_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_6, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_6))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_6
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_24_27_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (24) => (27) @ (1)
							for (int i_0 = 24; i_0 <= 27; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_24_27_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_6_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (24) => (27) @ (1)
							for (int i_0 = 24; i_0 <= 27; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_24_27_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_24_27_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_6_pc_buffer;
		}

		// output port post check: "C_7"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_7, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_7, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_7, AESL_token); // data

			sc_bv<32> *C_7_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_7_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_7, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_7))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_7
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_28_31_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (28) => (31) @ (1)
							for (int i_0 = 28; i_0 <= 31; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_28_31_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_7_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (28) => (31) @ (1)
							for (int i_0 = 28; i_0 <= 31; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_28_31_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_28_31_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_7_pc_buffer;
		}

		// output port post check: "C_8"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_8, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_8, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_8, AESL_token); // data

			sc_bv<32> *C_8_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_8', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_8_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_8, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_8))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_8
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_32_35_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (32) => (35) @ (1)
							for (int i_0 = 32; i_0 <= 35; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_32_35_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_8_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (32) => (35) @ (1)
							for (int i_0 = 32; i_0 <= 35; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_32_35_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_32_35_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_8_pc_buffer;
		}

		// output port post check: "C_9"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_9, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_9, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_9, AESL_token); // data

			sc_bv<32> *C_9_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_9', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_9_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_9, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_9))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_9
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_36_39_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (36) => (39) @ (1)
							for (int i_0 = 36; i_0 <= 39; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_36_39_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_9_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (36) => (39) @ (1)
							for (int i_0 = 36; i_0 <= 39; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_36_39_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_36_39_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_9_pc_buffer;
		}

		// output port post check: "C_10"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_10, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_10, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_10, AESL_token); // data

			sc_bv<32> *C_10_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_10', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_10_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_10, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_10))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_10
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_40_43_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (40) => (43) @ (1)
							for (int i_0 = 40; i_0 <= 43; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_40_43_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_10_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (40) => (43) @ (1)
							for (int i_0 = 40; i_0 <= 43; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_40_43_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_40_43_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_10_pc_buffer;
		}

		// output port post check: "C_11"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_11, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_11, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_11, AESL_token); // data

			sc_bv<32> *C_11_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_11', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_11_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_11, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_11))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_11
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_44_47_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (44) => (47) @ (1)
							for (int i_0 = 44; i_0 <= 47; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_44_47_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_11_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (44) => (47) @ (1)
							for (int i_0 = 44; i_0 <= 47; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_44_47_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_44_47_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_11_pc_buffer;
		}

		// output port post check: "C_12"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_12, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_12, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_12, AESL_token); // data

			sc_bv<32> *C_12_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_12', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_12', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_12_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_12, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_12))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_12
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_48_51_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (48) => (51) @ (1)
							for (int i_0 = 48; i_0 <= 51; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_48_51_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_12_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (48) => (51) @ (1)
							for (int i_0 = 48; i_0 <= 51; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_48_51_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_48_51_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_12_pc_buffer;
		}

		// output port post check: "C_13"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_13, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_13, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_13, AESL_token); // data

			sc_bv<32> *C_13_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_13', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_13', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_13_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_13, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_13))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_13
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_52_55_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (52) => (55) @ (1)
							for (int i_0 = 52; i_0 <= 55; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_52_55_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_13_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (52) => (55) @ (1)
							for (int i_0 = 52; i_0 <= 55; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_52_55_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_52_55_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_13_pc_buffer;
		}

		// output port post check: "C_14"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_14, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_14, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_14, AESL_token); // data

			sc_bv<32> *C_14_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_14', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_14', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_14_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_14, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_14))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_14
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_56_59_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (56) => (59) @ (1)
							for (int i_0 = 56; i_0 <= 59; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_56_59_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_14_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (56) => (59) @ (1)
							for (int i_0 = 56; i_0 <= 59; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_56_59_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_56_59_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_14_pc_buffer;
		}

		// output port post check: "C_15"
		aesl_fh.read(AUTOTB_TVOUT_PC_C_15, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_C_15, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_C_15, AESL_token); // data

			sc_bv<32> *C_15_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_15', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'C_15', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					C_15_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_C_15, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_C_15))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: C_15
				{
					// bitslice(31, 0)
					// {
						// celement: C(31, 0)
						// {
							sc_lv<32>* C_lv0_60_63_1_lv1_0_63_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (60) => (63) @ (1)
							for (int i_0 = 60; i_0 <= 63; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C_lv0_60_63_1_lv1_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(C_15_pc_buffer[hls_map_index].range(31, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: C(31, 0)
						{
							// carray: (60) => (63) @ (1)
							for (int i_0 = 60; i_0 <= 63; i_0 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_1 = 0; i_1 <= 63; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : C[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : C[0][0]
									// output_left_conversion : C[i_0][i_1]
									// output_type_conversion : (C_lv0_60_63_1_lv1_0_63_1[hls_map_index]).to_uint64()
									if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
									{
										C[i_0][i_1] = (C_lv0_60_63_1_lv1_0_63_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] C_15_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "A_0"
		char* tvin_A_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_0);

		// "A_1"
		char* tvin_A_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_1);

		// "A_2"
		char* tvin_A_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_2);

		// "A_3"
		char* tvin_A_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_3);

		// "A_4"
		char* tvin_A_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_4);

		// "A_5"
		char* tvin_A_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_5);

		// "A_6"
		char* tvin_A_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_6);

		// "A_7"
		char* tvin_A_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_7);

		// "A_8"
		char* tvin_A_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_8);

		// "A_9"
		char* tvin_A_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_9);

		// "A_10"
		char* tvin_A_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_10);

		// "A_11"
		char* tvin_A_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_11);

		// "A_12"
		char* tvin_A_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_12);

		// "A_13"
		char* tvin_A_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_13);

		// "A_14"
		char* tvin_A_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_14);

		// "A_15"
		char* tvin_A_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_A_15);

		// "B_0"
		char* tvin_B_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_0);

		// "B_1"
		char* tvin_B_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_1);

		// "B_2"
		char* tvin_B_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_2);

		// "B_3"
		char* tvin_B_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_3);

		// "B_4"
		char* tvin_B_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_4);

		// "B_5"
		char* tvin_B_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_5);

		// "B_6"
		char* tvin_B_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_6);

		// "B_7"
		char* tvin_B_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_7);

		// "B_8"
		char* tvin_B_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_8);

		// "B_9"
		char* tvin_B_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_9);

		// "B_10"
		char* tvin_B_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_10);

		// "B_11"
		char* tvin_B_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_11);

		// "B_12"
		char* tvin_B_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_12);

		// "B_13"
		char* tvin_B_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_13);

		// "B_14"
		char* tvin_B_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_14);

		// "B_15"
		char* tvin_B_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_15);

		// "B_16"
		char* tvin_B_16 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_16);

		// "B_17"
		char* tvin_B_17 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_17);

		// "B_18"
		char* tvin_B_18 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_18);

		// "B_19"
		char* tvin_B_19 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_19);

		// "B_20"
		char* tvin_B_20 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_20);

		// "B_21"
		char* tvin_B_21 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_21);

		// "B_22"
		char* tvin_B_22 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_22);

		// "B_23"
		char* tvin_B_23 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_23);

		// "B_24"
		char* tvin_B_24 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_24);

		// "B_25"
		char* tvin_B_25 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_25);

		// "B_26"
		char* tvin_B_26 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_26);

		// "B_27"
		char* tvin_B_27 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_27);

		// "B_28"
		char* tvin_B_28 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_28);

		// "B_29"
		char* tvin_B_29 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_29);

		// "B_30"
		char* tvin_B_30 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_30);

		// "B_31"
		char* tvin_B_31 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_31);

		// "B_32"
		char* tvin_B_32 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_32);

		// "B_33"
		char* tvin_B_33 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_33);

		// "B_34"
		char* tvin_B_34 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_34);

		// "B_35"
		char* tvin_B_35 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_35);

		// "B_36"
		char* tvin_B_36 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_36);

		// "B_37"
		char* tvin_B_37 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_37);

		// "B_38"
		char* tvin_B_38 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_38);

		// "B_39"
		char* tvin_B_39 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_39);

		// "B_40"
		char* tvin_B_40 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_40);

		// "B_41"
		char* tvin_B_41 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_41);

		// "B_42"
		char* tvin_B_42 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_42);

		// "B_43"
		char* tvin_B_43 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_43);

		// "B_44"
		char* tvin_B_44 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_44);

		// "B_45"
		char* tvin_B_45 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_45);

		// "B_46"
		char* tvin_B_46 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_46);

		// "B_47"
		char* tvin_B_47 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_47);

		// "B_48"
		char* tvin_B_48 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_48);

		// "B_49"
		char* tvin_B_49 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_49);

		// "B_50"
		char* tvin_B_50 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_50);

		// "B_51"
		char* tvin_B_51 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_51);

		// "B_52"
		char* tvin_B_52 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_52);

		// "B_53"
		char* tvin_B_53 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_53);

		// "B_54"
		char* tvin_B_54 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_54);

		// "B_55"
		char* tvin_B_55 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_55);

		// "B_56"
		char* tvin_B_56 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_56);

		// "B_57"
		char* tvin_B_57 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_57);

		// "B_58"
		char* tvin_B_58 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_58);

		// "B_59"
		char* tvin_B_59 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_59);

		// "B_60"
		char* tvin_B_60 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_60);

		// "B_61"
		char* tvin_B_61 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_61);

		// "B_62"
		char* tvin_B_62 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_62);

		// "B_63"
		char* tvin_B_63 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_B_63);

		// "C_0"
		char* tvin_C_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_0);
		char* tvout_C_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_0);

		// "C_1"
		char* tvin_C_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_1);
		char* tvout_C_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_1);

		// "C_2"
		char* tvin_C_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_2);
		char* tvout_C_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_2);

		// "C_3"
		char* tvin_C_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_3);
		char* tvout_C_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_3);

		// "C_4"
		char* tvin_C_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_4);
		char* tvout_C_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_4);

		// "C_5"
		char* tvin_C_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_5);
		char* tvout_C_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_5);

		// "C_6"
		char* tvin_C_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_6);
		char* tvout_C_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_6);

		// "C_7"
		char* tvin_C_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_7);
		char* tvout_C_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_7);

		// "C_8"
		char* tvin_C_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_8);
		char* tvout_C_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_8);

		// "C_9"
		char* tvin_C_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_9);
		char* tvout_C_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_9);

		// "C_10"
		char* tvin_C_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_10);
		char* tvout_C_10 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_10);

		// "C_11"
		char* tvin_C_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_11);
		char* tvout_C_11 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_11);

		// "C_12"
		char* tvin_C_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_12);
		char* tvout_C_12 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_12);

		// "C_13"
		char* tvin_C_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_13);
		char* tvout_C_13 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_13);

		// "C_14"
		char* tvin_C_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_14);
		char* tvout_C_14 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_14);

		// "C_15"
		char* tvin_C_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_C_15);
		char* tvout_C_15 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_C_15);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_A_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_0, tvin_A_0);

		sc_bv<8>* A_0_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (0) => (3) @ (1)
					for (int i_0 = 0; i_0 <= 3; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_0, "%s\n", (A_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_0, tvin_A_0);
		}

		tcl_file.set_num(256, &tcl_file.A_0_depth);
		sprintf(tvin_A_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_0, tvin_A_0);

		// release memory allocation
		delete [] A_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_1, tvin_A_1);

		sc_bv<8>* A_1_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (4) => (7) @ (1)
					for (int i_0 = 4; i_0 <= 7; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_1, "%s\n", (A_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_1, tvin_A_1);
		}

		tcl_file.set_num(256, &tcl_file.A_1_depth);
		sprintf(tvin_A_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_1, tvin_A_1);

		// release memory allocation
		delete [] A_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_2, tvin_A_2);

		sc_bv<8>* A_2_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (8) => (11) @ (1)
					for (int i_0 = 8; i_0 <= 11; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_2, "%s\n", (A_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_2, tvin_A_2);
		}

		tcl_file.set_num(256, &tcl_file.A_2_depth);
		sprintf(tvin_A_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_2, tvin_A_2);

		// release memory allocation
		delete [] A_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_3, tvin_A_3);

		sc_bv<8>* A_3_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (12) => (15) @ (1)
					for (int i_0 = 12; i_0 <= 15; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_3, "%s\n", (A_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_3, tvin_A_3);
		}

		tcl_file.set_num(256, &tcl_file.A_3_depth);
		sprintf(tvin_A_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_3, tvin_A_3);

		// release memory allocation
		delete [] A_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_4, tvin_A_4);

		sc_bv<8>* A_4_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (16) => (19) @ (1)
					for (int i_0 = 16; i_0 <= 19; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_4, "%s\n", (A_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_4, tvin_A_4);
		}

		tcl_file.set_num(256, &tcl_file.A_4_depth);
		sprintf(tvin_A_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_4, tvin_A_4);

		// release memory allocation
		delete [] A_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_5, tvin_A_5);

		sc_bv<8>* A_5_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (20) => (23) @ (1)
					for (int i_0 = 20; i_0 <= 23; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_5, "%s\n", (A_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_5, tvin_A_5);
		}

		tcl_file.set_num(256, &tcl_file.A_5_depth);
		sprintf(tvin_A_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_5, tvin_A_5);

		// release memory allocation
		delete [] A_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_6, tvin_A_6);

		sc_bv<8>* A_6_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (24) => (27) @ (1)
					for (int i_0 = 24; i_0 <= 27; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_6, "%s\n", (A_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_6, tvin_A_6);
		}

		tcl_file.set_num(256, &tcl_file.A_6_depth);
		sprintf(tvin_A_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_6, tvin_A_6);

		// release memory allocation
		delete [] A_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_7, tvin_A_7);

		sc_bv<8>* A_7_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (28) => (31) @ (1)
					for (int i_0 = 28; i_0 <= 31; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_7, "%s\n", (A_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_7, tvin_A_7);
		}

		tcl_file.set_num(256, &tcl_file.A_7_depth);
		sprintf(tvin_A_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_7, tvin_A_7);

		// release memory allocation
		delete [] A_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_8, tvin_A_8);

		sc_bv<8>* A_8_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (32) => (35) @ (1)
					for (int i_0 = 32; i_0 <= 35; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_8, "%s\n", (A_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_8, tvin_A_8);
		}

		tcl_file.set_num(256, &tcl_file.A_8_depth);
		sprintf(tvin_A_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_8, tvin_A_8);

		// release memory allocation
		delete [] A_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_9, tvin_A_9);

		sc_bv<8>* A_9_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (36) => (39) @ (1)
					for (int i_0 = 36; i_0 <= 39; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_9, "%s\n", (A_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_9, tvin_A_9);
		}

		tcl_file.set_num(256, &tcl_file.A_9_depth);
		sprintf(tvin_A_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_9, tvin_A_9);

		// release memory allocation
		delete [] A_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_10, tvin_A_10);

		sc_bv<8>* A_10_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (40) => (43) @ (1)
					for (int i_0 = 40; i_0 <= 43; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_10, "%s\n", (A_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_10, tvin_A_10);
		}

		tcl_file.set_num(256, &tcl_file.A_10_depth);
		sprintf(tvin_A_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_10, tvin_A_10);

		// release memory allocation
		delete [] A_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_11, tvin_A_11);

		sc_bv<8>* A_11_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (44) => (47) @ (1)
					for (int i_0 = 44; i_0 <= 47; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_11, "%s\n", (A_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_11, tvin_A_11);
		}

		tcl_file.set_num(256, &tcl_file.A_11_depth);
		sprintf(tvin_A_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_11, tvin_A_11);

		// release memory allocation
		delete [] A_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_12, tvin_A_12);

		sc_bv<8>* A_12_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (48) => (51) @ (1)
					for (int i_0 = 48; i_0 <= 51; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_12_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_12, "%s\n", (A_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_12, tvin_A_12);
		}

		tcl_file.set_num(256, &tcl_file.A_12_depth);
		sprintf(tvin_A_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_12, tvin_A_12);

		// release memory allocation
		delete [] A_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_13, tvin_A_13);

		sc_bv<8>* A_13_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (52) => (55) @ (1)
					for (int i_0 = 52; i_0 <= 55; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_13_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_13, "%s\n", (A_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_13, tvin_A_13);
		}

		tcl_file.set_num(256, &tcl_file.A_13_depth);
		sprintf(tvin_A_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_13, tvin_A_13);

		// release memory allocation
		delete [] A_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_14, tvin_A_14);

		sc_bv<8>* A_14_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (56) => (59) @ (1)
					for (int i_0 = 56; i_0 <= 59; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_14_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_14, "%s\n", (A_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_14, tvin_A_14);
		}

		tcl_file.set_num(256, &tcl_file.A_14_depth);
		sprintf(tvin_A_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_14, tvin_A_14);

		// release memory allocation
		delete [] A_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_A_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_A_15, tvin_A_15);

		sc_bv<8>* A_15_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: A_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: A(7, 0)
				{
					// carray: (60) => (63) @ (1)
					for (int i_0 = 60; i_0 <= 63; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : A[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : A[0][0]
							// regulate_c_name       : A
							// input_type_conversion : A[i_0][i_1]
							if (&(A[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> A_tmp_mem;
								A_tmp_mem = A[i_0][i_1];
								A_15_tvin_wrapc_buffer[hls_map_index].range(7, 0) = A_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_A_15, "%s\n", (A_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_A_15, tvin_A_15);
		}

		tcl_file.set_num(256, &tcl_file.A_15_depth);
		sprintf(tvin_A_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_A_15, tvin_A_15);

		// release memory allocation
		delete [] A_15_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_0, tvin_B_0);

		sc_bv<8>* B_0_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_0, "%s\n", (B_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_0, tvin_B_0);
		}

		tcl_file.set_num(64, &tcl_file.B_0_depth);
		sprintf(tvin_B_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_0, tvin_B_0);

		// release memory allocation
		delete [] B_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_1, tvin_B_1);

		sc_bv<8>* B_1_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_1, "%s\n", (B_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_1, tvin_B_1);
		}

		tcl_file.set_num(64, &tcl_file.B_1_depth);
		sprintf(tvin_B_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_1, tvin_B_1);

		// release memory allocation
		delete [] B_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_2, tvin_B_2);

		sc_bv<8>* B_2_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_2, "%s\n", (B_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_2, tvin_B_2);
		}

		tcl_file.set_num(64, &tcl_file.B_2_depth);
		sprintf(tvin_B_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_2, tvin_B_2);

		// release memory allocation
		delete [] B_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_3, tvin_B_3);

		sc_bv<8>* B_3_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_3, "%s\n", (B_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_3, tvin_B_3);
		}

		tcl_file.set_num(64, &tcl_file.B_3_depth);
		sprintf(tvin_B_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_3, tvin_B_3);

		// release memory allocation
		delete [] B_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_4, tvin_B_4);

		sc_bv<8>* B_4_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_4, "%s\n", (B_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_4, tvin_B_4);
		}

		tcl_file.set_num(64, &tcl_file.B_4_depth);
		sprintf(tvin_B_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_4, tvin_B_4);

		// release memory allocation
		delete [] B_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_5, tvin_B_5);

		sc_bv<8>* B_5_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_5, "%s\n", (B_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_5, tvin_B_5);
		}

		tcl_file.set_num(64, &tcl_file.B_5_depth);
		sprintf(tvin_B_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_5, tvin_B_5);

		// release memory allocation
		delete [] B_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_6, tvin_B_6);

		sc_bv<8>* B_6_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_6, "%s\n", (B_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_6, tvin_B_6);
		}

		tcl_file.set_num(64, &tcl_file.B_6_depth);
		sprintf(tvin_B_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_6, tvin_B_6);

		// release memory allocation
		delete [] B_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_7, tvin_B_7);

		sc_bv<8>* B_7_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_7, "%s\n", (B_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_7, tvin_B_7);
		}

		tcl_file.set_num(64, &tcl_file.B_7_depth);
		sprintf(tvin_B_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_7, tvin_B_7);

		// release memory allocation
		delete [] B_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_8, tvin_B_8);

		sc_bv<8>* B_8_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_8, "%s\n", (B_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_8, tvin_B_8);
		}

		tcl_file.set_num(64, &tcl_file.B_8_depth);
		sprintf(tvin_B_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_8, tvin_B_8);

		// release memory allocation
		delete [] B_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_9, tvin_B_9);

		sc_bv<8>* B_9_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_9, "%s\n", (B_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_9, tvin_B_9);
		}

		tcl_file.set_num(64, &tcl_file.B_9_depth);
		sprintf(tvin_B_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_9, tvin_B_9);

		// release memory allocation
		delete [] B_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_10, tvin_B_10);

		sc_bv<8>* B_10_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_10
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_10_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_10, "%s\n", (B_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_10, tvin_B_10);
		}

		tcl_file.set_num(64, &tcl_file.B_10_depth);
		sprintf(tvin_B_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_10, tvin_B_10);

		// release memory allocation
		delete [] B_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_11, tvin_B_11);

		sc_bv<8>* B_11_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_11
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_11_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_11, "%s\n", (B_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_11, tvin_B_11);
		}

		tcl_file.set_num(64, &tcl_file.B_11_depth);
		sprintf(tvin_B_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_11, tvin_B_11);

		// release memory allocation
		delete [] B_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_12, tvin_B_12);

		sc_bv<8>* B_12_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_12
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_12_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_12, "%s\n", (B_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_12, tvin_B_12);
		}

		tcl_file.set_num(64, &tcl_file.B_12_depth);
		sprintf(tvin_B_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_12, tvin_B_12);

		// release memory allocation
		delete [] B_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_13, tvin_B_13);

		sc_bv<8>* B_13_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_13
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_13_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_13, "%s\n", (B_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_13, tvin_B_13);
		}

		tcl_file.set_num(64, &tcl_file.B_13_depth);
		sprintf(tvin_B_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_13, tvin_B_13);

		// release memory allocation
		delete [] B_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_14, tvin_B_14);

		sc_bv<8>* B_14_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_14
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_14_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_14, "%s\n", (B_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_14, tvin_B_14);
		}

		tcl_file.set_num(64, &tcl_file.B_14_depth);
		sprintf(tvin_B_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_14, tvin_B_14);

		// release memory allocation
		delete [] B_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_15, tvin_B_15);

		sc_bv<8>* B_15_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_15
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_15_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_15, "%s\n", (B_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_15, tvin_B_15);
		}

		tcl_file.set_num(64, &tcl_file.B_15_depth);
		sprintf(tvin_B_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_15, tvin_B_15);

		// release memory allocation
		delete [] B_15_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_16, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_16, tvin_B_16);

		sc_bv<8>* B_16_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_16
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_16_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_16, "%s\n", (B_16_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_16, tvin_B_16);
		}

		tcl_file.set_num(64, &tcl_file.B_16_depth);
		sprintf(tvin_B_16, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_16, tvin_B_16);

		// release memory allocation
		delete [] B_16_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_17, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_17, tvin_B_17);

		sc_bv<8>* B_17_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_17
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_17_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_17, "%s\n", (B_17_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_17, tvin_B_17);
		}

		tcl_file.set_num(64, &tcl_file.B_17_depth);
		sprintf(tvin_B_17, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_17, tvin_B_17);

		// release memory allocation
		delete [] B_17_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_18, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_18, tvin_B_18);

		sc_bv<8>* B_18_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_18
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_18_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_18, "%s\n", (B_18_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_18, tvin_B_18);
		}

		tcl_file.set_num(64, &tcl_file.B_18_depth);
		sprintf(tvin_B_18, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_18, tvin_B_18);

		// release memory allocation
		delete [] B_18_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_19, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_19, tvin_B_19);

		sc_bv<8>* B_19_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_19
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_19_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_19, "%s\n", (B_19_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_19, tvin_B_19);
		}

		tcl_file.set_num(64, &tcl_file.B_19_depth);
		sprintf(tvin_B_19, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_19, tvin_B_19);

		// release memory allocation
		delete [] B_19_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_20, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_20, tvin_B_20);

		sc_bv<8>* B_20_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_20
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_20_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_20, "%s\n", (B_20_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_20, tvin_B_20);
		}

		tcl_file.set_num(64, &tcl_file.B_20_depth);
		sprintf(tvin_B_20, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_20, tvin_B_20);

		// release memory allocation
		delete [] B_20_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_21, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_21, tvin_B_21);

		sc_bv<8>* B_21_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_21
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_21_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_21, "%s\n", (B_21_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_21, tvin_B_21);
		}

		tcl_file.set_num(64, &tcl_file.B_21_depth);
		sprintf(tvin_B_21, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_21, tvin_B_21);

		// release memory allocation
		delete [] B_21_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_22, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_22, tvin_B_22);

		sc_bv<8>* B_22_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_22
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_22_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_22, "%s\n", (B_22_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_22, tvin_B_22);
		}

		tcl_file.set_num(64, &tcl_file.B_22_depth);
		sprintf(tvin_B_22, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_22, tvin_B_22);

		// release memory allocation
		delete [] B_22_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_23, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_23, tvin_B_23);

		sc_bv<8>* B_23_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_23
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_23_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_23, "%s\n", (B_23_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_23, tvin_B_23);
		}

		tcl_file.set_num(64, &tcl_file.B_23_depth);
		sprintf(tvin_B_23, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_23, tvin_B_23);

		// release memory allocation
		delete [] B_23_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_24, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_24, tvin_B_24);

		sc_bv<8>* B_24_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_24
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (24) => (24) @ (2)
					for (int i_0 = 24; i_0 <= 24; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_24_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_24, "%s\n", (B_24_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_24, tvin_B_24);
		}

		tcl_file.set_num(64, &tcl_file.B_24_depth);
		sprintf(tvin_B_24, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_24, tvin_B_24);

		// release memory allocation
		delete [] B_24_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_25, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_25, tvin_B_25);

		sc_bv<8>* B_25_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_25
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (25) => (25) @ (2)
					for (int i_0 = 25; i_0 <= 25; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_25_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_25, "%s\n", (B_25_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_25, tvin_B_25);
		}

		tcl_file.set_num(64, &tcl_file.B_25_depth);
		sprintf(tvin_B_25, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_25, tvin_B_25);

		// release memory allocation
		delete [] B_25_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_26, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_26, tvin_B_26);

		sc_bv<8>* B_26_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_26
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (26) => (26) @ (2)
					for (int i_0 = 26; i_0 <= 26; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_26_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_26, "%s\n", (B_26_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_26, tvin_B_26);
		}

		tcl_file.set_num(64, &tcl_file.B_26_depth);
		sprintf(tvin_B_26, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_26, tvin_B_26);

		// release memory allocation
		delete [] B_26_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_27, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_27, tvin_B_27);

		sc_bv<8>* B_27_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_27
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (27) => (27) @ (2)
					for (int i_0 = 27; i_0 <= 27; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_27_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_27, "%s\n", (B_27_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_27, tvin_B_27);
		}

		tcl_file.set_num(64, &tcl_file.B_27_depth);
		sprintf(tvin_B_27, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_27, tvin_B_27);

		// release memory allocation
		delete [] B_27_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_28, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_28, tvin_B_28);

		sc_bv<8>* B_28_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_28
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (28) => (28) @ (2)
					for (int i_0 = 28; i_0 <= 28; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_28_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_28, "%s\n", (B_28_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_28, tvin_B_28);
		}

		tcl_file.set_num(64, &tcl_file.B_28_depth);
		sprintf(tvin_B_28, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_28, tvin_B_28);

		// release memory allocation
		delete [] B_28_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_29, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_29, tvin_B_29);

		sc_bv<8>* B_29_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_29
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (29) => (29) @ (2)
					for (int i_0 = 29; i_0 <= 29; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_29_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_29, "%s\n", (B_29_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_29, tvin_B_29);
		}

		tcl_file.set_num(64, &tcl_file.B_29_depth);
		sprintf(tvin_B_29, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_29, tvin_B_29);

		// release memory allocation
		delete [] B_29_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_30, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_30, tvin_B_30);

		sc_bv<8>* B_30_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_30
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (30) => (30) @ (2)
					for (int i_0 = 30; i_0 <= 30; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_30_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_30, "%s\n", (B_30_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_30, tvin_B_30);
		}

		tcl_file.set_num(64, &tcl_file.B_30_depth);
		sprintf(tvin_B_30, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_30, tvin_B_30);

		// release memory allocation
		delete [] B_30_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_31, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_31, tvin_B_31);

		sc_bv<8>* B_31_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_31
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (31) => (31) @ (2)
					for (int i_0 = 31; i_0 <= 31; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_31_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_31, "%s\n", (B_31_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_31, tvin_B_31);
		}

		tcl_file.set_num(64, &tcl_file.B_31_depth);
		sprintf(tvin_B_31, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_31, tvin_B_31);

		// release memory allocation
		delete [] B_31_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_32, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_32, tvin_B_32);

		sc_bv<8>* B_32_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_32
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (32) => (32) @ (2)
					for (int i_0 = 32; i_0 <= 32; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_32_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_32, "%s\n", (B_32_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_32, tvin_B_32);
		}

		tcl_file.set_num(64, &tcl_file.B_32_depth);
		sprintf(tvin_B_32, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_32, tvin_B_32);

		// release memory allocation
		delete [] B_32_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_33, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_33, tvin_B_33);

		sc_bv<8>* B_33_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_33
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (33) => (33) @ (2)
					for (int i_0 = 33; i_0 <= 33; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_33_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_33, "%s\n", (B_33_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_33, tvin_B_33);
		}

		tcl_file.set_num(64, &tcl_file.B_33_depth);
		sprintf(tvin_B_33, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_33, tvin_B_33);

		// release memory allocation
		delete [] B_33_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_34, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_34, tvin_B_34);

		sc_bv<8>* B_34_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_34
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (34) => (34) @ (2)
					for (int i_0 = 34; i_0 <= 34; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_34_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_34, "%s\n", (B_34_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_34, tvin_B_34);
		}

		tcl_file.set_num(64, &tcl_file.B_34_depth);
		sprintf(tvin_B_34, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_34, tvin_B_34);

		// release memory allocation
		delete [] B_34_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_35, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_35, tvin_B_35);

		sc_bv<8>* B_35_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_35
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (35) => (35) @ (2)
					for (int i_0 = 35; i_0 <= 35; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_35_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_35, "%s\n", (B_35_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_35, tvin_B_35);
		}

		tcl_file.set_num(64, &tcl_file.B_35_depth);
		sprintf(tvin_B_35, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_35, tvin_B_35);

		// release memory allocation
		delete [] B_35_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_36, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_36, tvin_B_36);

		sc_bv<8>* B_36_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_36
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (36) => (36) @ (2)
					for (int i_0 = 36; i_0 <= 36; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_36_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_36, "%s\n", (B_36_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_36, tvin_B_36);
		}

		tcl_file.set_num(64, &tcl_file.B_36_depth);
		sprintf(tvin_B_36, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_36, tvin_B_36);

		// release memory allocation
		delete [] B_36_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_37, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_37, tvin_B_37);

		sc_bv<8>* B_37_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_37
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (37) => (37) @ (2)
					for (int i_0 = 37; i_0 <= 37; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_37_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_37, "%s\n", (B_37_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_37, tvin_B_37);
		}

		tcl_file.set_num(64, &tcl_file.B_37_depth);
		sprintf(tvin_B_37, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_37, tvin_B_37);

		// release memory allocation
		delete [] B_37_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_38, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_38, tvin_B_38);

		sc_bv<8>* B_38_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_38
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (38) => (38) @ (2)
					for (int i_0 = 38; i_0 <= 38; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_38_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_38, "%s\n", (B_38_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_38, tvin_B_38);
		}

		tcl_file.set_num(64, &tcl_file.B_38_depth);
		sprintf(tvin_B_38, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_38, tvin_B_38);

		// release memory allocation
		delete [] B_38_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_39, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_39, tvin_B_39);

		sc_bv<8>* B_39_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_39
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (39) => (39) @ (2)
					for (int i_0 = 39; i_0 <= 39; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_39_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_39, "%s\n", (B_39_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_39, tvin_B_39);
		}

		tcl_file.set_num(64, &tcl_file.B_39_depth);
		sprintf(tvin_B_39, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_39, tvin_B_39);

		// release memory allocation
		delete [] B_39_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_40, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_40, tvin_B_40);

		sc_bv<8>* B_40_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_40
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (40) => (40) @ (2)
					for (int i_0 = 40; i_0 <= 40; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_40_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_40, "%s\n", (B_40_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_40, tvin_B_40);
		}

		tcl_file.set_num(64, &tcl_file.B_40_depth);
		sprintf(tvin_B_40, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_40, tvin_B_40);

		// release memory allocation
		delete [] B_40_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_41, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_41, tvin_B_41);

		sc_bv<8>* B_41_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_41
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (41) => (41) @ (2)
					for (int i_0 = 41; i_0 <= 41; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_41_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_41, "%s\n", (B_41_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_41, tvin_B_41);
		}

		tcl_file.set_num(64, &tcl_file.B_41_depth);
		sprintf(tvin_B_41, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_41, tvin_B_41);

		// release memory allocation
		delete [] B_41_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_42, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_42, tvin_B_42);

		sc_bv<8>* B_42_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_42
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (42) => (42) @ (2)
					for (int i_0 = 42; i_0 <= 42; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_42_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_42, "%s\n", (B_42_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_42, tvin_B_42);
		}

		tcl_file.set_num(64, &tcl_file.B_42_depth);
		sprintf(tvin_B_42, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_42, tvin_B_42);

		// release memory allocation
		delete [] B_42_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_43, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_43, tvin_B_43);

		sc_bv<8>* B_43_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_43
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (43) => (43) @ (2)
					for (int i_0 = 43; i_0 <= 43; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_43_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_43, "%s\n", (B_43_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_43, tvin_B_43);
		}

		tcl_file.set_num(64, &tcl_file.B_43_depth);
		sprintf(tvin_B_43, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_43, tvin_B_43);

		// release memory allocation
		delete [] B_43_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_44, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_44, tvin_B_44);

		sc_bv<8>* B_44_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_44
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (44) => (44) @ (2)
					for (int i_0 = 44; i_0 <= 44; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_44_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_44, "%s\n", (B_44_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_44, tvin_B_44);
		}

		tcl_file.set_num(64, &tcl_file.B_44_depth);
		sprintf(tvin_B_44, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_44, tvin_B_44);

		// release memory allocation
		delete [] B_44_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_45, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_45, tvin_B_45);

		sc_bv<8>* B_45_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_45
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (45) => (45) @ (2)
					for (int i_0 = 45; i_0 <= 45; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_45_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_45, "%s\n", (B_45_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_45, tvin_B_45);
		}

		tcl_file.set_num(64, &tcl_file.B_45_depth);
		sprintf(tvin_B_45, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_45, tvin_B_45);

		// release memory allocation
		delete [] B_45_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_46, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_46, tvin_B_46);

		sc_bv<8>* B_46_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_46
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (46) => (46) @ (2)
					for (int i_0 = 46; i_0 <= 46; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_46_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_46, "%s\n", (B_46_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_46, tvin_B_46);
		}

		tcl_file.set_num(64, &tcl_file.B_46_depth);
		sprintf(tvin_B_46, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_46, tvin_B_46);

		// release memory allocation
		delete [] B_46_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_47, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_47, tvin_B_47);

		sc_bv<8>* B_47_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_47
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (47) => (47) @ (2)
					for (int i_0 = 47; i_0 <= 47; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_47_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_47, "%s\n", (B_47_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_47, tvin_B_47);
		}

		tcl_file.set_num(64, &tcl_file.B_47_depth);
		sprintf(tvin_B_47, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_47, tvin_B_47);

		// release memory allocation
		delete [] B_47_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_48, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_48, tvin_B_48);

		sc_bv<8>* B_48_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_48
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (48) => (48) @ (2)
					for (int i_0 = 48; i_0 <= 48; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_48_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_48, "%s\n", (B_48_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_48, tvin_B_48);
		}

		tcl_file.set_num(64, &tcl_file.B_48_depth);
		sprintf(tvin_B_48, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_48, tvin_B_48);

		// release memory allocation
		delete [] B_48_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_49, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_49, tvin_B_49);

		sc_bv<8>* B_49_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_49
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (49) => (49) @ (2)
					for (int i_0 = 49; i_0 <= 49; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_49_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_49, "%s\n", (B_49_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_49, tvin_B_49);
		}

		tcl_file.set_num(64, &tcl_file.B_49_depth);
		sprintf(tvin_B_49, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_49, tvin_B_49);

		// release memory allocation
		delete [] B_49_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_50, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_50, tvin_B_50);

		sc_bv<8>* B_50_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_50
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (50) => (50) @ (2)
					for (int i_0 = 50; i_0 <= 50; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_50_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_50, "%s\n", (B_50_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_50, tvin_B_50);
		}

		tcl_file.set_num(64, &tcl_file.B_50_depth);
		sprintf(tvin_B_50, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_50, tvin_B_50);

		// release memory allocation
		delete [] B_50_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_51, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_51, tvin_B_51);

		sc_bv<8>* B_51_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_51
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (51) => (51) @ (2)
					for (int i_0 = 51; i_0 <= 51; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_51_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_51, "%s\n", (B_51_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_51, tvin_B_51);
		}

		tcl_file.set_num(64, &tcl_file.B_51_depth);
		sprintf(tvin_B_51, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_51, tvin_B_51);

		// release memory allocation
		delete [] B_51_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_52, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_52, tvin_B_52);

		sc_bv<8>* B_52_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_52
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (52) => (52) @ (2)
					for (int i_0 = 52; i_0 <= 52; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_52_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_52, "%s\n", (B_52_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_52, tvin_B_52);
		}

		tcl_file.set_num(64, &tcl_file.B_52_depth);
		sprintf(tvin_B_52, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_52, tvin_B_52);

		// release memory allocation
		delete [] B_52_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_53, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_53, tvin_B_53);

		sc_bv<8>* B_53_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_53
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (53) => (53) @ (2)
					for (int i_0 = 53; i_0 <= 53; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_53_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_53, "%s\n", (B_53_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_53, tvin_B_53);
		}

		tcl_file.set_num(64, &tcl_file.B_53_depth);
		sprintf(tvin_B_53, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_53, tvin_B_53);

		// release memory allocation
		delete [] B_53_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_54, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_54, tvin_B_54);

		sc_bv<8>* B_54_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_54
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (54) => (54) @ (2)
					for (int i_0 = 54; i_0 <= 54; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_54_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_54, "%s\n", (B_54_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_54, tvin_B_54);
		}

		tcl_file.set_num(64, &tcl_file.B_54_depth);
		sprintf(tvin_B_54, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_54, tvin_B_54);

		// release memory allocation
		delete [] B_54_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_55, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_55, tvin_B_55);

		sc_bv<8>* B_55_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_55
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (55) => (55) @ (2)
					for (int i_0 = 55; i_0 <= 55; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_55_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_55, "%s\n", (B_55_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_55, tvin_B_55);
		}

		tcl_file.set_num(64, &tcl_file.B_55_depth);
		sprintf(tvin_B_55, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_55, tvin_B_55);

		// release memory allocation
		delete [] B_55_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_56, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_56, tvin_B_56);

		sc_bv<8>* B_56_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_56
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (56) => (56) @ (2)
					for (int i_0 = 56; i_0 <= 56; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_56_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_56, "%s\n", (B_56_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_56, tvin_B_56);
		}

		tcl_file.set_num(64, &tcl_file.B_56_depth);
		sprintf(tvin_B_56, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_56, tvin_B_56);

		// release memory allocation
		delete [] B_56_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_57, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_57, tvin_B_57);

		sc_bv<8>* B_57_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_57
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (57) => (57) @ (2)
					for (int i_0 = 57; i_0 <= 57; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_57_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_57, "%s\n", (B_57_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_57, tvin_B_57);
		}

		tcl_file.set_num(64, &tcl_file.B_57_depth);
		sprintf(tvin_B_57, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_57, tvin_B_57);

		// release memory allocation
		delete [] B_57_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_58, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_58, tvin_B_58);

		sc_bv<8>* B_58_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_58
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (58) => (58) @ (2)
					for (int i_0 = 58; i_0 <= 58; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_58_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_58, "%s\n", (B_58_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_58, tvin_B_58);
		}

		tcl_file.set_num(64, &tcl_file.B_58_depth);
		sprintf(tvin_B_58, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_58, tvin_B_58);

		// release memory allocation
		delete [] B_58_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_59, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_59, tvin_B_59);

		sc_bv<8>* B_59_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_59
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (59) => (59) @ (2)
					for (int i_0 = 59; i_0 <= 59; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_59_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_59, "%s\n", (B_59_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_59, tvin_B_59);
		}

		tcl_file.set_num(64, &tcl_file.B_59_depth);
		sprintf(tvin_B_59, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_59, tvin_B_59);

		// release memory allocation
		delete [] B_59_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_60, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_60, tvin_B_60);

		sc_bv<8>* B_60_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_60
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (60) => (60) @ (2)
					for (int i_0 = 60; i_0 <= 60; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_60_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_60, "%s\n", (B_60_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_60, tvin_B_60);
		}

		tcl_file.set_num(64, &tcl_file.B_60_depth);
		sprintf(tvin_B_60, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_60, tvin_B_60);

		// release memory allocation
		delete [] B_60_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_61, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_61, tvin_B_61);

		sc_bv<8>* B_61_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_61
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (61) => (61) @ (2)
					for (int i_0 = 61; i_0 <= 61; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_61_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_61, "%s\n", (B_61_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_61, tvin_B_61);
		}

		tcl_file.set_num(64, &tcl_file.B_61_depth);
		sprintf(tvin_B_61, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_61, tvin_B_61);

		// release memory allocation
		delete [] B_61_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_62, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_62, tvin_B_62);

		sc_bv<8>* B_62_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_62
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (62) => (62) @ (2)
					for (int i_0 = 62; i_0 <= 62; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_62_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_62, "%s\n", (B_62_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_62, tvin_B_62);
		}

		tcl_file.set_num(64, &tcl_file.B_62_depth);
		sprintf(tvin_B_62, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_62, tvin_B_62);

		// release memory allocation
		delete [] B_62_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_B_63, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_B_63, tvin_B_63);

		sc_bv<8>* B_63_tvin_wrapc_buffer = new sc_bv<8>[64];

		// RTL Name: B_63
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: B(7, 0)
				{
					// carray: (63) => (63) @ (2)
					for (int i_0 = 63; i_0 <= 63; i_0 += 2)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : B[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : B[0][0]
							// regulate_c_name       : B
							// input_type_conversion : B[i_0][i_1]
							if (&(B[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> B_tmp_mem;
								B_tmp_mem = B[i_0][i_1];
								B_63_tvin_wrapc_buffer[hls_map_index].range(7, 0) = B_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 64; i++)
		{
			sprintf(tvin_B_63, "%s\n", (B_63_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_B_63, tvin_B_63);
		}

		tcl_file.set_num(64, &tcl_file.B_63_depth);
		sprintf(tvin_B_63, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_B_63, tvin_B_63);

		// release memory allocation
		delete [] B_63_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_0, tvin_C_0);

		sc_bv<32>* C_0_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (0) => (3) @ (1)
					for (int i_0 = 0; i_0 <= 3; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_0, "%s\n", (C_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_0, tvin_C_0);
		}

		tcl_file.set_num(256, &tcl_file.C_0_depth);
		sprintf(tvin_C_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_0, tvin_C_0);

		// release memory allocation
		delete [] C_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_1, tvin_C_1);

		sc_bv<32>* C_1_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (4) => (7) @ (1)
					for (int i_0 = 4; i_0 <= 7; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_1, "%s\n", (C_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_1, tvin_C_1);
		}

		tcl_file.set_num(256, &tcl_file.C_1_depth);
		sprintf(tvin_C_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_1, tvin_C_1);

		// release memory allocation
		delete [] C_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_2, tvin_C_2);

		sc_bv<32>* C_2_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (8) => (11) @ (1)
					for (int i_0 = 8; i_0 <= 11; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_2_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_2, "%s\n", (C_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_2, tvin_C_2);
		}

		tcl_file.set_num(256, &tcl_file.C_2_depth);
		sprintf(tvin_C_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_2, tvin_C_2);

		// release memory allocation
		delete [] C_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_3, tvin_C_3);

		sc_bv<32>* C_3_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (12) => (15) @ (1)
					for (int i_0 = 12; i_0 <= 15; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_3_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_3, "%s\n", (C_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_3, tvin_C_3);
		}

		tcl_file.set_num(256, &tcl_file.C_3_depth);
		sprintf(tvin_C_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_3, tvin_C_3);

		// release memory allocation
		delete [] C_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_4, tvin_C_4);

		sc_bv<32>* C_4_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_4
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (16) => (19) @ (1)
					for (int i_0 = 16; i_0 <= 19; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_4_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_4, "%s\n", (C_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_4, tvin_C_4);
		}

		tcl_file.set_num(256, &tcl_file.C_4_depth);
		sprintf(tvin_C_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_4, tvin_C_4);

		// release memory allocation
		delete [] C_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_5, tvin_C_5);

		sc_bv<32>* C_5_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_5
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (20) => (23) @ (1)
					for (int i_0 = 20; i_0 <= 23; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_5_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_5, "%s\n", (C_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_5, tvin_C_5);
		}

		tcl_file.set_num(256, &tcl_file.C_5_depth);
		sprintf(tvin_C_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_5, tvin_C_5);

		// release memory allocation
		delete [] C_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_6, tvin_C_6);

		sc_bv<32>* C_6_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_6
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (24) => (27) @ (1)
					for (int i_0 = 24; i_0 <= 27; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_6_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_6, "%s\n", (C_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_6, tvin_C_6);
		}

		tcl_file.set_num(256, &tcl_file.C_6_depth);
		sprintf(tvin_C_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_6, tvin_C_6);

		// release memory allocation
		delete [] C_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_7, tvin_C_7);

		sc_bv<32>* C_7_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_7
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (28) => (31) @ (1)
					for (int i_0 = 28; i_0 <= 31; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_7_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_7, "%s\n", (C_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_7, tvin_C_7);
		}

		tcl_file.set_num(256, &tcl_file.C_7_depth);
		sprintf(tvin_C_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_7, tvin_C_7);

		// release memory allocation
		delete [] C_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_8, tvin_C_8);

		sc_bv<32>* C_8_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_8
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (32) => (35) @ (1)
					for (int i_0 = 32; i_0 <= 35; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_8_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_8, "%s\n", (C_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_8, tvin_C_8);
		}

		tcl_file.set_num(256, &tcl_file.C_8_depth);
		sprintf(tvin_C_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_8, tvin_C_8);

		// release memory allocation
		delete [] C_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_9, tvin_C_9);

		sc_bv<32>* C_9_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_9
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (36) => (39) @ (1)
					for (int i_0 = 36; i_0 <= 39; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_9_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_9, "%s\n", (C_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_9, tvin_C_9);
		}

		tcl_file.set_num(256, &tcl_file.C_9_depth);
		sprintf(tvin_C_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_9, tvin_C_9);

		// release memory allocation
		delete [] C_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_10, tvin_C_10);

		sc_bv<32>* C_10_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_10
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (40) => (43) @ (1)
					for (int i_0 = 40; i_0 <= 43; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_10_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_10, "%s\n", (C_10_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_10, tvin_C_10);
		}

		tcl_file.set_num(256, &tcl_file.C_10_depth);
		sprintf(tvin_C_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_10, tvin_C_10);

		// release memory allocation
		delete [] C_10_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_11, tvin_C_11);

		sc_bv<32>* C_11_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_11
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (44) => (47) @ (1)
					for (int i_0 = 44; i_0 <= 47; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_11_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_11, "%s\n", (C_11_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_11, tvin_C_11);
		}

		tcl_file.set_num(256, &tcl_file.C_11_depth);
		sprintf(tvin_C_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_11, tvin_C_11);

		// release memory allocation
		delete [] C_11_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_12, tvin_C_12);

		sc_bv<32>* C_12_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_12
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (48) => (51) @ (1)
					for (int i_0 = 48; i_0 <= 51; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_12_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_12, "%s\n", (C_12_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_12, tvin_C_12);
		}

		tcl_file.set_num(256, &tcl_file.C_12_depth);
		sprintf(tvin_C_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_12, tvin_C_12);

		// release memory allocation
		delete [] C_12_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_13, tvin_C_13);

		sc_bv<32>* C_13_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_13
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (52) => (55) @ (1)
					for (int i_0 = 52; i_0 <= 55; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_13_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_13, "%s\n", (C_13_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_13, tvin_C_13);
		}

		tcl_file.set_num(256, &tcl_file.C_13_depth);
		sprintf(tvin_C_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_13, tvin_C_13);

		// release memory allocation
		delete [] C_13_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_14, tvin_C_14);

		sc_bv<32>* C_14_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_14
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (56) => (59) @ (1)
					for (int i_0 = 56; i_0 <= 59; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_14_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_14, "%s\n", (C_14_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_14, tvin_C_14);
		}

		tcl_file.set_num(256, &tcl_file.C_14_depth);
		sprintf(tvin_C_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_14, tvin_C_14);

		// release memory allocation
		delete [] C_14_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_C_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_C_15, tvin_C_15);

		sc_bv<32>* C_15_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_15
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (60) => (63) @ (1)
					for (int i_0 = 60; i_0 <= 63; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_15_tvin_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_C_15, "%s\n", (C_15_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_C_15, tvin_C_15);
		}

		tcl_file.set_num(256, &tcl_file.C_15_depth);
		sprintf(tvin_C_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_C_15, tvin_C_15);

		// release memory allocation
		delete [] C_15_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		MATRIX_MUL(A, B, C);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_C_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_0, tvout_C_0);

		sc_bv<32>* C_0_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (0) => (3) @ (1)
					for (int i_0 = 0; i_0 <= 3; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_0, "%s\n", (C_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_0, tvout_C_0);
		}

		tcl_file.set_num(256, &tcl_file.C_0_depth);
		sprintf(tvout_C_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_0, tvout_C_0);

		// release memory allocation
		delete [] C_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_1, tvout_C_1);

		sc_bv<32>* C_1_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (4) => (7) @ (1)
					for (int i_0 = 4; i_0 <= 7; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_1, "%s\n", (C_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_1, tvout_C_1);
		}

		tcl_file.set_num(256, &tcl_file.C_1_depth);
		sprintf(tvout_C_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_1, tvout_C_1);

		// release memory allocation
		delete [] C_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_2, tvout_C_2);

		sc_bv<32>* C_2_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (8) => (11) @ (1)
					for (int i_0 = 8; i_0 <= 11; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_2_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_2, "%s\n", (C_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_2, tvout_C_2);
		}

		tcl_file.set_num(256, &tcl_file.C_2_depth);
		sprintf(tvout_C_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_2, tvout_C_2);

		// release memory allocation
		delete [] C_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_3, tvout_C_3);

		sc_bv<32>* C_3_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (12) => (15) @ (1)
					for (int i_0 = 12; i_0 <= 15; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_3_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_3, "%s\n", (C_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_3, tvout_C_3);
		}

		tcl_file.set_num(256, &tcl_file.C_3_depth);
		sprintf(tvout_C_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_3, tvout_C_3);

		// release memory allocation
		delete [] C_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_4, tvout_C_4);

		sc_bv<32>* C_4_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_4
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (16) => (19) @ (1)
					for (int i_0 = 16; i_0 <= 19; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_4_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_4, "%s\n", (C_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_4, tvout_C_4);
		}

		tcl_file.set_num(256, &tcl_file.C_4_depth);
		sprintf(tvout_C_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_4, tvout_C_4);

		// release memory allocation
		delete [] C_4_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_5, tvout_C_5);

		sc_bv<32>* C_5_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_5
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (20) => (23) @ (1)
					for (int i_0 = 20; i_0 <= 23; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_5_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_5, "%s\n", (C_5_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_5, tvout_C_5);
		}

		tcl_file.set_num(256, &tcl_file.C_5_depth);
		sprintf(tvout_C_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_5, tvout_C_5);

		// release memory allocation
		delete [] C_5_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_6, tvout_C_6);

		sc_bv<32>* C_6_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_6
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (24) => (27) @ (1)
					for (int i_0 = 24; i_0 <= 27; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_6_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_6, "%s\n", (C_6_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_6, tvout_C_6);
		}

		tcl_file.set_num(256, &tcl_file.C_6_depth);
		sprintf(tvout_C_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_6, tvout_C_6);

		// release memory allocation
		delete [] C_6_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_7, tvout_C_7);

		sc_bv<32>* C_7_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_7
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (28) => (31) @ (1)
					for (int i_0 = 28; i_0 <= 31; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_7_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_7, "%s\n", (C_7_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_7, tvout_C_7);
		}

		tcl_file.set_num(256, &tcl_file.C_7_depth);
		sprintf(tvout_C_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_7, tvout_C_7);

		// release memory allocation
		delete [] C_7_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_8, tvout_C_8);

		sc_bv<32>* C_8_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_8
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (32) => (35) @ (1)
					for (int i_0 = 32; i_0 <= 35; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_8_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_8, "%s\n", (C_8_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_8, tvout_C_8);
		}

		tcl_file.set_num(256, &tcl_file.C_8_depth);
		sprintf(tvout_C_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_8, tvout_C_8);

		// release memory allocation
		delete [] C_8_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_9, tvout_C_9);

		sc_bv<32>* C_9_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_9
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (36) => (39) @ (1)
					for (int i_0 = 36; i_0 <= 39; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_9_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_9, "%s\n", (C_9_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_9, tvout_C_9);
		}

		tcl_file.set_num(256, &tcl_file.C_9_depth);
		sprintf(tvout_C_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_9, tvout_C_9);

		// release memory allocation
		delete [] C_9_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_10, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_10, tvout_C_10);

		sc_bv<32>* C_10_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_10
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (40) => (43) @ (1)
					for (int i_0 = 40; i_0 <= 43; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_10_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_10, "%s\n", (C_10_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_10, tvout_C_10);
		}

		tcl_file.set_num(256, &tcl_file.C_10_depth);
		sprintf(tvout_C_10, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_10, tvout_C_10);

		// release memory allocation
		delete [] C_10_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_11, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_11, tvout_C_11);

		sc_bv<32>* C_11_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_11
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (44) => (47) @ (1)
					for (int i_0 = 44; i_0 <= 47; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_11_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_11, "%s\n", (C_11_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_11, tvout_C_11);
		}

		tcl_file.set_num(256, &tcl_file.C_11_depth);
		sprintf(tvout_C_11, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_11, tvout_C_11);

		// release memory allocation
		delete [] C_11_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_12, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_12, tvout_C_12);

		sc_bv<32>* C_12_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_12
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (48) => (51) @ (1)
					for (int i_0 = 48; i_0 <= 51; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_12_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_12, "%s\n", (C_12_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_12, tvout_C_12);
		}

		tcl_file.set_num(256, &tcl_file.C_12_depth);
		sprintf(tvout_C_12, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_12, tvout_C_12);

		// release memory allocation
		delete [] C_12_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_13, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_13, tvout_C_13);

		sc_bv<32>* C_13_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_13
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (52) => (55) @ (1)
					for (int i_0 = 52; i_0 <= 55; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_13_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_13, "%s\n", (C_13_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_13, tvout_C_13);
		}

		tcl_file.set_num(256, &tcl_file.C_13_depth);
		sprintf(tvout_C_13, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_13, tvout_C_13);

		// release memory allocation
		delete [] C_13_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_14, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_14, tvout_C_14);

		sc_bv<32>* C_14_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_14
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (56) => (59) @ (1)
					for (int i_0 = 56; i_0 <= 59; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_14_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_14, "%s\n", (C_14_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_14, tvout_C_14);
		}

		tcl_file.set_num(256, &tcl_file.C_14_depth);
		sprintf(tvout_C_14, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_14, tvout_C_14);

		// release memory allocation
		delete [] C_14_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_C_15, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_C_15, tvout_C_15);

		sc_bv<32>* C_15_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: C_15
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: C(31, 0)
				{
					// carray: (60) => (63) @ (1)
					for (int i_0 = 60; i_0 <= 63; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : C[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : C[0][0]
							// regulate_c_name       : C
							// input_type_conversion : C[i_0][i_1]
							if (&(C[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> C_tmp_mem;
								C_tmp_mem = C[i_0][i_1];
								C_15_tvout_wrapc_buffer[hls_map_index].range(31, 0) = C_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_C_15, "%s\n", (C_15_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_C_15, tvout_C_15);
		}

		tcl_file.set_num(256, &tcl_file.C_15_depth);
		sprintf(tvout_C_15, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_C_15, tvout_C_15);

		// release memory allocation
		delete [] C_15_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "A_0"
		delete [] tvin_A_0;
		// release memory allocation: "A_1"
		delete [] tvin_A_1;
		// release memory allocation: "A_2"
		delete [] tvin_A_2;
		// release memory allocation: "A_3"
		delete [] tvin_A_3;
		// release memory allocation: "A_4"
		delete [] tvin_A_4;
		// release memory allocation: "A_5"
		delete [] tvin_A_5;
		// release memory allocation: "A_6"
		delete [] tvin_A_6;
		// release memory allocation: "A_7"
		delete [] tvin_A_7;
		// release memory allocation: "A_8"
		delete [] tvin_A_8;
		// release memory allocation: "A_9"
		delete [] tvin_A_9;
		// release memory allocation: "A_10"
		delete [] tvin_A_10;
		// release memory allocation: "A_11"
		delete [] tvin_A_11;
		// release memory allocation: "A_12"
		delete [] tvin_A_12;
		// release memory allocation: "A_13"
		delete [] tvin_A_13;
		// release memory allocation: "A_14"
		delete [] tvin_A_14;
		// release memory allocation: "A_15"
		delete [] tvin_A_15;
		// release memory allocation: "B_0"
		delete [] tvin_B_0;
		// release memory allocation: "B_1"
		delete [] tvin_B_1;
		// release memory allocation: "B_2"
		delete [] tvin_B_2;
		// release memory allocation: "B_3"
		delete [] tvin_B_3;
		// release memory allocation: "B_4"
		delete [] tvin_B_4;
		// release memory allocation: "B_5"
		delete [] tvin_B_5;
		// release memory allocation: "B_6"
		delete [] tvin_B_6;
		// release memory allocation: "B_7"
		delete [] tvin_B_7;
		// release memory allocation: "B_8"
		delete [] tvin_B_8;
		// release memory allocation: "B_9"
		delete [] tvin_B_9;
		// release memory allocation: "B_10"
		delete [] tvin_B_10;
		// release memory allocation: "B_11"
		delete [] tvin_B_11;
		// release memory allocation: "B_12"
		delete [] tvin_B_12;
		// release memory allocation: "B_13"
		delete [] tvin_B_13;
		// release memory allocation: "B_14"
		delete [] tvin_B_14;
		// release memory allocation: "B_15"
		delete [] tvin_B_15;
		// release memory allocation: "B_16"
		delete [] tvin_B_16;
		// release memory allocation: "B_17"
		delete [] tvin_B_17;
		// release memory allocation: "B_18"
		delete [] tvin_B_18;
		// release memory allocation: "B_19"
		delete [] tvin_B_19;
		// release memory allocation: "B_20"
		delete [] tvin_B_20;
		// release memory allocation: "B_21"
		delete [] tvin_B_21;
		// release memory allocation: "B_22"
		delete [] tvin_B_22;
		// release memory allocation: "B_23"
		delete [] tvin_B_23;
		// release memory allocation: "B_24"
		delete [] tvin_B_24;
		// release memory allocation: "B_25"
		delete [] tvin_B_25;
		// release memory allocation: "B_26"
		delete [] tvin_B_26;
		// release memory allocation: "B_27"
		delete [] tvin_B_27;
		// release memory allocation: "B_28"
		delete [] tvin_B_28;
		// release memory allocation: "B_29"
		delete [] tvin_B_29;
		// release memory allocation: "B_30"
		delete [] tvin_B_30;
		// release memory allocation: "B_31"
		delete [] tvin_B_31;
		// release memory allocation: "B_32"
		delete [] tvin_B_32;
		// release memory allocation: "B_33"
		delete [] tvin_B_33;
		// release memory allocation: "B_34"
		delete [] tvin_B_34;
		// release memory allocation: "B_35"
		delete [] tvin_B_35;
		// release memory allocation: "B_36"
		delete [] tvin_B_36;
		// release memory allocation: "B_37"
		delete [] tvin_B_37;
		// release memory allocation: "B_38"
		delete [] tvin_B_38;
		// release memory allocation: "B_39"
		delete [] tvin_B_39;
		// release memory allocation: "B_40"
		delete [] tvin_B_40;
		// release memory allocation: "B_41"
		delete [] tvin_B_41;
		// release memory allocation: "B_42"
		delete [] tvin_B_42;
		// release memory allocation: "B_43"
		delete [] tvin_B_43;
		// release memory allocation: "B_44"
		delete [] tvin_B_44;
		// release memory allocation: "B_45"
		delete [] tvin_B_45;
		// release memory allocation: "B_46"
		delete [] tvin_B_46;
		// release memory allocation: "B_47"
		delete [] tvin_B_47;
		// release memory allocation: "B_48"
		delete [] tvin_B_48;
		// release memory allocation: "B_49"
		delete [] tvin_B_49;
		// release memory allocation: "B_50"
		delete [] tvin_B_50;
		// release memory allocation: "B_51"
		delete [] tvin_B_51;
		// release memory allocation: "B_52"
		delete [] tvin_B_52;
		// release memory allocation: "B_53"
		delete [] tvin_B_53;
		// release memory allocation: "B_54"
		delete [] tvin_B_54;
		// release memory allocation: "B_55"
		delete [] tvin_B_55;
		// release memory allocation: "B_56"
		delete [] tvin_B_56;
		// release memory allocation: "B_57"
		delete [] tvin_B_57;
		// release memory allocation: "B_58"
		delete [] tvin_B_58;
		// release memory allocation: "B_59"
		delete [] tvin_B_59;
		// release memory allocation: "B_60"
		delete [] tvin_B_60;
		// release memory allocation: "B_61"
		delete [] tvin_B_61;
		// release memory allocation: "B_62"
		delete [] tvin_B_62;
		// release memory allocation: "B_63"
		delete [] tvin_B_63;
		// release memory allocation: "C_0"
		delete [] tvin_C_0;
		delete [] tvout_C_0;
		// release memory allocation: "C_1"
		delete [] tvin_C_1;
		delete [] tvout_C_1;
		// release memory allocation: "C_2"
		delete [] tvin_C_2;
		delete [] tvout_C_2;
		// release memory allocation: "C_3"
		delete [] tvin_C_3;
		delete [] tvout_C_3;
		// release memory allocation: "C_4"
		delete [] tvin_C_4;
		delete [] tvout_C_4;
		// release memory allocation: "C_5"
		delete [] tvin_C_5;
		delete [] tvout_C_5;
		// release memory allocation: "C_6"
		delete [] tvin_C_6;
		delete [] tvout_C_6;
		// release memory allocation: "C_7"
		delete [] tvin_C_7;
		delete [] tvout_C_7;
		// release memory allocation: "C_8"
		delete [] tvin_C_8;
		delete [] tvout_C_8;
		// release memory allocation: "C_9"
		delete [] tvin_C_9;
		delete [] tvout_C_9;
		// release memory allocation: "C_10"
		delete [] tvin_C_10;
		delete [] tvout_C_10;
		// release memory allocation: "C_11"
		delete [] tvin_C_11;
		delete [] tvout_C_11;
		// release memory allocation: "C_12"
		delete [] tvin_C_12;
		delete [] tvout_C_12;
		// release memory allocation: "C_13"
		delete [] tvin_C_13;
		delete [] tvout_C_13;
		// release memory allocation: "C_14"
		delete [] tvin_C_14;
		delete [] tvout_C_14;
		// release memory allocation: "C_15"
		delete [] tvin_C_15;
		delete [] tvout_C_15;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

