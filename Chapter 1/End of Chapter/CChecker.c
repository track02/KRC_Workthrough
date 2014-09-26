/*Write a program to check input for basic syntax errors*/
#include <stdio.h>
#define TEXT_LIMIT 150

//Function Prototypes
int readText(char inText[], int textLimit);
void checkInput(char inText[], int size);

int main(){
	char inText[TEXT_LIMIT];
	int inSize = readText(inText, TEXT_LIMIT);
	checkInput(inText, inSize);
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

void checkInput(char inText[], int size){

	int i, a;

	// ( - )
	int bracketCount = 0;
	// [ - ]
	int sqBrackCount = 0;
	// { - }
	int braceCount = 0;
	// " - "
	int dQuoteCount = 0;
	// ' - '
	int cQuoteCount = 0;
	// /* - */
	int inComment = 0;

			
	for(a = i = 0; i < size - 1; ++i){	
	
		if(inText[a] == '\"' && cQuoteCount == 0 && inComment == 0){

			if(dQuoteCount == 0)
				++dQuoteCount;
			else if(dQuoteCount == 1)
				--dQuoteCount;				

		}			
		
		if(inText[a] == '/' && dQuoteCount == 0 && cQuoteCount == 0 && inComment == 0){
			
			if(inText[a+1] == '*'){					
				++a;
				inComment = 1;
			}
		}
	
		if(inText[a] == '*' && dQuoteCount == 0 && cQuoteCount == 0 && inComment == 1){
		
			if(inText[a+1] == '/'){			
				++a;
				inComment = 0;
			}		
		}		
		
		if(dQuoteCount == 0 && inComment == 0){
	
		if(inText[a] == '(')
			++bracketCount;	
		if(inText[a] == ')')
			--bracketCount;	
		if(inText[a] == '{')
			++braceCount;			
		if(inText[a] == '}')
			--braceCount;	
		if(inText[a] == '[')
			++sqBrackCount;			
		if(inText[a] == ']')
			--sqBrackCount;			
		if(inText[a] == '\'')
			++sqBrackCount;			
		if(inText[a] == '\'' && cQuoteCount == 1)
			--sqBrackCount;					
		}
		++a;
	}	
	
		printf("\nValue over 0 means syntax is unbalanced!")
		printf("\nBracket Count: %d", bracketCount); 
		printf("\nSquare Bracket Count: %d", sqBrackCount); 
		printf("\nBrac Count Count: %d", braceCount); 
		printf("\nDouble Quote Count: %d", dQuoteCount); 
		printf("\nSingle Quote Count: %d", cQuoteCount); 
		printf("\nComment Count: %d", inComment);	
	
}