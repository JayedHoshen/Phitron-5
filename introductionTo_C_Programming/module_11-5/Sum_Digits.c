#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char ara[n+1];
    scanf("%s", ara);

    int sum = 0;
    for(int i = 0; i < n; i++) sum += (ara[i]-48);
    
    printf("%d\n", sum);

    return 0;
}