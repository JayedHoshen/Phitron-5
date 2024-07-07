#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ',') s[i] = ' ';
        else if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        else if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }

    printf("%s\n", s);

    return 0;
}