#include <stdio.h>

/**
 * main - prints all alphabets 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j;

	n = 65;

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
