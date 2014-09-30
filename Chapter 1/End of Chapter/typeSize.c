/*Write a program to display the ranges of int, char, float, long and short */
#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){


	printf("\nInt Range - Min: %d Max: %d", INT_MIN, INT_MAX);
	printf("\nUnsigned Int Range - Min: 0 Max %d", UINT_MAX);
	
	printf("\n\Char Range - Min: %d Max: %d", CHAR_MIN, CHAR_MAX);
	printf("\nUnsigned Char Range - Min: 0 Max: %d", UCHAR_MAX);


}