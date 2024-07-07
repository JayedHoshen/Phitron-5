#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) scanf("%d", &ara[i][j]);
    }

    int pri = 0, sec = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) pri += ara[i][j];
            if(i+j == n-1) sec += ara[i][j];
        }
    }

    printf("%d\n", abs(pri-sec));

    return 0;
}