#include <stdio.h>

int main()
{
    int n, nm;
    scanf("%d", &n);
    nm = n;

    // upper portion
    int c = 0;
    for(int i = 1; i <= n; i++)  if(i%2) c++;
    n = c+5;

    int s = n-1, k = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= s; j++) printf(" ");
        for(int j = 1; j <= k; j++) printf("*");
        k += 2; s--;
        printf("\n");
    }


    // lower portion
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) printf(" ");
        for(int j = 1; j <= nm; j++) printf("*");
        printf("\n");
    }

    return 0;
}