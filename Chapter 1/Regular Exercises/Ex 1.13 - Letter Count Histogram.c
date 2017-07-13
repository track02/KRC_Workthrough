#include <stdio.h>

//Assume max size of word is 10 Characters
#define MAX_SIZE 11
#define OUT 0
#define IN 0

//Ex 1.13 - Write a program to print a histogram of the lengths of words in its input
//A horizontal histogram is easy, whilst a vertical orientation is more challenging
main(){
	
	int c, nw, state, i, maxnw;
	int wordSize[MAX_SIZE]; //Array of 11 Integers, [5] represents no. words with 5 characters
	
	nw = maxnw = 0;
	state = OUT;
	
	//Initialise values of wordSize to 0
	for(c = 0; c < MAX_SIZE; c++)
		wordSize[c] = 0;	
		
	//Read through input until end
	while((c = getchar()) != EOF){	
		
		//Start of a word has been found - count the length of the word
		if(c != ' ' && c != '\n' && c != '\t'){
			state = IN;		
			++nw;
		}		
		//Not inside word - Increment wordSize counter at correct element
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;		

			if( nw > 0){
				++wordSize[nw];
				
				//Track index with most hits
				if(wordSize[nw] > maxnw)
					maxnw = wordSize[nw];			
			}			
					
			nw = 0; //Reset number of words for the next word
		}		
	}
	
	//Print histogram
	printf("Word Size - Histogram\n\n");	
	
	//Decrease maxnw over loop
	while(maxnw != 0){
		
		//For each element in the array (Ignoring 0th element)
		for(c = 1; c < MAX_SIZE; c++){
		
			//Compare its value to maxnw
			//Print X if it's within the range
			if(wordSize[c] >= maxnw)
				printf("X ");
			//Else print a blank entry
			else
				printf("  ");			
		}
		
		//Start a new line and decrease counter
		printf("\n");		
		--maxnw;	
	}
	
	//Print out axis number labelling (1-10)
	for(c = 1; c  < MAX_SIZE; c++)
		printf("%d ", c);
	
}