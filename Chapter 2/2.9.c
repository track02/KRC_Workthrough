//Twos Complement
//Use the observation that x &= (x-1) removes the rightmost 1 bit to write a faster version of bitcount

//Why does x &= (x-1) remove rightmost bit?
	
	// If x is even then x - 1 is odd
		// 	rightmost 0's in x become 1's in x-1 and rightmost 1 becomes a 0
			// 1000 (8) 0111 (7) -> 0000
			//Removes rightmost 1 in x and rightmost 1s in x - 1

	// If x is odd then x - 1 is even
		//Rightmost 1 becomes 0 and is removed from x
		// 1001 (9) 1000 (8) -> 1000
		
#include <stdio.h>

int newbitcount(unsigned x);
int oldbitcount(unsigned x);

void main(char args[]){

	printf("%u\n", newbitcount(15));
	
}

int newbitcount(unsigned x){

	int b = 0;

	//In twos complement x =& (x-1) removes rightmost bit
		//Repeat operation until x = 0
	
	while(x !=0){
		x &= (x-1);
		b++;
	}
	
	return b;
}

int oldbitcount(unsigned x){

	int b;
	//Init b, if x is not 0 shift to rightmost
	for(b = 0; x != 0; x >>= 1)
		if(x & 01)	//If 1 
			b++;	//Increment b
	return b;

}


