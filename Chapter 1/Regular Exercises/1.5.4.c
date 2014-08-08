#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 //Outside a word

//Count lines, words & characters in input	
main(){

	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	
	//Read through input until end
	while((c = getchar()) != EOF){
	
		//Count each character
		++nc;
		
		//Count new lines
		if(c == '\n')
			++nl;
		
		//If c is not a character (A-Z) we are outside a word
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		
		//If all above fail we must be inside a word, count it
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	
	printf("%d %d %d\n", nl, nw, nc);
	
	
}