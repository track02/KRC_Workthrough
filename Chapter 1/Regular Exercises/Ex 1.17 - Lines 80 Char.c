#include <stdio.h>

//Ex 1.17 - Write a program to print out lines 80 (N) characters or more
//Counting /0 and /n

#include <stdio.h>
#define MAXLINE 1000 //Max input line size
#define MINCHAR 10 //Min no. chars to print line

//Declarations
int readline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len; //Current line length
	char line[MAXLINE]; //Current input line
	char longest[MAXLINE]; //Longest line saved 

	//readline fills up the line array and returns the length to len
	//Stop if returned line has a length of 0
	while ((len = readline(line, MAXLINE)) > 0)
		if ((len + 1) >= MINCHAR)
			printf("Line Has %d Characters - Printing\n%s",(len+1), line);	

	
}

//getline - reads in a line from user input
int readline(char s[], int lim){
	int c,i;
	
	//Read up until newline
	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	
	//Insert new line
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	//Insert end of string
	s[i] = '\0';
	
	
	//Return length of line - used to determine whether to stop reading
	return i;
}
