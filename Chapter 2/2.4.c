#include <stdio.h>

//Prototypes
void squeeze(char s1[], char s2[]);

main(){

	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "ahjk";

	squeeze(s1, s2);
	printf(s1);

}

void squeeze(char s1[], char s2[]){

	int i =0, j = 0, c = 0;


	//Loop through  S2
	while (s2[i] != '\0'){

		j = 0;
		
		//Loop through S1 and delete any instances of current character in S2
		while(s1[j] != '\0'){
		
			if(s1[j] == s2[i])
				s1[j] = '_';	
				
			++j;	
		}
		
		++i;
	}

}