#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ara[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    for(int i = 0; i < m; i++) printf("%d ", ara[n-1][i]);
    printf("\n");
    for(int i = 0; i < n; i++) printf("%d ", ara[i][m-1]);
    printf("\n");
    
    return 0;
}