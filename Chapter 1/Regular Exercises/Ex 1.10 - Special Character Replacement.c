#include <stdio.h>

//Ex 1.9 - Write a program that copies its input to output
//         and replaces each string of one or more blanks with a single blank
main()
{
	int c;	

	//Repeatedly poll until EOF is passed
	while((c = getchar()) != EOF)
	{		
		if (c == '\t') //Keep track of consecutive blanks		
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			printf("%c", c);
	}
}