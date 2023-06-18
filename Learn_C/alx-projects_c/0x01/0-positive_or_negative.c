#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * This program takes a random number and and see whether the program
 * is positive or negative or zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
