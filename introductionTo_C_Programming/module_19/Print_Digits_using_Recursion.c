#include <stdio.h>

void digit(int n) {
    if(n == 0) return;
    digit(n/10);
    printf("%d ", n%10);
}

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int n;
        scanf("%d", &n);

        digit(n);
        if(n == 0) printf("0");
        printf("\n");
    }

    return 0;
}