/*Write a function setbits that returns x 
  with the n bits at position p set to the rightmost bits of y 
  leaving the other bits unchanged*/


#include <stdio.h>
#include <math.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

void main(char args[]){

	//x = 1001101 (77)  y = 1000111  (71)
	//P = 5 N = 4
	//1[0011]01 in x
	//100[0111] in y
	//Want -> 1011101 (93)
	printf("%u\n", setbits(77, 5, 4, 71)); 
	
	//x = 10110 (22) y = 11111 (32)
	//P = 3 N = 1 
	//1[0]110  in x
	//1111[1] in y
	//Want -> 11110 (30)	
	printf("%u\n", setbits(22, 3, 1, 31));
	
	//x = 11 (3) y = 111100 (60)
	//P = 1 N = 2
	//[11] in x
	//1111[00] in y
	//Want -> 00 (0)
	printf("%u\n", setbits(3,1,2,60));
	
	//x = 1110 (14) y = 1101 (13)
	//P = 2 N = 2
	//1[11]0 in x
	//11[01] in y
	//Want -> 1010 (10)
	printf("%u\n", setbits(14,2,2,13));
}

//Returns n bits from position p
unsigned getbits(unsigned x, int p, int n){

	return(x >> (p + 1 - n)) & ~(~0 << n);	
	
	//E.g. x = 13 (1101) P = 2 N = 1 
	//Want this bit -> 1[1]01
	//x >> (p + 1 - n) shifts wanted bits to right end of X	
		// x >> 2 = 0011
	
	//~0 = ...1111
	//~0 << n clears space to create a mask
	//~0 << 1 = 1110
	//~(1110) = 0001
	
	//Use & to apply the mask 0011 (x) & 0001 (mask) = 0001 (returned bit)	
	
}

unsigned setbits(unsigned x, int p, int n, unsigned y){

	//(p-n)+1) + 1
	
	//Create mask with right n bits as 1
	unsigned mask = ~(~0 << n);

	//Take print of y and retrieve rightmost n bits (same as using getbits method)
	mask = mask & y;
	
	//Push mask bits to align with p in x
	mask = mask << ((p - n) + 1);

	//Create masks of trailing 1's before and after the bits being changed
	//111111[0000]00
	//000000[0000]11
	unsigned trailing = ~0 & (~0 << (p + 1));
	unsigned leading = ~trailing >> n;	
	
	//Set any 0's to 1's using OR with initial mask 00000[0101]00000
	//Giving us partial result E.g. 101111[0111]01001
	unsigned result = x | mask;
	
	//Update the mask for AND by combining with trailing leading
	//   000000[0101]00
	//OR 111111[0000]00
	//OR 000000[0000]11
	//   111111[0101]11
	mask = mask | trailing;
	mask = mask | leading;
	
	//Update result with new mask to cancel any 1's set by OR leaving rest of bits 
	//    101111[0111]01
	//AND 111111[0101]11
	//	  101111[0101]01	
	result = result & mask;
	
	
	return result;
			
}