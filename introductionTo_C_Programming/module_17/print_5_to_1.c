#include <stdio.h>

int j = 1;

void fun(int i) {    
    printf("fnc call %d\n", j++);

    if(i == 0) return;

    printf("%d\n", i);
    
    fun(i-1);
}

int main()
{
    fun(5);

    return 0;
}