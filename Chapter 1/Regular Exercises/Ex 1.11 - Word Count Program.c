//Ex 1.11 - How should the word count program be tested?
//What kinds of input are most likely to uncover bugs if there are any.

/*
  - Test with a variety of inputs, large / small text streams
  - Unhandled special characters and edge cases might cause issues 
*/

#include <stdio.h>
#define IN 1 //Inside a word
#define OUT 0  //Outside a word
 
// count, lines, words and characters in input
main()
{
  //input, newlines, words, characters, in/out state
  int c, nl, nw, nc, state;
  
  state = OUT;
  nl = nw = nc = 0;
	
	while ((c = getchar()) != EOF) {
    ++nc;
    
    if(c == '\n')
      ++nl;
      
    if(c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
	printf("%d %d %d\n", nl, nw, nc);
}