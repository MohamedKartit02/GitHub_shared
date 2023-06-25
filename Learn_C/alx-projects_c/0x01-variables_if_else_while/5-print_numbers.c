#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	putchar(10);

	return (0);
}
