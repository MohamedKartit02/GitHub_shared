#include "main.h"

/**
 * print_alphabet - prints alphabets lowercases
 *
 * Return: nothing 
 */
void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
}
