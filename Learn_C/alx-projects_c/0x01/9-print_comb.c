#include <stdio.h>

/**
 * thi program gives this output 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
int main(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{

		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
