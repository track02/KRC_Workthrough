/*Write a function invert that returns x 
  with the n bits at position p inverted*/

  #include <stdio.h>

unsigned invert(unsigned x, int p, int n);

void main(char args[]){

	//x = 10101 (21)
	//P = 3 N = 3
	//1[010]1 
	//Want -> 1[101]1 (27)
	printf("\n%u\n", invert(21,3,3));


	//x = 1111 (15)
	//P = 2 N = 3
	//1[111]
	//Want -> 1000 (8)
	printf("\n%u\n", invert(15,2,3));
	
	
	//x = 0001 (1)
	//P = 0 N = 1
	//000[1]	
	//Want -> 0000 (0)
	printf("\n%u\n", invert(1,0,1));
	
	
	//x = 1001 (9)
	//P = 3 N = 4
	//[1001]	
	//Want -> 0110 (6)
	printf("\n%u\n", invert(9,3,4));
	
}

unsigned invert(unsigned x, int p, int n){

	//Pull bits to invert
	//AndMask -> 0000[n]
	unsigned AndMask = (~(~0 << n)) & (x >> ((p -n) + 1));
	//OrMask -> 1111[n]
	unsigned OrMask =  (~0 << n) | (x >> ((p - n) + 1));
		
	printf("And Mask %u\n", AndMask);
	printf("Or Mask %u\n", OrMask);	
		
	//Shift across mask to align with x and invert
	//AndMask -> 11[~n]11		
	AndMask = ~(AndMask << (p - n) + 1);
	//OrMask -> 00[~n]00
	OrMask = ~OrMask << ((p - n) + 1);
	
	//Use OR to switch bits on and AND to switch unwanted off
	unsigned result = x | OrMask;
	result = result & AndMask;
	
	return result;	
}