#include <stdio.h>

int my_abs(int n);

int main()
{
    int num;
    scanf("%d", &num);

    int result = my_abs(num);
    printf("%d\n", result);

    return 0;
}

int my_abs(int n) {
    int val = n < 0 ? (n* -1) : n;
    return val;
}