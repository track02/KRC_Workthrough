#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 //Outside a word

//Count lines, words & characters in input	
main(){

	int c, nl, nw, nc, state;

	state = OUT;
		
	//Read through input until end
	while((c = getchar()) != EOF){
	
		
		//Start of a word has been found
		if(c != ' ' || c != '\n' || c != '\t'){
			state = IN;		
		}
		
		//Not a word or the end of a word
		if(c == ' ' || c == '\n' || c == '\t'){
			printf("\n");
			state = OUT;		
		}
		
		if(state == IN){
			putchar(c);
		}
	}
	
	printf("%d %d %d\n", nl, nw, nc);
	
	
}