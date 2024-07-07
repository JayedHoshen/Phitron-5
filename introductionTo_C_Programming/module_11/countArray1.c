#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int cnt[11] = {0}; // count 0 to 10

    for(int i = 0; i < n; i++) cnt[ara[i]]++;

    for(int i = 0; i < 11; i++) printf("%d - %d\n", i, cnt[i]);

    return 0;
}