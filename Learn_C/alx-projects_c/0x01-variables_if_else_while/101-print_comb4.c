#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, v;
	i = 0;

	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			v = 2;
			while (v <= 9)
			{
				if (v > j && j > i)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + v);

					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				v++;
			}
			j++;
		}
		i++;
	}

	return (0);
}
