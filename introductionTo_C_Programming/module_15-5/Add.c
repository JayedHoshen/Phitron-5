#include <stdio.h>

void add(int a, int b);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    add(x, y);

    return 0;
}

void add(int a, int b) {
    printf("%d\n", (a+b));
}