#include <stdio.h>

/**
 * This program print all hexadecimal numbers
 */
int main(void)
{
	int i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	for (char c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
