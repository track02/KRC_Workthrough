#include <stdio.h>

//ASCII Characters 0 to 127 
//Display characters starting from 33, lowercase letters 97-127
#define MAX_SIZE 127
#define LOWER_CASE_START 97
#define LOWER_CASE_END 122

//Ex 1.13 - Write a program to print a histogram of the frequencies of different characters in its input
main(){
	
	int c, maxc; //Holds character and count of most frequent character
	int characters[MAX_SIZE]; //Array of 127 Integers, [97] represents no. of times char(97) [a] appears
	
	//Keep count of most frequent character
	maxc = 0;
	
	
	//Initialise values of wordSize to 0
	for(c = 0; c < MAX_SIZE; c++)
		characters[c] = 0;	
		
	//Read through input until end
	while((c = getchar()) != EOF){	
		
		characters[c]++;					
		
		if (maxc < characters[c])
			maxc = characters[c];
	}
	
	//Print histogram - We'll show lower case characters
	printf("Character Frequency - Histogram\n\n");	
	
	//Decrease maxc over loop
	while(maxc != 0){
								
		//For each element in the array
		for(c = LOWER_CASE_START; c < LOWER_CASE_END; c++){
		
			//Compare its value to maxnw
			//Print X if it's within the range
			if(characters[c] >= maxc)
				printf("X ");
			//Else print a blank entry
			else
				printf("  ");			
		}
		
		//Start a new line and decrease counter
		printf("\n");		
		--maxc;	
	}
	
	//Print out axis labelling
	for(c = LOWER_CASE_START; c  < LOWER_CASE_END; c++)
		printf("%c ", c);
	
}