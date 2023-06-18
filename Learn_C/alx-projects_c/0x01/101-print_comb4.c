#include <stdio.h>

/**
 * This program prints all possible different combinations of two digits.
 */
int main(void)
{
	int n = 48;
	int m = 49;
	int x = 50;

	while (n <= 55)
	{
		int m = 49;
		while (m <= 56)
		{
			int x = 50;
			while (x <= 57)
			{
				if (x > m > n)
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
				x++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
