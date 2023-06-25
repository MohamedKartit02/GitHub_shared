#include <stdio.h>

/**
 * main - prints alphabets except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	pucthar('\n');

	return (0);
}
