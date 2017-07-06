#include <stdio.h>

//Ex 1.8 - Write a program to count blanks, tabs and new lines
main()
{
	int c;	
	int spaces = 0;
	int tabs = 0;
	int newlines = 0;

	//Repeatedly poll until EOF is passed
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			spaces++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n')
			newlines++;
	}
	
	//Print out c - will be equal to EOF
	printf("Spaces: %d Tabs: %d Newlines: %d", spaces, tabs, newlines);	
}