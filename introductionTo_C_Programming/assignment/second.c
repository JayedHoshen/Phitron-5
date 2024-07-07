/*
problem-5: Update and Print
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    int x, v;
    scanf("%d %d", &x, &v);

    for(i = 0; i < n; i++) {
        if(x == i) ara[i] = v;
    }

    for(i = n-1; i >= 0; i--) printf("%d ", ara[i]);

    return 0;
}

problem-4: Sum Sum
#include <stdio.h>

int main()
{
    int i, n, a, po = 0, ne = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &a);

        if(a > 0) po += a;
        if(a < 0) ne += a;
    }

    printf("%d %d\n", po, ne);

    return 0;
}

problem-3: Reverse and Odd
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    for(i = n-1; i >= 0; i--) {
        if(i%2) printf("%d ", ara[i]);
    } 
    printf("\n");

    return 0;
}

problem-2: Is It a Challenge?
#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    if(n > 0) {
        for(i = 1; i < n; i++) {
            printf("%d ", i);
        }
        printf("%d\n", n);
    }
    else {
        for(i = n; i < 0; i++) {
            printf("%d ", i);
        }
        printf("0\n");
    }    

    return 0;
}

problem-1: Say It
#include <stdio.h>  

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d. I Want More Assignments\n", i);
    }

    return 0;
} 

*/