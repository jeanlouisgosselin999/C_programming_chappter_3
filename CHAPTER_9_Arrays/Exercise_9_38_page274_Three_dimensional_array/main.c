/* 
This program will read one three-dimensional array of numbers, calculate the sums of the 
corresponding elements, then display the new table containing these sums.

*/

#include <stdio.h>
#include <stdlib.h>

//defining our constant variables for size of columns and rows:
#define MAXTABS 10
#define MAXROWS 20
#define MAXCOLS 30

/*
GENERAL NOTE: when typing in constant values for array variables, these MUST appear:
1) in their prototypes
2) in their definitions within main()
3) in their functions' signatures
*/

//prototypes:
void readinput(int [MAXTABS][MAXROWS][MAXCOLS], int, int, int);
void computesums(int [MAXTABS][MAXROWS][MAXCOLS], int, int, int);

//   [MAXTABS][MAXROWS][MAXCOLS] -- int numTables, int nrows, int ncols);

int main(int argc, char *argv[]) {
	
	int numTables, nrows, ncols;
	
	//array definitions:
	int threeDimArray[MAXTABS][MAXROWS][MAXCOLS];
	int compThreeDimArray[MAXTABS][MAXROWS][MAXCOLS];
	
	printf("How many tables?\n");
	scanf("%d", &numTables);
	printf("How many rows per table?\n");
	scanf("%d", &nrows);
	printf("How many columns per table?\n");
	scanf("%d", &ncols);
	
	//calling our first function: to read and save data entered by the user for FIRST table 
	//(NOTE: this function has the number of tables and max number of rows and columns entered by user as parameters, as well as an array)
	readinput(threeDimArray, numTables, nrows, ncols);
	
	//calling our second function: to make the sums of all values from both arrays:
	//(NOTE: this function has the max number of tables, rows and columns entered by user as parameters, as well as all three arrays)
	printf("\n\nSum of the elements from the three-dimensional array:\n\n");
	computesums(threeDimArray, numTables, nrows, ncols);

	
	return 0;
}

//******************************************  FUNCTIONS  ***********************************************************


//reading in a table of integers:
void readinput(int threeDimArray[MAXTABS][MAXROWS][MAXCOLS], int numTables, int nrows, int ncols) {
	
	int tab, row, col;
	
	for(tab=0; tab<numTables; ++tab) {
		printf("Enter values for table %d:\n", tab+1);
		for(row=0; row<nrows; ++row) {
			for(col=0; col<ncols; ++col) {
				scanf("%d", &threeDimArray[tab][row][col]);		
			}
		}
	}

	return;	
}


//adding elements of both tables:
void computesums(int threeDimArray[MAXTABS][MAXROWS][MAXCOLS], int numTables, int nrows, int ncols) {
	
	int i, j, k;
	int compThreeDimArray[MAXTABS][MAXROWS][MAXCOLS];
	
	for(i=0; i<numTables; ++i) {
		for(j=0; j<nrows; ++j) {
			for(k=0; k<ncols; ++k) 
				compThreeDimArray[i][j][k] = threeDimArray[i][j][k] + threeDimArray[i][j][k];	
		}
	}
	
	int tab, row, col;
	
	for(tab=0; tab<numTables; ++tab) {
		for(row=0; row<nrows; ++row) {
			for(col=0; col<ncols; ++col)
				printf("In rows %d / columns %d of table %d, sum of values is: %4d\n", row+1, col+1, tab+1, compThreeDimArray[tab][row][col]);
			
		printf("\n");
		}
	}		

	return;
}



















