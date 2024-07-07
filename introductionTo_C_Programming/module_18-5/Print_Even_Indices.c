#include <stdio.h>

void fun(int *a, int n, int i) {
    if(i < 0) return;
    if(i%2 == 0) printf("%d ", a[i]);
    fun(a, n, i-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    fun(ara, n, n-1);

    return 0;
}