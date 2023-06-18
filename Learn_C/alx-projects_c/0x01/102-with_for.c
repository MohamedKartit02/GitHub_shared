#include <stdio.h>

/**
 * This program prints all possible combinations of two two-digit numbers.
 */
int main(void)
{
	for (int n = 0; n <= 98; n++)
	{
		for (int m = 1; m <= 99; m++)
		{
			if (m > n)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				putchar(' ');
				putchar('0' + m / 10);
				putchar('0' + m % 10);

				if(n != 98)
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
