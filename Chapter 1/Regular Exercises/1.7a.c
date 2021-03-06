#include <stdio.h>

/* Print Fahrenheit - Celsius Table
	for Fahr = 0, 20, ... , 300 */

	
//Function Prototype
float fahrToCelsius(float f);
	
	
main(){
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit of temp table */
	step = 20; /* step size */
	
	fahr = lower;
	
	printf("Fahrenheit - Celsius Conversion\n\n");
	
	while (fahr <= upper){
	
		celsius = fahrToCelsius(fahr); //Specifiy floating point, prevent truncation
				
		printf("%3.0f\t%6.1f\n", fahr, celsius); /* Print 3 char wide float no decimal 
													Tab 
													6 char wide float, 1 decminal
													Newline */
		fahr = fahr + step;
	}

}	

float fahrToCelsius(float f){


	return (5.0 / 9.0) * (f - 32.0);


}

