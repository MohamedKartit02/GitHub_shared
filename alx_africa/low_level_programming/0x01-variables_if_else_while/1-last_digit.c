#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks the last digit of a number if it is negative or positive
 * or equal to zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lNum;

	srand(time(NULL));

	n = rand() - RAND_MAX /2 ;
	lNum = n % 10;

	if (n > 0)
		printf("Last digit of %d  is %d and is greater than 5",
				n, lNum);
	if (n < 0)
		printf("Last digit of %d  is %d and is less than 6 and not 0",
				n, lNum);
	else
		printf("Last digit of %d  is %d and is 0",
				n, lNum);

	return (0);
}
