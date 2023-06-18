#include <stdio.h>

/**
 * This program prints all possible different combinations of two digits.
 * using for loops
 */
int main(void)
{
	for (int n = 48; n <= 56; n++)
	{
		for (int m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56) 
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
