/*Write a program to display the ranges of int, char, long and short */
/*Compute the ranges for each datatype*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

//Prototypes
void computeIntRange(void);
void computeCharRange(void);
void computeLongRange(void);
void computeShortRange(void);

int main(){
	
	printf("~~~\n\nSigned Int Range - Min: %d Max: %d", INT_MIN, INT_MAX);
	//Unsigned int max won't fit into int max
	printf("\nUnsigned Int Range - Min: 0 Max: %u", UINT_MAX);
	
	printf("\n\nSigned Char Range - Min: %d Max: %d", CHAR_MIN, CHAR_MAX);
	printf("\nUnsigned Char Range - Min: 0 Max: %d", UCHAR_MAX);

	printf("\n\nSigned Long Range - Min: %d Max: %d", LONG_MIN, LONG_MAX);
	printf("\nUnsigned Long Range - Min: 0 Max: %u", ULONG_MAX);
	
	printf("\n\nSigned Short Range - Min: %d Max: %d", SHRT_MIN, SHRT_MAX);
	printf("\nUnsigned Short Range - Min: 0 Max: %d", USHRT_MAX);

	
	printf("\nSigned Int Range - Min: %d Max: %d", INT_MIN, INT_MAX);
	//Unsigned int max won't fit into int max
	printf("\nUnsigned Int Range - Min: 0 Max: %u", UINT_MAX);
	
	printf("\n\nSigned Char Range - Min: %d Max: %d", CHAR_MIN, CHAR_MAX);
	printf("\nUnsigned Char Range - Min: 0 Max: %d", UCHAR_MAX);

	printf("\n\nSigned Long Range - Min: %d Max: %d", LONG_MIN, LONG_MAX);
	printf("\nUnsigned Long Range - Min: 0 Max: %u", ULONG_MAX);
	
	printf("\n\nSigned Short Range - Min: %d Max: %d", SHRT_MIN, SHRT_MAX);	
	printf("\nUnsigned Short Range - Min: 0 Max: %d\n\n~~~Float Ranges~~~\n\n", USHRT_MAX);	
		
	printf("Float Range - Min: %f Max: %f\n\n~~~Computing Ranges~~~\n\n", FLT_MIN, FLT_MAX);
	
	computeIntRange();
	computeCharRange();
	computeLongRange();
	computeShortRange();
}


void computeIntRange(void){

	int test, prev;
	test = prev = 0;

	//Decrement until overflow - sign flips
	while(test <= 0){
		prev = test;
		--test;	
	}

	printf("\nInt Min %d   ", prev);
	
		while(test >= 0){
		prev = test;
		++test;
	}
	
	printf("Int Max %d", prev);		
		
	unsigned int utest, uprev;
	utest = uprev = 1;	

	//Unsigned - min = 0
	printf("\nUInt Min %d   ", 0);
	
	//Will wrap back round to 0 when max is reached
	while(utest > 0){
		uprev = utest;
		++utest;
	}
	
	printf(" UInt Max %u \n", uprev);		
}

void computeCharRange(void){

	char test, prev;
	test = prev = 0;

	//Decrement until overflow - sign flips
	while(test <= 0){
		prev = test;
		--test;	
	}

	printf("\nChar Min %d   ", prev);
	
		while(test >= 0){
		prev = test;
		++test;
	}
	
	printf("Char Max %d", prev);		
		
	unsigned char utest, uprev;
	utest = uprev = 1;	

	//Unsigned - min = 0
	printf("\nUChar Min %d   ", 0);
	
	//Will wrap back round to 0 when max is reached
	while(utest > 0){
		uprev = utest;
		++utest;
	}
	
	printf(" UChar Max %u \n", uprev);		
}

void computeLongRange(void){

	long test, prev;
	test = prev = 0;

	//Decrement until overflow - sign flips
	while(test <= 0){
		prev = test;
		--test;	
	}

	printf("\nLong Min %d   ", prev);
	
		while(test >= 0){
		prev = test;
		++test;
	}
	
	printf("Long Max %d", prev);		
		
	unsigned long utest, uprev;
	utest = uprev = 1;	

	//Unsigned - min = 0
	printf("\nULong Min %d   ", 0);
	
	//Will wrap back round to 0 when max is reached
	while(utest > 0){
		uprev = utest;
		++utest;
	}
	
	printf(" ULong Max %u \n", uprev);		
}

void computeShortRange(void){

	short test, prev;
	test = prev = 0;

	//Decrement until overflow - sign flips
	while(test <= 0){
		prev = test;
		--test;	
	}

	printf("\nShort Min %d   ", prev);
	
		while(test >= 0){
		prev = test;
		++test;
	}
	
	printf("Short Max %d", prev);		
		
	unsigned short utest, uprev;
	utest = uprev = 1;	

	//Unsigned - min = 0
	printf("\nUShort Min %d   ", 0);
	
	//Will wrap back round to 0 when max is reached
	while(utest > 0){
		uprev = utest;
		++utest;
	}
	
	printf(" UShort Max %u ", uprev);		
}








