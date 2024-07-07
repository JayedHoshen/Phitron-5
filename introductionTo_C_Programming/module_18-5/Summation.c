#include <stdio.h>
 
long long int sum = 0;
 
void fun(int *a, int n, int i) {
    if(i == n) return;
    sum += a[i];
    fun(a, n, i+1);
}
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
 
    fun(ara, n, 0);
 
    printf("%lld\n", sum);
 
    return 0;
}

/*
#include <stdio.h>
 
long long int fun(int *a, int n, int i) {
    if(i == n) return 0;
    return (a[i] + fun(a, n, i+1));
}
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
 
    long long int sum = fun(ara, n, 0);
 
    printf("%lld\n", sum);
 
    return 0;
}
*/