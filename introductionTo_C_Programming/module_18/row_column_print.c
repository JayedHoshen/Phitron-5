#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int ara[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    // exact row print
    // int e;
    // scanf("%d", &e);

    // for(int i = 0; i < col; i++) {
    //     printf("%d ", ara[e][i]);
    // }
    // exact column print
    int e;
    scanf("%d", &e);

    for(int i = 0; i < row; i++) {
        printf("%d\n", ara[i][e]);
    }

    return 0; 
}