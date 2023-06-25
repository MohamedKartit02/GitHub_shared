#include <stdio.h>
#include <unistd.h>

/**
 * main - prints somthing without using printf
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);

	return (1);
}
