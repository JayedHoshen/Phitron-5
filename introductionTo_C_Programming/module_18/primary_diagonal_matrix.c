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
   
    int flag = 1;
    if(row != col) flag = 0;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) continue;
            if(ara[i][j] != 0) flag = 0;
        }
    }

    if(flag) printf("Primary diagonal\n");
    else printf("Not diagonal\n");

    return 0;
}