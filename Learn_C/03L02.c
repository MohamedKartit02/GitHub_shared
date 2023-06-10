/* 03L02.c calculate an addition and print out the results*/
#include <stdio.h>

/* this functions add up to Numbers and print out the results */
int Integer_add(int x, int y)
{
	int results;
	results = x + y;
	return results;
}

int main()
{
	int sum;
	sum = Integer_add(5, 12);

	printf("the addition of number 5 and 12 is %d.\n", sum);
	return 0;
}
