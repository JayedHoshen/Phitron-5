#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int element = row * col;
    int ara[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    int cnt = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
           if(ara[i][j] == 0) cnt++;
        }
    }

    if(element == cnt) printf("Zero/NULL matrix\n");
    else printf("Not NULL matrix\n");

    return 0;
}