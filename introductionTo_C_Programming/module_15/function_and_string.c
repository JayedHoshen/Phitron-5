#include <stdio.h>
#include <string.h>

void fun(char *ar) {
    printf("len = %d\n", strlen(ar));
}

int main()
{
    char ar[20] = "Hello";
    
    fun(ar);

    return 0;
}