#include <stdio.h>

/**
 * This program prints alphabets lowercases and Uppercases
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (char c = 'A'; c <= 'Z';c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
