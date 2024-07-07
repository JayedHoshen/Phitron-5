#include <stdio.h>

int main()
{
    int ara[5] = {10, 20, 30, 40, 50};

    // printf("0th index er address - %p\n", &ara[0]);
    // printf("0th index er address - %p\n", ara);
    // printf("0th index er value - %d\n", ara[0]);
    // printf("0th index er value - %d\n", *ara);
    printf("1th index er value - %d\n", ara[1]);
    printf("1th index er value - %d\n", *(ara+1));
    printf("1th index er value - %d\n", *(1+ara));

    printf("ara[1] = %d are , ", ara[1]);
    printf("*(ara+1) = %d same\n", *(ara+1));

    printf("1[ara] = %d are , ", 1[ara]);
    printf("*(1+ara) = %d same\n", *(1+ara));

    // ara[1] ==> *(ara+1);
    // *(ara+1) ==> ara[1];
    // *(1+ara) ==> ara[1] ==> 1[ara];

    return 0;
}