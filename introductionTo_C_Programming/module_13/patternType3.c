/*
    type-1
    1
    12
    123
    
    type-2
    123
    12
    1
*/

#include <stdio.h>

int main()
{
    // type-2
    int n, k; 
    scanf("%d", &n);

    k = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            printf("%d ", j);
        }
        k--;
        printf("\n");
    }
    
    /* type-1
    int n, k = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }
    */

    return 0;
}