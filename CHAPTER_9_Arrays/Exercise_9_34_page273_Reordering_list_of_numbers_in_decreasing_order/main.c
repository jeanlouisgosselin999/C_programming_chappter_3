/*
This program will demonstrate how to reorder a list of N numbers in decreasing order using the BUBBLE SORT technique.

The BUBBLE SORT is characterizd by specific coding:
1) a 2-FOR loop structure
2) an IF statement contained within the second FOR loop
3) a swap

NOTE: the 2-FOR loop structure takes us back to the "stars" exercise", whereby we have:
1) one incrementing variable "a" (outer loop) which represents the number of the line/row in the array
2) another incrementing variable "b" (inner loop) which represents the number of the column (or "box" within a line) in the array

The structure anticipates on a 2-dimensional type of array, which ressembles this:

				:0:		:1:		:2:		:3:		[b]
		
		:0:		1		2		3		4
		
		:1:		5		6		7		8
		
		:2:		9		10		11		12
		
		[a]

See "EXPLANATION" below to understand the BUBBLE SORT technique.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

//prototype:
void reorder(int n, int x[]);

int main(int argc, char *argv[]) {
	
	int i; //for count
	int n; //number of values 
	int x[SIZE]; //an array of pre-determined size of 100
	
//***************************  STEP 1  ***************************************

	printf("How many numbers will be entered?\n");
	scanf("%d", &n);
	printf("\n");


//***************************  STEP 2  ***************************************
	
	//inputting numbers typed in by user into the array, then outputting them, all within the same loop:
	for(i=0; i<n; ++i) {
		printf("i = %d   x = ", i+1); //***
		scanf("%d", &x[i]); // == "saving value entered by user to variable "x" at array position "i"
	}
	//***
	/*
	NOTE: we write "i+1" because, as we know, since an array goes from 0 to n-1, 
	we need to add 1 to our printf statement in order for the displayed list to make sense to the user!
	*/


//***************************  STEP 3  ***************************************
	
	//calling our function to reorder all array elements:
	reorder(n, x);
	
	
//***************************  STEP 4  ***************************************
	
	//displaying the reordered list of numbers:
	printf("\n\nThis is the reordered list of numbers in decreasing order:\n");
	for(i=0; i<n; ++i)
		printf("i = %d   x = %d\n", i+1, x[i]);
		
	getchar();

	return 0;
}

//our function:

void reorder(int n, int x[]) {
	
	int a; // the variable "i" represents the number of the line/row in the array
	int b; // the variable "j" represents the number of the column (or "box" within a line) in the array
	int temp; //variable for the nested IF statement (== "empty glass")
	
	//BUBBLE SORT TECHNIQUE:
	for(a=0; a<n-1; ++a) //REMINDER: arrays are sorted from 0 to n-1; hence: "a<n-1"
		//finding the smallest of all remaining elements:
		for(b=0; b<n-1; ++b)
			if(x[b] < x[b+1]) { //NOTE: if we want to reorder in DECREASING order, simply change > for <
				//swapping:
				temp = x[b+1];
				x[b+1] = x[b];
				x[b] = temp;
			}
			
	return;
}

/*
explanation of BUBBLE SORT:

Bubble sort is one of the simplest sorting algorithms that we can use to sort an array or a structure.
It is considered as a rather inefficient sorting algorithm: past 100 elements to sort, the program becomes slow.
This algorithm is implemented with 2 FOR loops.

The bubble sort works thus:

Consider the following array: 	5;	1;	12; -5; 16

We want to sort this array in ASCENDING/INCREASING order.

This algorithm compares adjacent elements in pairs, before moving on to the next pair
(so: it compares first and second elements, and if a swap is needed, it is done;
then we compare the 2nd and 3rd elements etc, until we reach the very end of the array).
Once this 1st pass-though is done, and if the array still isn't completely sorted, 
we then proceed to a 2nd pass-through, with the same comparative technique as explained above.

It looks like this:

					BEGINNING THE FIRST PASS-THROUGH (a==0)

					5									1			12			-5			16
						is 5<1?
						(in other words:
						is x[b] < x[b+1]?)
						NO!
						we swap 5 and 1
						(++b==1)
						
						
					1			5			12			-5			16
									is 5<12?
									yes
									we leave it 
									(++b==2)
									
									
					1			5			12			-5			16
												is 12<-5?
												NO!
												we swap 12 and -5
												(++b==3)
												
					1			5			-5			12			16
															is 12<16?
															yes
															we leave it
															(++b==4)
																		|
																		|
																		|---> ++b==5 !< 5(==a) SO: STOP
															
			**********   THIS IS THE END OF THE FIRST PASS-THROUGH OF THE ARRAY   ****************
					
					NOW WE START THE SECOND PASS-THROUGH (a++ = 1)
					
					1			5			-5			12			16
						1<5?
						yes
						we leave it
						(++b)
						
					1			5			-5			12			16
									5<-5?
									NO!
									we swap 5 and -5
									(++b)
									
					1			-5			5			12			16
												5<12?
												yes
												we leave it
												(++b)
												
					1			-5			5			12			16
															12<16?
															yes
															we leave it
															(++b)
															
															
					THIS IS THE END OF THE SECOND PASS-THROUGH OF THE ARRAY
					
					NOW WE START THE THIRD PASS-THROUGH (a++)
					
					1			-5			5			12			16
						1<-5?
						NO!
						we swap 1 and -5
						(++b)
						
					-5			1			5			12			16
									1<5?
									yes
									(++b)
									
					-5			1			5			12			16
												5<12?
												yes
												(++b)
					
					-5			1			5			12			16
															12<16?
															yes
															(++b)
					
					
									
															
					THIS IS THE END OF THE THIRD PASS-THROUGH OF THE ARRAY
					
					NOW WE START THE FOURTH (AND FINAL) PASS-THROUGH (a++)
					
					-5			1			5			12			16
						-5<1?
						yes
						
					ETC...ETC...
					
					***END***
						
*/
