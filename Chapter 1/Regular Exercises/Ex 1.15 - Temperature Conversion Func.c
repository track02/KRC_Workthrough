#include <stdio.h>

//Ex 1.15 - Modify the temperature conversion program to use a function for conversion

//Declaration of function
float conversion(float fahr);

main()
{	
	float fahrenheit = 100;	
	printf("Fahrenheit: %3.2f ---> Celsius: %3.2f", fahrenheit, conversion(fahrenheit));

} 

float conversion(float fahr)
{		
		float celsius = (5.0 / 9.0) * (fahr - 32.0); //Specifiy floating point, prevent truncation		
		return celsius;	
}