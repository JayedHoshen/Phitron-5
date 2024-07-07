// array printing using recursion
#include <stdio.h>

void fun(int *ara, int n, int i) {
    if(i == n) return;
    printf("%d ", ara[i]);
    fun(ara, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    fun(ara, n, 0);

    return 0;
}