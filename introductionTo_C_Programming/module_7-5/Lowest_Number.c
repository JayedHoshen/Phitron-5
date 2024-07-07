#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n], min, indx;
    for(i = 1; i <= n; i++) scanf("%d", &ara[i]);

    min = ara[1];
    indx = 1;
    for(i = 2; i <= n; i++) {
        if(ara[i] < min) {
            min = ara[i];
            indx = i;
        } 
    } 

    printf("%d %d\n", min, indx);

    return 0;
}