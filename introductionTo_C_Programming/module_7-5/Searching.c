#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    int x, f = 0;
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
       if(ara[i] == x) {
            printf("%d\n", i); 
            f++; break;
       } 
    }

    if(f == 0) printf("-1\n");

    return 0;
}