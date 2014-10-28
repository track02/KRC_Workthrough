/*Write a function setbits that returns x 
  with the n bits at position p set to the rightmost bits of y 
  leaving the other bits unchanged*/


#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

void main(char args[]){

	printf("%d", setbits(12, 0, 3, 15));
	
}

//Returns n bits from position p
unsigned getbits(unsigned x, int p, int n){

	return(x >> (p + 1 - n)) & ~(~0 << n);	
	
	//E.g. x = 13 (1101) P = 2 N = 1 
	//Want this bit -> 1[1]01
	//x >> (p + 1 - n) shifts wanted bits to right end of X	
		// x >> 2 = 0011
	
	//~0 = 1111....
	//~0 << n clears space to create a mask
	//~0 << 1 = 1110
	//~(1110) = 0001
	
	//Use & to apply the mask 0011 (x) & 0001 (mask) = 0001 (returned bit)	
	
}

unsigned setbits(unsigned x, int p, int n, unsigned y){

    unsigned newBits = getbits(y,n-1,n);
	printf("%d\n", newBits);
	
	unsigned result = (x  newBits);
	printf("%d\n", result);
	result = result & getbits(x,n-1,n);
	
	return result;
}