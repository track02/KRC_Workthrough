#include <stdio.h>

//Store 0 - 9 / a - z / A - Z
//Ranges: 0 - 9 / 10 - 35 / 36 - 61

//62 Characters total
#define CHARACTERS 62

//Conversion values 
#define CONVERT_LOWER 87
#define CONVERT_UPPER 29
#define CONVERT_DIGIT 48

//ASCII Ranges
#define DIGIT_START 48 //0
#define DIGIT_END 57 //9

#define UPPER_START 65 //A
#define UPPER_END 90 //Z

#define LOWER_START 97 //a
#define LOWER_END 122 //z

main(){

	int i, maxCount;
	int chars[CHARACTERS];
	
	i = maxCount = 0;
	
	//Setup array
	for(i = 0; i < CHARACTERS; i++)
		chars[i] = 0;	
				
	//Read through input until end
	while((i = getchar()) != EOF){
	
		//Check which range c falls within (a - z / A - Z / 0 - 9)
		if(i >= DIGIT_START && i <= DIGIT_END){
		
			++chars[i - CONVERT_DIGIT];
			
			if(chars[i - CONVERT_DIGIT] > maxCount)
				maxCount = chars[i - CONVERT_DIGIT];
		}		
		if(i >= UPPER_START && i <= UPPER_END){
			
			++chars[i - CONVERT_UPPER];
			
			if(chars[i - CONVERT_UPPER] > maxCount)
				maxCount = chars[i - CONVERT_UPPER];			
		}
		if(i >= LOWER_START && i <= LOWER_END){
		
			++chars[i - CONVERT_LOWER];
			
			if(chars[i - CONVERT_LOWER] > maxCount)
			maxCount = chars[i - CONVERT_LOWER];			
		}			
	}		
	
	
	//Create histogram
	while(maxCount > 0){
	
	
		printf("%d" , maxCount);
	
		for(i = 0; i < CHARACTERS; ++i){
		
			if(chars[i] >= maxCount)
				printf("X ");
			else
				printf("  ");		
		}
			
		printf("\n");
	
		--maxCount;	
	}
	
	
	//Print table
	
	
	printf(" ");
	
	for(i = 0; i < CHARACTERS; ++i){
	
	
		//0 - 9 Digits
		if(i >= 0 && i < 10)
			printf("%c ", i + CONVERT_DIGIT);			
		if(i >= 10 && i < 36)
			printf("%c ", i + CONVERT_LOWER);
		//else
		//	printf("%c ", i + CONVERT_UPPER);
				
	}
	
	
	
	
}