#include <stdio.h>
#include <stdint.h>


#define lm 6
#define ln 6
#define lp 6

#define n 1<<ln
#define m 1<<lm
#define p 1<<lp

//#define ONLY_ARRAY_PARTITION
//#define ONLY_PIPELINE
//#define ONLY_UNROLL

#define do_all

//A is NxM matrix
//B is MxP

//Output C NxP

void MATRIX_MUL(uint8_t A[n][m] ,uint8_t B[m][p], uint32_t C[n][p]){

#ifdef ONLY_ARRAY_PARTITION
// Do Array Partition
	// check only ln
	if(ln == 1 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 2
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}else if(ln == 2 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 4
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}
	else if(ln == 3 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 8
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}

	else if(ln == 4 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 16
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}

	else if(ln == 5 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 32
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}

	else if(ln == 6 && lp == 1 && lm == 6){
#pragma HLS array_partition variable=A block factor= 64
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 2
	}
	//Checking for lp
	else if(ln == 2 && lp == 2  && lm == 6){
#pragma HLS array_partition variable=A block factor= 4
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 4
	}

	else if(ln == 3 && lp == 3  && lm == 6){
#pragma HLS array_partition variable=A block factor= 8
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 8
	}

	else if(ln == 4 && lp == 4  && lm == 6){
#pragma HLS array_partition variable=A block factor= 16
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 16
	}
	else if(ln == 5 && lp == 5  && lm == 6){
#pragma HLS array_partition variable=A block factor= 32
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 32
	}
	else if(ln == 6 && lp == 6  && lm == 6){
#pragma HLS array_partition variable=A block factor= 64
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 64
	}

#endif

#ifdef ONLY_PIPELINE
#pragma HLS pipeline II=1
#endif

#ifdef do_all
#pragma HLS array_partition variable=A block factor= 16
#pragma HLS array_partition variable=B block factor= 64
#pragma HLS array_partition variable=C block factor= 16
//#pragma HLS pipeline II=1
#endif



	for (int i = 0 ; i < n; i++){

#ifdef ONLY_UNROLL
#pragma HLS unroll region skip_exit_check
#endif

#ifdef do_all
#pragma HLS unroll region skip_exit_check
#endif
		for(int k = 0; k < m ; k++){
			for(int j = 0; j < p; j++){
				C[i][j] += (A[i][k] * B[k][j]);
			}
		}
	}
}
