#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        char s[10001];
        scanf("%s", s);

        int capital = 0, sml = 0, digit = 0;
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') capital++;
            else if(s[i] >= 'a' && s[i] <= 'z') sml++;
            else digit++;
        }

        printf("%d %d %d\n", capital, sml, digit);
    }

    return 0;
}