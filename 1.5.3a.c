#include <stdio.h>


//count lines in input	
main()
{
	
	int c, nl;
	nl = 0;
	
	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == '\t')
			++nl;
		if(c == ' ')
			++nl;	
	}
	printf("%d\n", nl);	
		
}