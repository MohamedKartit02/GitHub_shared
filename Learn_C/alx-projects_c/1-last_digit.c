#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * This program compare the last digit of a number with 5
 */

int main(void)
{
	int n, lastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNumber = n % 10;

	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastNumber);
	}
	else if (lastNumber < 6 && lastNumber != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastNumber);
	}

	return (0);
}
