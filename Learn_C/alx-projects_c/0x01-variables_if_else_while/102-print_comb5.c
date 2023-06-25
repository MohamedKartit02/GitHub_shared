#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j;

	for (n = 0; n <= 98; n++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (j > n)
			{
				putchar('0' + (n / 10));
				putchar('0' + (n % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));

				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
