
#include <stdio.h>
#include <stdlib.h>

#define EOL '\n' 
#define SIZE 100

int main(int argc, char *argv[]) {
	
	char myText[SIZE];
	int i, j;
	
	printf("Please enter your text: \n");
			
	for(i=1; (myText[i] = getchar()) != EOL; ++i)
	;
	
	printf("\nYour text is %d characters long.", i-1);
			
	printf("\n\n\nMy text backwards:\n");	

	for(j=i; j>0; --j) 
		printf("%c", myText[j]);
		
	printf("\n\n");
		
	return 0;
}

