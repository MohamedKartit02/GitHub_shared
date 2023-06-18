#include <stdio.h>

/**
 * This program prints all possible combinations of two two-digit numbers.
 */
int main(void)
{
	int n = 0;

	while (n <= 98)
	{
		int m = 1;
		while (m <= 99)
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
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
