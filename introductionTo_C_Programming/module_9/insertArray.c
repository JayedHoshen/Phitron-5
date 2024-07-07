#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n+1];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    int pos, value;
    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos+1; i--) ara[i] = ara[i-1];

    ara[pos] = value;

    for(i = 0; i <= n; i++) printf("%d ", ara[i]);

    return 0;
}