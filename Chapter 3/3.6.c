#include <stdio.h>
#include <string.h>
#define MAXSIZE 15

void itoa(int n, char s[], int p);
void reverse(char s[]);




void main(char args[]){

	char s1[MAXSIZE];
	itoa(-10, s1, 3);
	printf("%s\n", s1);
	

	
}



void itoa(int n, char s[], int p){

    int i, sign, len;
	
    sign = n;
    		
    i = 0, len = 0;
	
	//Create string - increase len with each entry
    do {
        s[i++] = abs(n % 10) + '0';
		++len;
    } while (( n /= 10 )) ;	
	
	//Now check for sign and add character
    if (sign < 0){
        s[i++] = '-';
		++len;
	}
	
	//Difference between string length and pad length
	int diff = abs(len - p);
	
	//Pad out with blank spaces
	for(len = 0; len<diff; len++)
		s[i++] = ' ';
		
    
	//Cap string
    s[i] = '\0';
	
    reverse(s);

}


void reverse(char s[]){

    int c, i, j;
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
	
}


