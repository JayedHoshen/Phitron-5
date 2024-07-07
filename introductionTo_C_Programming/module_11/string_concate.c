#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    scanf("%s %s", s1, s2);

    int k = strlen(s1);
    for(int i = 0; i <= strlen(s2); i++) {
        s1[k] = s2[i];
        k++;
    }
    printf("%s %s\n", s1, s2);

    // strcat(s1, s2);
    // printf("\n%s %s\n", s1, s2);

    return 0;
}