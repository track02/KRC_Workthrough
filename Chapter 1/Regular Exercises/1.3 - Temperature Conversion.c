#include <stdio.h>

//Ex 1.3 - Modify the temperature conversion program to print out a heading above the table

main()
{	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit of temp table */
	step = 20; /* step size */
	
	fahr = lower;
		
	printf("Fahrenheit - Celsius Conversion\n\n"); //Heading
	
	while (fahr <= upper){	
		
		celsius = (5.0 / 9.0) * (fahr - 32.0); //Specifiy floating point, prevent truncation		
		
		/* Prints the following
		3 char wide float no decimal 
		Tab 
		6 char wide float, 1 decminal
		Newline */
		printf("%3.0f\t%6.1f\n", fahr, celsius); 

		fahr = fahr + step;
	}
}	
