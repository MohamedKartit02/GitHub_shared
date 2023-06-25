#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar(10);

	return (0);
}
