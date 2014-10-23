//Write a program to return the first location in the string s1 where any character in s2 occurs
// S1: abcdefg S2:bcd -> Return 1

#include <stdio.h>
#define MAXSIZE 20

//Prototypes
int any(char s1[], char s2[]);

main(){

	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "&"; // Return -1
	char s3[] = "a"; // Return 0

	printf("Index of %s: %d", s2, any(s1, s2));
	printf("\nIndex of %s: %d", s3, any(s1, s3));
}

int any(char s1[], char s2[]){

	int i =0, j = 0;

	char s3[MAXSIZE];

	//Loop through  S2
	while (s1[i] != '\0'){

		j = 0;
		
		//Loop through S1 and delete any instances of current character in S2
		while(s2[j] != '\0'){
		
			if(s1[i] == s2[j++])
				return i;					
		}
				
		i++;
	}	
	return -1;
}