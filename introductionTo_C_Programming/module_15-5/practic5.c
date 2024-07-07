#include <stdio.h>

void swap_it(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *aa = &a;
    int *bb = &b;

    printf("Before swap = %d %d\n", a, b);

    swap_it(&a, &b);
    
    printf("After swap = %d %d\n", a, b);
    
    return 0;
}