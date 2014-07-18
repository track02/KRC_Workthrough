
#include <stdio.h>
/* Max input line size */
#define MAXLINE 1000  

//Function prototypes
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
main(){

	int len;	//Current line length
	int max;	//Max line length seen so far
	char line[MAXLINE];	//Current input
	char longest[MAXLINE]; //Longest line saved here

	max = 0;

	/*While there are lines to read, compare to max and store largest */
	while((len = getline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}

	/* If a line has been input, print it */
	if(max > 0)
		printf("%s", longest);
	
	return 0;
}

/* getline: read a line into s and return length */
int getline(char s[], int lim){
	
	int c, i;
	
	//condition - still inside array (i) and current char (c) is not EOF or new line.
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		if(c != '\t'){
			s[i] = c;
		{
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}

	//Cap string with null character and return
	s[i] = '\0';
	return i;

}

/* copy: copy from[] into to[]; assuming to[] is large enough */
void copy(char to[], char from[]){

	int i;	
	i = 0;
	
	//Copy across and check for null, stop copying if found
	while ((to[i] = from[i]) != '\0')
		++i;
}
