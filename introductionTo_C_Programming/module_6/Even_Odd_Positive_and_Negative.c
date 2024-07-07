#include <stdio.h>

int main()
{
    int n, m, even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &m);

        if(m%2 == 0) even++;
        if(m%2) odd++;
        if(m > 0) positive++;
        if(m < 0) negative++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}