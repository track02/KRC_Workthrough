//Rewrite the lower function with a conditional expression instead of if else

#include <stdio.h>

int oldlower(int c);
int newlower(int c);

void main(char args[]){

	//Try converting A (65) to a
	printf("%c\n", oldlower(65));
	printf("%c\n", newlower(65));

}

int oldlower(int c){

	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int newlower(int c){

	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;

}
