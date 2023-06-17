#include <stdio.h>

/**
 * This program prints alphabets in revese
 */
int main(void)
{
	for (int i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
