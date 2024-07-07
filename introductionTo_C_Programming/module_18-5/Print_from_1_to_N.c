#include <stdio.h>

void printRec(int i) {
    if(i == 0) return;
    printRec(i-1);
    printf("%d\n", i);
}
 
int main()
{
    int n;
    scanf("%d", &n);

    printRec(n);

    return 0;
}