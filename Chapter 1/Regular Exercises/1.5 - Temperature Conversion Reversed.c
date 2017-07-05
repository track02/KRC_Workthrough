#include <stdio.h>

#define LOWER 0 //Lower limit of table
#define UPPER 300 //Upper limit of table
#define STEP 20 //Step size

//Ex 1.5 - Modify the temperature conversion program to print in reverse order
main()
{

int fahr;

for(fahr = LOWER; fahr <= 300; fahr = fahr + STEP)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
