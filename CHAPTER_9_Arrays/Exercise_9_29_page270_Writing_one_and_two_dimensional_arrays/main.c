#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, j;
	
//****************************  exercise (A):  *********************************************
	int c[12] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
	printf("Here is your C array:\n\n");
	for(i=0; i<12; ++i)
		printf("%d\t", c[i]);
		
	printf("\n\n");
	
	
//****************************  exercise (B):  *********************************************
	char point[6] = {'N', 'O', 'R', 'T', 'H', '\n'};
	printf("Here is your POINT array:\n\n");
	for(i=0; i<6; ++i)
		printf("%c\t", point[i]);
		
	printf("\n\n");
	
//****************************  exercise (C):  *********************************************
	char letters[4] = {'N', 'S', 'E', 'W'};
	printf("Here is your LETTERS array:\n\n");
	for(i=0; i<4; ++i)
		printf("%c\t", letters[i]);
		
	printf("\n\n");
	
//****************************  exercise (D):  *********************************************
	float consts[6] = {0.005, -0.032, 1e-6, 0.167, -0.3e8, 0.015};
	printf("Here is your CONSTS array:\n\n");
	for(i=0; i<6; ++i)
		printf("%g\t", consts[i]);
		
	printf("\n\n");
	
//****************************  exercise (E):  *********************************************
	int n[3][4] = {
					{10, 12, 14, 16},
					{20, 22, 24, 26},
					{30, 32, 34, 36}
				};
		
	printf("Here is your N array:\n\n");
	for(i=0; i<3; ++i) {
		for(j=0; j<4; ++j)
			printf("%d\t", n[i][j]);
	}
	
	printf("\n\n");
	
//****************************  exercise (F):  *********************************************
	int m[3][4] = {
					{10, 12, 14},
					{20, 22, 24},
					{30, 32, 34}
				};
		
	printf("Here is your N array:\n\n");
	for(i=0; i<3; ++i) {
		for(j=0; j<4; ++j)
			printf("%d\t", m[i][j]);
	}
	
	printf("\n\n");
	
//****************************  exercise (G):  *********************************************
	int x[3][4] = {
					{10, 12, 14, 16},
					{20, 22}
				};
		
	printf("Here is your N array:\n\n");
	for(i=0; i<3; ++i) {
		for(j=0; j<4; ++j)
			printf("%d\t", x[i][j]);
	}
	
	printf("\n\n");
	
		
	
	return 0;
}
