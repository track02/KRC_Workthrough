#include <stdio.h>


//Copy input to output
main()
{
	int c;
				
	//Bracket getChar assignment, != takes precedence giving 1/0 integers instead of valid character
	while((c = getchar()) != EOF){
		putchar(c);
	}
}