#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    long long sum = 0;

    for(i = 0; i < n; i++) sum += ara[i];

    if(sum < 0) sum *= -1;

    printf("%lld\n", sum);

    return 0;
}