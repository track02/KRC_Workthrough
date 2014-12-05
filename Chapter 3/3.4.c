#include <stdio.h>
#include <string.h>
#include <limits.h> //Use to get minimum integer size INT_MIN
#define MAXSIZE 15

void itoa(int n, char s[]);
void reverse(char s[]);

//Twos complement 1000 0000 = -128, range for 8 bits is -128 to 127
//Cannot represent -128 with current method due to conversion to positive (n = -n)


void main(char args[]){

	char s1[MAXSIZE];
	itoa(INT_MIN, s1);
	printf("%s\n\n", s1);
	
	char s2[MAXSIZE];
	itoa(INT_MAX, s1);
	printf("%s\n", s1);
	
	
}



void itoa(int n, char s[]){

    int i, sign;
	
	//Don't assign sign as n = -n, just store and check if < 0 later
    sign = n;
    		
    i = 0;
	
    do {
        s[i++] = abs(n % 10) + '0'; //n can be negative, take absolute value
    } while (( n /= 10 )) ;		//Remove check for >0, otherwise statement executes once, n can be negative
	
	//Now check for sign and add character
    if (sign < 0)
        s[i++] = '-';
    
	//Cap string
    s[i] = '\0';
	
	//Currently storing number as characters right to left 100 -> 001 so reverse the string
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


