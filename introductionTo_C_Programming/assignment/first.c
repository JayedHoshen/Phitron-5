#include <stdio.h>

int main()
{
    int tk, reduced;

    scanf("%d", &tk);

    if(tk > 1000) {
        printf("I will buy Punjabi\n");

        reduced = tk - 1000;

        if(reduced >= 500) {
            printf("I will buy new shoes\n"); 
            printf("Alisa will buy new shoes\n");
        }
    }
    else {
        printf("Bad luck!\n");
    }

    return 0;
}