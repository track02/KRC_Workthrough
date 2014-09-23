/* Write a program to "fold" long input lines into two or more shorter lines
 after the last non-blank character that occurs before the n -th column of input.
 Make sure your program does something intelligent with very long lines,
 and if there are no blanks or tabs before the specified column.  */
  
 #include <stdio.h>
 #define LINE_LENGTH 150
 #define FOLD_COL 6
 
 //Function Prototypes
 void readLine(char inLine[], int lineLength);
  
 int main(){
 
	char inLine[LINE_LENGTH];
 
	readLine(inLine, LINE_LENGTH);
  
 return 0;	
 
 } 
 
 void readLine(char inLine[], int lineLength){
 
 
	int c, i, a, col, blank;
	
	col = 0;
	blank = -1;
	
	
	for(a = i = 0; i < lineLength - 1 && (c = getchar()) != EOF; ++i)
	{	

		if(c == ' '|| c == '\n' || c == '\t'){
			blank = a;
			
		}

	
		//Copy input and count current index and index of latest blank
		inLine[a] = c;
		++a;
		++col;
		
		//When a fold column is reached
		if(col == FOLD_COL){
				
			//Insert newline into previous blank
			if(blank != -1){
				inLine[blank] = '\n';
			}
			//Create new line at end of row
			else{
				
				inLine[a] = '-';
				++a;
				inLine[a] = '\n';
				++a;				
			}			
		
			col = 0;
			blank = -1;
				
		}	
	}	
	
	inLine[a] = '\0';
	printf("%s", inLine);
		
 
 }
 
 
 
 
 
 
 
 
 
 
