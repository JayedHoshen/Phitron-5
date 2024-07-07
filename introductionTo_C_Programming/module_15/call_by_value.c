#include <stdio.h>

void fun(int n) {
    printf("fun er address - %p\n", &n);
    n = 100;
    printf("fun er value - %d\n", n);
}

int main()
{
    int x = 10;

    printf("main x er address - %p\n", &x);

    fun(x);

    printf("main x er value - %d\n", x);

    return 0;
}