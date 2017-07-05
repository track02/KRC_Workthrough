#include <stdio.h>

//Ex 1.7 - Write a program to print the value of EOF
main()
{
	int c;	

	//Repeatedly poll until EOF is passed
	while(getchar() != EOF)
		;
	
	//Print out c - will be equal to EOF
	printf("%d", c);	
}