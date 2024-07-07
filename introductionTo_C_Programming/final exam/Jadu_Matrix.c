#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ara[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) scanf("%d", &ara[i][j]);
    }

    int flag = 1;
    if(n != m) flag = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i==j || (i+j == n-1)) {
                if(ara[i][j] != 1) flag = 0;
            } 
            else if(ara[i][j] != 0) flag = 0;
        }
    }

    if(flag == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}