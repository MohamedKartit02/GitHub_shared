#include <stdio.h>

/**
 * main - hexadecimal characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= 'f'; i++)
	{
		if (!(i > '9' && i < 'a'))
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
