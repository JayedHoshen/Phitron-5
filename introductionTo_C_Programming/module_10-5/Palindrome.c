#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    int ok = 1, i = 0, j = len - 1;

    while(i < j) {
        if(s[i] != s[j]) {
            ok = 0;
            break;
        }
        i++; j--;
    }
    
    if(ok) printf("YES\n");
    else printf("NO\n");

    return 0;
}