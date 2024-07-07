#include <stdio.h>

int main()
{
    int a, b, mod;
    scanf("%d %d", &a, &b);

    if(b == 0) printf("-1\n");
    else {
        mod = a % b;
        printf("%d\n", mod);
    }

    return 0;
}