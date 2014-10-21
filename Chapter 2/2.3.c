//Exercises 2-3 - Convert a hex string to decimal, ignoring optional 0x / 0X prefix

#include <stdio.h>
#include <math.h>
#define MAXCHAR 1000  

//Function prototypes
int readChars(char line[], int maxline);
int htoi(char line[], int size);


/* Print longest input line */
main(){

	char input[MAXCHAR];	//Current input
	int length;	//Length of input
	
	
	//readChars(input, MAXCHAR);
	length = readChars(input, MAXCHAR);
	
	printf("\n\n%d", htoi(input, length));
		
	return 0;
}

/* getline: read a line into s and return length */
int readChars(char s[], int lim){
	
	int c, i;
	
	
	for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;
	
	
	++i;
	s[i] = '\0';
	
	return i;
	
}

int htoi(char s[], int lim){

	//initialise each individually -> a, b, c = 1 will only set c to 1
	int i, end, count = 0, result = 0, power;
	
	//Check for optional 0x 0X
	if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
		end = 2;
	}
	else	
		end = 0;	

	//Skip new line and null check
	i = lim - 2;			
		
	//Loop backwards - read number from smallest to largest
	for(i; i >= end; --i)
	{			
	
		//Range for digits 0 - 9 -> 48 - 57
		if(s[i] >= 48 && s[i] <= 56){
			result += (s[i] - 48) * pow(16, count);
			++count;
		}
		if(s[i] >= 65 && s[i] <= 70){
			result += ((s[i] - 55) * pow(16, count));
			++count;	
		}
	}
	
	return result;
}
	



