#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    int j, tmp;
    i = 0; j = n - 1; 
    while(i < j) {
        tmp = ara[i];
        ara[i] = ara[j];
        ara[j] = tmp;

        i++; j--;
    }

    for(i = 0; i < n; i++) printf("%d ", ara[i]);

    return 0;
}