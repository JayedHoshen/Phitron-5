#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int n;
        scanf("%d", &n);

        char s[n+1];
        scanf("%s", s);

        int i = 0, pathan = 0, tiger = 0;
        while(s[i] != '\0') {
            if(s[i] == 'T') tiger++;
            else pathan++;
            i++;
        }

        if(tiger > pathan) printf("Tiger\n");
        else if(tiger < pathan) printf("Pathaan\n");
        else printf("Draw\n");
    }

    return 0;
}