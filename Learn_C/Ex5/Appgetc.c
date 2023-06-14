#include <stdio.h>

int main(){
	int ch;

	printf("write one character here /> ");
	ch = getc(stdin);
	
	printf("the character you entered is %c.\n", ch);

	return 0;
}

