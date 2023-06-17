#include <stdio.h>

/**
 * This program prints all possible different combinations of two digits.
 */
int main(void)
{
	int n = 48;
	int m = 49;

	while (n <= 56)
	{
		int m = 49;
		while (m <= 57)
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
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
