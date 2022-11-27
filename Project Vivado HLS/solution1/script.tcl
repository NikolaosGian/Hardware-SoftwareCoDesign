############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MATRIX_MUL
set_top MATRIX_MUL
add_files MATRIX_MUL/MATRIX_MUL.cpp
add_files -tb MATRIX_MUL/tb_MATRIX_MUL.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcu200-fsgd2104-2-e}
create_clock -period 10 -name default
#source "./MATRIX_MUL/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
