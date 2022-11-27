#include <stdio.h>
#include <stdint.h>
#include <random>
#include <iostream>


using namespace std;

#define lm 6
#define ln 6
#define lp 6

#define n 1<<ln
#define m 1<<lm
#define p 1<<lp

void MATRIX_MUL(uint8_t  A[n][m] , uint8_t  B[m][p] , uint32_t  C[n][p]);

int main(){

	uint32_t  C[n][p];
	uint8_t  A[n][m] , B[m][p];
	uint32_t C2[n][p]; // matrix to check if results is correct

	std::minstd_rand simple_rand;
	std::uniform_int_distribution<uint8_t> uniform_0_255(0,255);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			A[i][j] =uniform_0_255(simple_rand);
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			B[i][j] = uniform_0_255(simple_rand);
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			C2[i][j] = 0;
			C[i][j] = 0;
		}
	}

	printf("Matrix A\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			//printf("A[%d][%d] = %d\n",i,j,A[i][j]);
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix B\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			//printf("B[%d][%d] = %d\n",i,j,B[i][j]);
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}

	MATRIX_MUL(A, B, C);

	bool t = true;
	for (int i = 0 ; i < n; i++){
		for(int k = 0; k < m ; k++){
			for(int j = 0; j < p; j++){
				C2[i][j] += (A[i][k] * B[k][j]);
			}
		}
	}

	for (int i = 0 ; i < n; i++){
			for(int j = 0; j < p; j++){
				if(C2[i][j] != C[i][j]) t = false;
			}
	}
	printf("\nFinal Matrix\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	if(t){
		printf("TEST PASSED!\n");
	}
	else{
		printf("TEST FAILED!\n");
	}
}
