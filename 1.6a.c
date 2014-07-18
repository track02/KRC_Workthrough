#include <stdio.h>

//Assume max size of word is 10
#define MAX_SIZE 10
#define OUT 0
#define IN 0

//Count digits, whitespace, other
main(){

	int c, nw, state, i, maxnw;
	int wordSize[MAX_SIZE];
	
	nw = maxnw = 0;
	state = OUT;
	
	for(c = 0; c < MAX_SIZE; c++)
		wordSize[c] = 0;
	
		
	//Read through input until end
	while((c = getchar()) != EOF){
	
		
		//Start of a word has been found - count length
		if(c != ' ' && c != '\n' && c != '\t'){
			state = IN;		
			++nw;
		}
		
		//Not inside word - store length of last word
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;		

			if( nl > 0){
				++wordSize[nw];
				
				//Track index with most hits
				if(wordSize[nw] > maxnw)
					maxnw = wordSize[nw];			
			}			
					
			nl = 0;
		}		
	}
	
	//Print histogram
	printf("Word Sizes\n");	
	
	//Decrease maxnw over loop
	while(maxnw != 0){
		
		//For each element in the array
		for(c = 0; c < MAX_SIZE; c++){
		
			//Compare its value to maxnw
			//Print X if it's within the range
			if(wordSize[c] >= maxnw)
				printf("X ");
			//Else print a blank entry
			else
				printf("  ");			
		}
		
		printf("\n");		
		--maxnl;	
	}
	
	for(c = 0; c  < MAX_SIZE; c++)
		printf("%d ", c);
	
	printf("\nVertical\n\n"); 
	
}