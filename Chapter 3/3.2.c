#include <stdio.h>

#define MAXSIZE 10

void escape(char s[], char t[]);
void reverse(char s[], char t[]);


void main(char args[]){

	char s[] = "hel\nlo";
	char t[MAXSIZE];
	
	escape(s,t);
	
	
	char s2[] = "he\\tll\\no";
	char t2[MAXSIZE];
	
	reverse(s2, t2);
	
}


//Converts newline and tab characters into visible escape sequences
void escape(char s[], char t[]){

	int i = 0;
	int c = 0;
	
	//While not at end of string
	while(s[i] != '\0'){	
	
		//Check current character
		switch (s[i]){
		
		//New line - insert escape and n increment indexes
		case '\n':
			t[c++] = '\\';
			t[c++] = 'n';
			++i;
			break;
			
		//Tab - insert escape and t increment indexes
		case '\t':
			t[c++] = '\\';
			t[c++] = 't';
			++i;
			break;
		
		//Otherwise copy across
		default:
			t[c++] = s[i++];
			break;
					
		}
		
	}

	//Add string termination and print
	t[c] = '\0';	
	printf("%s\n\n",t);
	
}

//Converts visible escape sequences into tab and newline characters
void reverse(char s[], char t[]){

	int i = 0;
	int c = 0;
	
	//While not at end of string
	while(s[i] != '\0'){	
	
		//Check current character
		switch (s[i]){
		
		//If its an escape
		case '\\':
							
			//Check next character along and insert \n  \t as needed and increment index
			if(s[i + 1] == 'n')
				t[c++] = '\n';
			else if(s[i + 1] == 't')
				t[c++] = '\t';
	
			//Move past the character following escape 
			i+=2;
		
		//Default copy
		default:
			t[c++] = s[i++];
			break;
					
		}
		
	}

	//Add string termination and print
	t[c] = '\0';	
	printf("%s",t);
	
}



