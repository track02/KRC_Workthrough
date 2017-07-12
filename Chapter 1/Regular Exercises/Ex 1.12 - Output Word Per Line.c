//Ex 1.11 - Write a program that prints its input one word per line


#include <stdio.h>
#define IN 1 //Inside a word
#define OUT 0  //Outside a word
 
main()
{  
  int state, newline, c;
  newline = c = 0;
  
  //Start outside a word
  state = OUT;
	
	while ((c = getchar()) != EOF) {
	
		//If we encounter a space, newline, tab we must be outside a word
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			newline = 0; //Reset newline, need to enter another when a new word is found
		} //Otherwise we're inside a word
		else if (state == OUT) {
			
			//If a newline hasn't been output for this word then print one
			if(newline == 0)
				printf("\n");
			
			newline = 1;
			state = IN;
		}
		
		//Output character
		printf("%c", c);
	}
	
	return 0;
}