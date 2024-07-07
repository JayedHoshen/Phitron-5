#include <stdio.h>
#include <limits.h>

int maxi(int *ara, int n, int i) {
    if(i == n) return INT_MIN;
    int max = maxi(ara, n, i+1);
    if(ara[i] > max) return ara[i];
    else return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int max = maxi(ara, n, 0);
    printf("%d\n", max);

    return 0;
}