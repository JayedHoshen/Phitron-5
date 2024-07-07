// array receive two types, pointer and aray name
#include <stdio.h>

void fun(int *ara, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
}

int main()
{
    int ara[5] = {10, 20, 30, 40, 50};
    // int sz = sizeof(ara) / sizeof(int);
    // printf("%d\n", sz);
    fun(ara, 5);  

    return 0;
}