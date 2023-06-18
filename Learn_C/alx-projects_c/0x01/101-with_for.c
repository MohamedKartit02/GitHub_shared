#include <stdio.h>

/**
 * This program prints all possible different combinations of three digits
 * using for loops
 */
int main(void)
{
	for (int n = 48; n <= 55; n++)
	{
		for (int m = 49; m <= 56; m++)
		{
			for (int x = 50; x <= 57; x++)
			{
				if (x > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (n != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
