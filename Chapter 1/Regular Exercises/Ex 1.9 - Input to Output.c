#include <stdio.h>

//Ex 1.9 - Write a program that copies its input to output
//         and replaces each string of one or more blanks with a single blank
main()
{
	int c;	
	int spaces = 0;

	//Repeatedly poll until EOF is passed
	while((c = getchar()) != EOF)
	{		
		if (c == ' ') //Keep track of consecutive blanks		
			++spaces;
		else
			spaces = 0; //Clear counter when a non-blank character is found
		
		if (spaces <= 1) //If only a single blank or less, print out c
			printf("%c", c);
	}
}