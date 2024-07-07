#include <stdio.h>

void minMaxFnc(int ara[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    minMaxFnc(ara, n);

    return 0;
}

void minMaxFnc(int ara[], int n) {
    int min, max;
    min = max = ara[0];

    for(int i = 1; i < n; i++) {
        if(ara[i] < min) min = ara[i];
        if(ara[i] > max) max = ara[i];
    }

    printf("%d %d\n", min, max);
}