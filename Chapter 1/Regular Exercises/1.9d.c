#include <stdio.h>
#define MAXLINE 500


//Prototypes
int readLine(char line[], int maxline);
void reverseLine(char line[], char reversed[], int size);


main()
{

	int len; //Current line length - controls loop	
	char line[MAXLINE]; //Holds line being read in
	char reverse[MAXLINE]; //Holds reversed line


		//Readline
		len = readLine(line, MAXLINE);
		//Reverse
		reverseLine(reverse, line, len);
		//Print
		printf("%s", reverse);
		
	
	
}


int readLine(char line[], int limit){

	int c, i;
	
	//Read in next char, set c, check for EOF or \n - stop loop if found
	for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c !='\n'; ++i)
	{
		line[i] = c;	
	}
	
	//If at the end of line
	if(c == '\n'){
	
		//Copy \n and shift index up to cap array 
		line[i] = c;
	
	}	
	
	++i;
	line[i] = '\0';
	//Return i for size of array
	return i;

}

void reverseLine(char output[], char input[], int size){
	
	int i, c;
	
	c = 0;
	
	//Can use previously returned line length instead of finding array size again, skip null and \n
	for(i = size - 2; i >= 0; --i){
		
		//Copy
		output[c] = input[i];
		//Increment c
		++c;
	
	}
	
	//Cap output
	//++c;
	output[c] = '\n';
	++c;
	output[c] = '\0';

}