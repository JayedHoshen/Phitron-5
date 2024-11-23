// two string comparision 
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001];
    scanf("%s %s", s1, s2);

    int i = 0;
    while(1) { 
        if(s1[i] == '\0' && s2[i] == '\0') {
            printf("Two string are equal\n");
            break;
        }
        else if(s1[i] == '\0') {
            printf("First string is smaller\n");
            break;
        }
        else if(s2[i] == '\0') {
            printf("Second string is smaller\n");
            break;
        }

        if(s1[i] == s2[i]) i++;
        else if(s1[i] < s2[i]) {
            printf("First string is smaller\n");
            break;
        }
        else {
            printf("Second string is smaller\n");
            break;
        }
    }

    // applying build in function
    // int cmp = strcmp(s1, s2);

    // if(cmp < 0) printf("First string is smaller\n");
    // else if(cmp > 0) printf("Second string is smaller\n");
    // else printf("Two string are equal\n");

    // printf("%d\n", cmp);

    return 0;
}