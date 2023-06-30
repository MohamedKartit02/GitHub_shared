#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character to print
 *
 * Return: return 1 on success 
 * on error -1, and error is set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
