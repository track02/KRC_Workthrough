#include <stdio.h>
#include <string.h>
#define MAXSIZE 15

void itob(int n, char s[], int b);
void reverse(char s[]);


void main(char args[]){

	char s1[MAXSIZE];
	itob(30, s1, 16);
	printf("%s\n\n", s1);
		
}


//Modify itoa to convert to different base
void itob(int n, char s[], int b){

    int i, v, sign;
	
    sign = n;
    		
    i = 0;
	
    do {
	
		//Store moduluo of base b
	    v = abs(n % b);
		
		//Switch statement - convert values past 9 into characters (valid for up to base 16)
		switch(v){
		
			case 10:
				s[i++] = 'A';
				break;
			case 11:
				s[i++] = 'B';
				break;
			case 12:
				s[i++] = 'C';
				break;
			case 13:
				s[i++] = 'D';
				break;
			case 14:
				s[i++] = 'E';
				break;
			case 15:
				s[i++]= 'F';
				break;
			default:
				s[i++] = v + '0';		
				break;
		}
		
			
	//Keep dividing by base 
    } while (( n /= b )) ;		
	
	//Now check for sign and add character
    if (sign < 0)
        s[i++] = '-';
    
	//Cap string
    s[i] = '\0';
	
	//Currently storing number as characters right to left 100 -> 001 so reverse the string
    reverse(s);

}

//Reverse character
void reverse(char s[]){

    int c, i, j;
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
	
}


