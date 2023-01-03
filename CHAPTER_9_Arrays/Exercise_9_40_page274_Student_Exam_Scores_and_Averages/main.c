#include <stdio.h>
#include <stdlib.h>

const int MAXROW=30;
const int MAXCOL=100;


//prototypes (NOTE: MUST WRITE IN THE CONSTANT VALUES IN SQUARE BRACKETS!)
void readScores(float [MAXROW][MAXCOL], int, int);
void studAvg(float [MAXROW][MAXCOL], int, int);
float classAvg (float [MAXROW][MAXCOL], int, int); //NOTE: this is the only function which RETURNS a value, and therefore is not VOID
void writeClassAvg(float);


int main(int argc, char *argv[]) {
	
	//variables(NOTE: many, if not all, of these variables will be used in our functions, and so SET TO ARGUMENT/PARAMETER of these functions!)
	int i, j;
	static int numStudents;
	static int numScores;
	float avgClass; //NOTE: we will use this variable specifically to store the value returned by the function "classAvg"; it will in turn serve as a parameter to the following function
	float scores[MAXROW][MAXCOL];
		
	printf("How many students in the class?\n");
	scanf("%d", &numStudents);
	printf("How many scores per student?\n");
	scanf("%d", &numScores);
	
	//calling our 1st function: inputting exam scores for each student, according to pre-defined number of students:
	readScores(scores, numStudents, numScores);
	
	//calling our 2nd function: calculating and displaying the average score per student:
	studAvg(scores, numStudents, numScores);
	
	//calling our 3rd function: calculating the average score of the class:
	avgClass = classAvg(scores, numStudents, numScores); /*
															NOTE: for some reason, the only way for this function to work
															was to turn this into a function that RETURNS a value, which is then
															assigned to our variable avgClass in main(). This same variable is
															then passed on to our next function as a parameter. 
														*/
	
	//calling our 4th and last function: displaying the average score of the class:
	writeClassAvg(avgClass);
	
	return 0;
}

/*
NOTE: in all our functions, we IMPORT (ie: SET TO ARGUMENT/PARAMETER) all the necessary variables declared in the main
*/


// FUNCTION 1: reading in a table of exam scores per student:
void readScores(float scores[MAXROW][MAXCOL], int numStudents, int numScores) {
	
	int i, j;
	
	for(i=0; i<numStudents; ++i) {
		printf("Enter exam scores for student no. %d:\n", i+1); //REMINDER: we add 1 because, as we know, arrays start from 0, not from 1
				for(j=0; j<numScores; ++j) {
					scanf("%g", &scores[i][j]);
				}
	}
	return;	
}

// FUNCTION 2: calculating and printing the average score per student:
void studAvg(float scores[MAXROW][MAXCOL], int numStudents, int numScores) {
	
	int i, j;
	float dummy1 = 0.0;
	float avgStud[MAXROW];
	
	for(i=0; i<numStudents; ++i) {
		dummy1 = 0.0;
			for(j=0; j<numScores; ++j) {
				dummy1 += scores[i][j];
			} 	
		avgStud[i] = dummy1 / numScores;	
	}
	
	for(i=0; i<numStudents; ++i)
		printf("\nFor student no. %d, average score is: %g\n", i+1, avgStud[i]);
		
	return;
}

// FUNCTION 3: calculating the average score for the class:
float classAvg(float scores[MAXROW][MAXCOL], int numStudents, int numScores) {
	
	int i, j;
	static float dummy2;
	static int totalNumScores;
				
	for(i=0; i<numStudents; ++i) {
		for(j=0; j<numScores; ++j) {
			dummy2 += scores[i][j];
			++totalNumScores;
		} 		
	} 
	
	return dummy2 / totalNumScores;
}

// FUNCTION 4: displaying the average score for the class:
void writeClassAvg(float avgClass) {
	
	printf("\nAverage score of the class is: %g", avgClass);
	
	return;	
}



