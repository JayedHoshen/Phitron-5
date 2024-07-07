#include <stdio.h>

int main()
{
    int n, x, m;

    scanf("%d", &x);

    if(x == 1 || x == 2 || x == 3) printf("1\n");
    else {
        n = x / 3;
        m = x - (n*3);

        if(m == 2 || m == 1) n++;

        printf("%d\n", n);
    }
 
    return 0; 
} 