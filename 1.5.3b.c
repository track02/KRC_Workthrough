#include <stdio.h>


//count lines in input	
main()
{
	
	int c;
	int blank = 0;
	
	while((c = getchar()) != EOF){

		if(c == ' ' && blank == 0){				
				putchar(c);
				blank = 1;	
		}				
		
		if(c != ' '){
		
			putchar(c);
			blank = 0;
		}
				
	}
			
}