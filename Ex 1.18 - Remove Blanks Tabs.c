#include <stdio.h>

//Ex 1.17 - Write a program to remove trailing blanks and tabs from lines

#define MAXLINE 1000 //Max input line size

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
		//If we want to ignore empty lines ("\n\0") then don't print if length <= 2
		if(len > 2)
			printf("Printing\n%s", line);	

	
}

//getline - reads in a line from user input
int readline(char s[], int lim){
	int c,i;
	int previous_space = 0;
	
	//Read up until newline
	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++){
		
		if (c == ' ' && previous_space == 0){
			s[i] = c;
			previous_space = 1;
		}
		
		if (c == '\t')
			s[i] = ' ';		
		
		
		if (c != ' ' && c != '\t'){
			s[i] = c;
			previous_space = 0;
		}		

	}
	
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
