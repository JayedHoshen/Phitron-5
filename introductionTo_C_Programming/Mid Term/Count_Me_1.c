#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int two = 0, three = 0;
    for(int i = 0; i < n; i++) {
        if(ara[i] % 2 == 0) two++;
        else if(ara[i]%2 != 0 && ara[i]%3 == 0) three++;
    }

    printf("%d %d\n", two, three);

    return 0;
}