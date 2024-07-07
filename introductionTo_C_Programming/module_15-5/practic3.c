#include <stdio.h>

int count_odd(int ara[], int n) {
    int odd = 0;
    for(int i = 0; i < n; i++) {
        if(ara[i] % 2) odd++;
    }
    return odd;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int cnt = count_odd(ara, n);
    printf("%d\n", cnt);

    return 0;
}