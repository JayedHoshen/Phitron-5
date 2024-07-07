#include <stdio.h>

int main()
{
    int n, m, max = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &m);

        if(m > max) max = m;
    }

    printf("%d\n", max);

    return 0;
}