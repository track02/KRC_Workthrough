#include <stdio.h>

//Ex 1.16 - Revise the longest-line program 
//so it will correctl print the length of arbitrarily long input lines and 
//as much text as possible

#include <stdio.h>
#define MAXLINE 1000 //Max input line size

//Declarations
int readline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len; //Current line length
	int max; //Max line length seen so far
	char line[MAXLINE]; //Current input line
	char longest[MAXLINE]; //Longest line saved 
	
	max = 0;
	//readline fills up the line array and returns the length to len
	while ((len = readline(line, MAXLINE)) > 0) 
		if (len > max){ //If we have a new longest line 
 			max = len; //Update max and copy line to longest array
			copy(longest, line);			
		}
	
	if (max > 0) //There was a line found
		printf("Longest Line %d \n%s", max, longest); //Print it out	
}

//getline - reads in a line from user input
int readline(char s[], int lim){
	int c,i;
	
	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

//Copy 'from' into 'to' - assuming theres enough space
void copy(char to[], char from[]){
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}