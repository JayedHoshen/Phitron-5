#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101], s2[102];
    scanf("%s %s", s1, s2);

    printf("%s %s\n", s1, s2);

    for(int i = 0; i <= strlen(s2); i++) s1[i] = s2[i];

    printf("%s %s\n", s1, s2);

    return 0;
}