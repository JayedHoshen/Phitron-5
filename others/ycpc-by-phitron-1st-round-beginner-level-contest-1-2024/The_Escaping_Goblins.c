#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    int ab = abs(a-b);

    if(ab > k) printf("YES\n");
    else printf("NO\n");

    return 0;
}
