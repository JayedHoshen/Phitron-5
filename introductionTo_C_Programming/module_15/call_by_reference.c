#include <stdio.h>

void fun(int *p) {
    printf("p er value - %p\n", p);
    printf("fun er x er value - %d\n", *p);
    *p = 100;
    printf("fun er x er value - %d\n", *p);
}

int main()
{
    int x = 10;

    printf("x er address - %p\n", &x);
    fun(&x);
    printf("main er value - %d\n", x);

    return 0;
}