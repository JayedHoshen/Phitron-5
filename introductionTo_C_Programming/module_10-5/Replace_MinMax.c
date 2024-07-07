#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++) scanf("%d", &ara[i]);

    int min = ara[0], max = ara[0];
    int mnIndex = 0, mxIndex = 0;

    for(i = 1; i < n; i++) {
        if(min > ara[i]) {
            min = ara[i];
            mnIndex = i;
        } 
        if(max < ara[i]) {
            max = ara[i];
            mxIndex = i;
        } 
    }
    
    int temp = ara[mnIndex];
    ara[mnIndex] = ara[mxIndex];
    ara[mxIndex] = temp;

    for(i = 0; i < n; i++) printf("%d ", ara[i]);

    printf("\n");

    return 0;
}