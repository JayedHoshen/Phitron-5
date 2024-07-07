#include <stdio.h>

int main()
{
    int ara[5][3];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] ", i, j);
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    
    printf("\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }

    return 0;
}