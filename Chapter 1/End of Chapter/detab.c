#include <stdio.h>
#define TAB_STOP 4
#define MAX_SIZE 20

//Function prototypes
void readline(char line[], int maxline);
void spacetabs(char line[], char output[], int tabCol, int maxline);


//Main
main()
{
	
	char line[MAX_SIZE];
	char output[MAX_SIZE];


	readline(line, MAX_SIZE);
	
	spacetabs(line, output, TAB_STOP, MAX_SIZE);

	printf("%s", output);
	
}

void readline(char line[], int maxline)
{

	int c, i;
	
	for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
	{		
		line[i] = c;
	}
			
	line[i] = '\0';	
		
}

void spacetabs(char line[], char output[], int tabstop, int maxline)
{

	//i input, c output indexes, colcount tracks tab stops
	int i, c, colcount;
	
	c = 0;	
	colcount = 0;
	
	for(i = 0; i < maxline - 2; ++i)
	{
	
		//If a tab is found
		if(line[i] == '\t')
		{
				
			//Move to next tab stop
			while(colcount != (tabstop - 1))
			{
											
				//Insert space
				output[c] = ' ';
				
				
				//Increment output index / colcount
				++c;
				++colcount;			
			
			}				
						
		
		}		
		if(line[i] != '\t')
		{
			output[c] = line[i];
	
			++c;
			++colcount;	
	
		}	
		
		if(colcount == tabstop){
			colcount = 0;
		}
		
	
	}	
}
