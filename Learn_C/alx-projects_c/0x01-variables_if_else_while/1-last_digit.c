#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is the last number of a rand number postitve ot not
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastN;

	srand(time(0));
	n = rand() - (RAND_MAX / 2);
	lastN = n % 10;

	if (lastN > 0)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastN);
	}
	else if (lastN == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastN);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
				n, lastN);
	}

	return (0);
}
