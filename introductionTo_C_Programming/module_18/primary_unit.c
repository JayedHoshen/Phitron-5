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
            if(i == j) {
                if(ara[i][j] != 1) flag = 0;
                continue;
            } 
            if(ara[i][j] != 0) flag = 0;
        }
    }

    if(flag) printf("Primary Unit matrix\n");
    else printf("Not Unit matrix\n");

    return 0;
}