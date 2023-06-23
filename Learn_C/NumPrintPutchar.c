#include <stdio.h>

void print_number(int n)
{
        unsigned int num = n;
        
        if (n < 0)
        {
                putchar('-');
                num = -n;
        }
        if (num / 10)
        {
                print_number(num / 10);
        }
        putchar((num % 10) + '0');
}

int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-955);
    putchar('\n');
    return (0);
}
