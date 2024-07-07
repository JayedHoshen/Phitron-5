#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ara1[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara1[i]);
    
    int m;
    scanf("%d", &m);

    int ara2[m];
    for(int i = 0; i < m; i++) scanf("%d", &ara2[i]);
    
    int copy[n+m];
    for(int i = 0; i < n; i++) copy[i] = ara1[i];

    int i = n;
    for(int j = 0; j < m; j++) {
        copy[i] = ara2[j];
        i++;
    }

    for(int i = 0; i < n+m; i++) printf("%d ", copy[i]);

    return 0;
}