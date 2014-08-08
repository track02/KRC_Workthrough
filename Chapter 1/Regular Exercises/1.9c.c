
#include <stdio.h>
/* Max input line size */
#define MAXLINE 1000  

//Function prototypes
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
main(){

	int len;	//Current line length
	char line[MAXLINE];	//Current input
	char longest[MAXLINE]; //Longest line saved here

	/*While there are lines to read, compare to max and store largest */
	while((len = getline(line, MAXLINE)) > 0)
			copy(longest, line);			
			printf("%s\n", longest);	
	return 0;
}

/* getline: read a line into s and return length */
int getline(char s[], int lim){
	
	int c, i, a, flag;
	flag, a = 0;
	
	//condition - still inside array (i) and current char (c) is not EOF or new line.
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{		

			//If a tab is found or a space (and previous char was a space)
			if(c == '\t' || (c == ' ' && flag == 1)){
				
				//Loop to find next valid character - incrementing i as needed
				while((c = getchar()) == ' '  || c == '\t'){
					++i;
				}
				
				s[a] = c;
				flag = 0;
				
				
			}
			if( c == ' ' && flag == 0){
				s[a] = c;
				flag = 1;			
			}
			else{
				s[a] = c;
				flag = 0;
			}
			
			++a;
	}
	
		
	if(c == '\n' && i != 0){
		
		s[i] = c;
		++i;
		
	}

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
