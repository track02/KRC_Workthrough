/*Write a program to remove all *comments* from a C program */
#include <stdio.h>
#define TEXT_LIMIT 150

//Function Prototypes
int readText(char inText[], int textLimit);
void stripComments(char inText[], char outText[], int size);

int main(){
	char inText[TEXT_LIMIT];
	char outText[TEXT_LIMIT];
	int inSize = readText(inText, TEXT_LIMIT);
	stripComments(inText, outText, inSize);
	return 0;	
}

int readText(char inText[], int textLimit){

	//Array flags
	int c, i, a;	
	
	for(a = i = 0; i < textLimit - 1 && (c = getchar()) != EOF; ++i){	
		
			inText[a] = c;
			++a;
	}	
		
	inText[a] = '\0';
	return a;
}		


void stripComments(char inText[], char outText[], int size){

	int c, i, a;
	
	int inComment = 0;
	int inString = 0;
	int inChar = 0;

	for(c= a = i = 0; i < size - 1; ++i){
	
		if(inText[a] == '\"'){
			if(inString == 0)
				inString = 1;
			else
				inString = 0;						
		}
	
		if(inText[a] == '\''){
			if(inChar == 0)
				inChar = 1;
			else
				inChar = 0;		
		}
		
	
		if(inText[a] == '/' && inString == 0){
		
			if(inText[a+1] == '*'){
				
				inComment = 1;
			}
		}
		
		
		if(inText[a] == '*' && inString == 0){
		
			if(inText[a+1] == '/'){
			
				++a;
				++a;
				inComment = 0;
			}
		
		}
		
	
		if(inComment == 0){
			outText[c] = inText[a];	
			++a;
			++c;
		}
		
		if(inComment == 1)
			++a;
	
	}
	
	
	outText[c] = '\0';

	printf("%s", outText);


}