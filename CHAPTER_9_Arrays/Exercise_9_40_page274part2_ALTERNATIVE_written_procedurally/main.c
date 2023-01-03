#include <stdio.h>
#include <stdlib.h>

#define MAXSTUDENTROW 20
#define MAXSCORECOLUMN 20


int main(int argc, char *argv[]) {
	
	int i, j;
	int numStudents;
	int numScores;
	int totalNumScores;
	float dummy1 = 0.0;
	float dummy2 = 0.0;
	float avgClass = 0.0;
	float avgStud[MAXSTUDENTROW];
	float studScores[MAXSTUDENTROW][MAXSCORECOLUMN];
	
	//determining the number of values being entered:
	printf("How many students in the class?\n");
	scanf("%d", &numStudents);
	printf("How many scores per student?\n");
	scanf("%d", &numScores);
	
	printf("\n");
	
	//inputting scores per student:
	for(i=0; i<numStudents; ++i) {
		printf("Enter exam scores for student no. %d:\n", i+1); //REMINDER: we add 1 because, as we know, arrays start from 0, not from 1
			for(j=0; j<numScores; ++j)
				scanf("%g", &studScores[i][j]);
	}

	// calculating the average score per student:
	for(i=0; i<numStudents; ++i) {
		dummy1 = 0.0;
			for(j=0; j<numScores; ++j) {
				dummy1 += studScores[i][j];
			} 	
		avgStud[i] = dummy1 / numScores;	
	}
	
	//displaying scores of students:
	for(i=0; i<numStudents; ++i) {
		printf("\nScores of student no. %d are: ", i+1);
			for(j=0; j<numScores; ++j)
				printf("%g \t", studScores[i][j]);
		printf("\n\nHis average score is: %g\n\n", avgStud[i]);				
	}
	
	printf("\n\n");
	
	
	//calculating the average score for the class:
	for(i=0; i<numStudents; ++i) {
		for(j=0; j<numScores; ++j) {
			dummy2 += studScores[i][j];
			++totalNumScores;
		} 		
	}
	avgClass = dummy2 / totalNumScores;
	
	
	//displaying average of the class:
	printf("\nAverage score of the class is: %g", avgClass);
	
	return 0;
}

