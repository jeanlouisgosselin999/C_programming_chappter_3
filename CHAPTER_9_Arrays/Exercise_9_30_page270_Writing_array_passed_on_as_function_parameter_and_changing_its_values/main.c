#include <stdio.h>
#include <stdlib.h>


//****************************  exercise (A):  *********************************************

//prototype:
void sample (float, float, int[]); //REMEMBER: no subscript in an array as parameter to a function

int main(int argc, char *argv[]) {

	//initializing our values and array:
	float a = 3.0;
	float b = 78.89;
	
	int jstar[20] = {1, 3, 5, 667, 34, 54, 6, 78, 89, 98, 87, 76, 91, 54, 43, 32, 65, 54, 43, 20};
	
	//calling our function:
	sample(a, b, jstar);
	
	return 0;
}

//function:

void sample(float a, float b, int jstar[]) { //REMEMBER: no subscript in an array as parameter to a function
	
	float x, y;
	int testArray[20];
	int i;
	
	//taking values from both parameters and adding them 1000 and 22000 respectively, the new values of which are then assigned to X an Y:
	x = a+1000.0;
	y = b+22000.0;
	
	//transferring from one array to the other (taking the array from parameter):
	for(i=0; i<20; ++i)
		testArray[i] = jstar[i];
		
	//printing new integer values:
	printf("Your new integers: a = %g and b = %g \n\n", x, y);
	
	//printing new integer array:
	printf("Your array:\n");
	for (i=0; i<20; ++i)
		printf("%d \t", testArray[i] + 1000);
		
	return;
			
}


