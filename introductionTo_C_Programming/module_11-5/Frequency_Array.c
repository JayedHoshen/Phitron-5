#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int cnt[m+1];
    for(int i = 0; i <= m; i++) cnt[i] = 0;
    
    for(int i = 0; i < n; i++) cnt[ara[i]]++;

    for(int i = 1; i <= m; i++) printf("%d\n", cnt[i]);

    return 0;
}