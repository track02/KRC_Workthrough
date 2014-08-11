/*Write a program entab that replaces strings of blanks with the minimum number of tabs
 and blanks to achieve the same spacing. 
 Use the same stops as for detab . 
 When either a tab or a single blank would suffice to reach a tab stop, 
 which should be given preference?  */
 
 #include <stdio.h>
 #define INLIMIT 100
 #define TABSTOP 8
 
 //Prototypes
 int readLine(char inLine[], int lineLimit); //Reads in input
 void replaceBlanks(char inLine[], char formatLine[], int len); //Formats input - copies to new array
 
 int main(){
 
	int len;
	char inLine[INLIMIT], formatLine[INLIMIT * 2];
	
	len = readLine(inLine, INLIMIT);
	replaceBlanks(inLine, formatLine, len);
 
	printf(formatLine);
 
 
	return 0;
 }
 
 
 int readLine(char inLine[], int limit){
 
	int c, i;
	
	for(i = 0; i < limit && (c = getchar()) != EOF; ++i)	
		inLine[i] = c;	
	 
	inLine[i] = '\0';  
	
	++i;	
	return i;
	
 }
 
 
 void replaceBlanks(char inLine[], char formatLine[], int len){
 
	
	int a, i, space, column, stopdist;
	
	space = 0;
	a = 0;
		
	column = 0;
		
	for(i = 0; i < len; ++i){		
	
		if(inLine[i] == ' '){

			//1 character of space available
			++space;
			++i;
			
			while(inLine[i] == ' '){
				++i;
				++space;
			}
				
				
			printf("Space Available %d\n", space);	
				
			//Now Insert tabs / spaces into gap
			while(space > 0){
			
			
				//Distance to next tab stop
				stopdist = (TABSTOP - column + 1);

				printf("Stop Dist %d\n", stopdist);
				
				
				if(space >= stopdist){
					
					formatLine[a] = '\t';					
					space = space - stopdist;
					++a;
					column = TABSTOP;		
					printf("Tab Space:%d \n", space);
				}
				else{
					formatLine[a] = ' ';
					++a;
					space = space - 1;
					++column;			
					printf("Space, Space:%d\n", space);
				}
			
				if(column == TABSTOP)
					column = 0;
			
			
			}
			
			formatLine[a] = inLine[i];
			++a;
			
		}else
		{	
			formatLine[a] = inLine[i];
			++a;
			++column;
		}
		
		if(column == TABSTOP)
			column = 0;
		
		

		
	}  
 }
 
 
 
