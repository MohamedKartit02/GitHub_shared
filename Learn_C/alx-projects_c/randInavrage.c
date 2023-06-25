#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this function print random number in a difined average
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, maxN, minN;

	printf("Enter the max value:> ");
	scanf("%d", &maxN);
	printf("Now the min value:> ");
	scanf("%d", &minN);
	srand(time(0));

	n = (rand() % (maxN -minN + 1)) + minN;
	printf("here your value /> %d", n);

	return (0);
}
