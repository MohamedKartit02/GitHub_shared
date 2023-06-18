import math


n = 0
while (n <= 98):
    m = 0
    while(m <= 99):
        if (m > n):
            print(math.floor(n / 10), end='')
            print(math.floor(n % 10), end='')
            print(' ', end='')
            print(math.floor(m / 10), end='')
            print(math.floor(m % 10), end='')
            if (n != 98):
                print(',', end='')
                print(' ', end='')
        m = m + 1
    n = n + 1
print('\n')
