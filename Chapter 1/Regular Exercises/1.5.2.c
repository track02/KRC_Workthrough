#include <stdio.h>


//count characters in input	
main()
{
	long nc;
	nc = 0;			

	//Will also count newline characters \n
	while(getchar() != EOF)
		++nc;
			
	printf("%ld\n", nc);
	
}