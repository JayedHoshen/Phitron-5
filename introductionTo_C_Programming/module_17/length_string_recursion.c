#include <stdio.h>

int strlength(char *s, int i) {
    if(s[i] == '\0') return 0;
    int l = strlength(s, i+1);
    return l+1;
}

int main()
{
    char s[1000001];
    scanf(" %[^\n]", s);

    int len = strlength(s, 0);

    printf("%s = %d\n", s,  len);

    return 0;
}