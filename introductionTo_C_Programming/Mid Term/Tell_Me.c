#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int n;
        scanf("%d", &n);

        int ara[n];
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

        int x;
        scanf("%d", &x);

        int f = 0;
        for(int i = 0; i < n; i++) {
            if(ara[i] == x) {
                f = 1;
                break;
            }
        }
        
        if(f) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}