#include <stdio.h>

char capital_to_small(char ch) {
    if(ch >= 'A' && ch <= 'Z') return (ch+32);
}

int main()
{
    char cha;
    scanf("%c", &cha);

    printf("%c\n", capital_to_small(cha));

    return 0;
}