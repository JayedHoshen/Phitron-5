#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int n;
        scanf("%d", &n);

        do {
            printf("%d ", (n%10));
            n /= 10;
        } while(n != 0);

        printf("\n");
    }

    return 0;
}