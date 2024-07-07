#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ara[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) scanf("%d", &ara[i][j]);
    }

    int x, f = 0;
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) if(x == ara[i][j]) {
            f = 1; 
            break;
        } 
    }

    if(f) printf("will not take number\n");
    else printf("will take number\n");

    return 0;
}