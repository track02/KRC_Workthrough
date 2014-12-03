#include <stdio.h>

#define MAXSIZE 100

void expand(char s1[], char s2[]);



void main(char args[]){

	char s1[] = "1-2-3-9";
	char s2[MAXSIZE];
	
	expand(s1, s2);
	
}



void expand(char s1[], char s2[]){

	//ASCII value for start 
	int start = s1[0];
	int end = 0;
	int i;
	

	//Go to end and grab ASCII value
	for(i = 0; s1[i] != '\0'; i++)
		end = s1[i];
		
	//Move from start to end, reuse i and increment as index to s2 
	for(i = 0, start; start <= end; i++, start++){

		s2[i] = start;
	
	}	
	
	//Cap string
	s2[i] = '\0';
	
	//Print result
	printf("%s", s2);	

}


