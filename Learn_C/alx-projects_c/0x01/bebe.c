#include <stdio.h>

int main(void)
{
	/**
	int n = 0;

	while (n <= 20)
	{
		putchar('0' + n);
		n++;
	}

	putchar('\n');
	*/
	int n;
	printf("Number /> ");
	scanf("%d", &n);

	int m = n;
	while (m >= 10)
	{
		m = m / 10;
	}

	putchar(48 + m);
	putchar('\n');
	putchar(48 + (n % 10));
	putchar('\n');

	return (0);
}
