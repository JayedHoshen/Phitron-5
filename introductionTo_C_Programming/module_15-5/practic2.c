#include <stdio.h>

int my_len(char s[]) {
    int i = 0, len = 0;
    while(s[i] != '\0') {
        len++;
        i++;
    }

    return len;
}

int main()
{
    char s[1000001];
    scanf("%s", s);

    int len = my_len(s);
    printf("%d\n", len);

    return 0;
}