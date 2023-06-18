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
	int maxValue = 350;
	int minValue = -100;

	srand(time(0));
	n = rand() % (maxValue + 1) + minValue;
	printf("The maximum value will be %d and minimum %d and the random Number will be %d", maxValue, minValue, n);

	return (0);
}
