/* Write a function rightrot(x,n) 
that rotates an integer x to the right by n bits */


#include <stdio.h>
#include <math.h>

//Prototypes
int findBits(unsigned x);
unsigned rightrot(unsigned x, int n);

void main(char args[]){

	//x = 1101 (13)
	//n = 2 
	//11[01] in x
	//Want -> 0111 (7)
	printf("%u\n", rightrot(13,2));
		
	//x = 1001 (9)
	//n = 4
	//[1001] in x
	//Want -> 1001 (9)
	printf("%u\n", rightrot(9,4));
		
	//x = 1011 1011 (187)
	//n = 6
	//10[11 1011] in x
	//Want -> 1110 1110 (238)
	printf("%u\n", rightrot(187,6));
		
}


int findBits(unsigned x){

	int bits = 1;
	
	while((pow(2, bits-1) <= x) && (pow(2, bits) - 1 <= x))
		++bits;
			
	return bits;
}

unsigned rightrot(unsigned x, int n){
	
	int p = findBits(x);
	printf(("\n%d\n"), p);
	
	//Mask with rightmost bits of x copies
	//0000[n]
	unsigned mask = (~(~0 << n)) & (x);

	//Push bits into position
	//[n]0000
	mask = mask << (p - n);

	//Shift x right - creating n 0 bits on end
	unsigned result = x >> n;
	
	//OR with mask
	result = result | mask;
	
	return result;
}


