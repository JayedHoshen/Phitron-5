#include <stdio.h>

void fun(int *ar, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(i+ar));
    }
    ar[2] = 100;
    printf("\n");
}

int main()
{
    int ara[5] = {10, 20, 30, 40, 50};

    fun(ara, 5);

    for(int i = 0; i < 5; i++) printf("%d ", i[ara]);

    return 0;
}