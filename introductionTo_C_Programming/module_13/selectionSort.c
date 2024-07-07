#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    // Ascending order
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(ara[i] > ara[j]) {
                int tmp = ara[i];
                ara[i] = ara[j];
                ara[j] = tmp;
            }
        }
    }

    // Descending order
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(ara[i] < ara[j]) {
                int tmp = ara[i];
                ara[i] = ara[j];
                ara[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) printf("%d ", ara[i]);

    return 0;
}