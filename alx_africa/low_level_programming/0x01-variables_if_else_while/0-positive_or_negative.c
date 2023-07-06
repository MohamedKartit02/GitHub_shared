#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - checks if a random number is positive or negative
 * or equal to zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);

	return (0);
}
