#include <stdio.h>

#define MAXSIZE 20

//Prototypes
void squeeze(char s1[], char s2[]);

main(){

	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "ahjk";

	squeeze(s1, s2);
}

void squeeze(char s1[], char s2[]){

	int i =0, j = 0, k = 0, c = 0;

	char s3[MAXSIZE];

	//Loop through  S2
	while (s1[i] != '\0'){

		j = 0;
		c = 0;
		
		//Loop through S1 and delete any instances of current character in S2
		while(s2[j] != '\0'){
		
			if(s1[i] == s2[j++])
				c = 1;							
		}
				
		if(c != 1)
			s3[k++] = s1[i++];
		else
			i++;
	}
	
	printf(s3);

}