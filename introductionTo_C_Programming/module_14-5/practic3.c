#include <stdio.h>

int char_to_ascii(char ch) {
    return ch;
}

int main()
{
    char c; 
    scanf("%c", &c);

    int val = char_to_ascii(c);

    printf("%d\n", val);

    return 0;
}