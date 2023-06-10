/* This program multiply numbers and returns the results*/
#include <stdio.h>

/* this function takes two number and return their multiplication result*/

int integers_multi(int x, int y)
{
	int result;
	result = x * y;
	return result;
}

int main()
{
	printf("the multiplication of 3 and 5 is %d.\n", integers_multi(3, 5));
	return 0;
}
