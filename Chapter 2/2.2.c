//Exercises 2-2 - Rewrite for loop without && or ||

#include <stdio.h>
#define MAXCHAR 1000  

//Function prototypes
void readChars(char line[], int maxline);
void readCharsRewrite(char line[], int maxline);


/* Print longest input line */
main(){

	char input[MAXCHAR];	//Current input
	char input2[MAXCHAR];
	
	//readChars(input, MAXCHAR);
	readCharsRewrite(input, MAXCHAR);
		
	return 0;
}

/* getline: read a line into s and return length */
void readChars(char s[], int lim){
	
	int c, i;
	
	
	for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;
	
	
	++i;
	s[i] = '\0';
	
	printf(s);
	
}

//Write above without && or ||
void readCharsRewrite(char s[], int lim){


	int c, i, a = 0;
	
	while(i != -1){
	
		c = getchar();
		
		if(c == '\n')
			i = -1;	//Break not introduced yet
		if(c == EOF)
			i = -1;
		else{
			s[a] = c;
			++a;	
		}
	}	

	s[a] = '\0';	
	printf(s);

}


