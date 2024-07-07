#include <stdio.h>

void change_it(int *ara, int n) {
    ara[n-1] = 100;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    change_it(ara, n);

    for(int i = 0; i < n; i++) printf("%d ", ara[i]);

    return 0;
}