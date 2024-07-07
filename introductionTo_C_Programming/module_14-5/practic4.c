#include <stdio.h>

char small_to_capital(char ch) {
    return (ch-32);
}

int main()
{
    char ch; 
    scanf("%c", &ch);

    printf("%c\n", small_to_capital(ch));

    return 0;
}