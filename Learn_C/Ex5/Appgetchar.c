#include <stdio.h>

int main()
{
	int ch1, ch2;
	printf("Enter two character together /> ");

	ch1 = getc(stdin);
	ch2 = getchar();

	printf("this is the first character you entred %c. \n", ch1);
	printf("this is the second character you entered %c. \n", ch2);

	return 0;
}

