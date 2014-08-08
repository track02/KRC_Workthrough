#include <stdio.h>

/* Print Fahrenheit - Celsius Table
	for Fahr = 0, 20, ... , 300 */

main()

{
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit of temp table */
	step = 20; /* step size */
	
	celsius = lower;
	
	printf("Celsius - Fahrenheit Conversion\n\n");
	
	while (celsius <= upper){
	
		
		fahr = ((9.0 * celsius) / 5.0) + 32; //Specifiy floating point, prevent truncation
		
		
		printf("%3.0f\t%6.1f\n", celsius, fahr); /* Print 3 char wide float no decimal 
													Tab 
													6 char wide float, 1 decminal
													Newline */
		celsius = celsius + step;
	}




}	
	
