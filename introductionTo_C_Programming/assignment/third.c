/*
// Count Before One
#include <stdio.h>

int count_before_one(int ara[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int count = count_before_one(ara, n);
    printf("%d\n", count);
    
    return 0;
}

int count_before_one(int ara[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(ara[i] == 1) break;
        else count++;
    }
    return count;
}

// Is Palindrome
#include <stdio.h>

int strLen(char str[]);
int is_palindrome(char str[]);

int main()
{
    char s[1001];
    scanf("%s", s);

    if(is_palindrome(s)) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}

int strLen(char ch[]) {
    int len = 0, i = 0;
    while(ch[i] != '\0') {
        len++;
        i++;
    } 
    return len;
}

int is_palindrome(char str[]) {
    int n = strLen(str);
    for(int i = 0; i <= n/2; i++) {
        if(str[i] != str[n-i-1]) return 0;
    }
    return 1;
}

// Even and Odd
#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    int ev = 0, od = 0;
    for(int i = 0; i < n; i++) {
        if(ara[i] % 2) od++;
        else ev++;
    }

    printf("%d %d\n", ev, od);
}

int main()
{
    odd_even();

    return 0;
}


// Pattern-2
#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n-1;
    k = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= s; j++) printf(" ");
        for(int j = k; j >= 1; j--) {
            printf("%d", j);
        }
        s--; k++;
        printf("\n");
    }

    return 0;
}

// Pattern-1
#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    k = 1;
    s = n-1;
    for(int i = 1; i <= (2*n)-1; i++) {
        for(int j = 1; j <= s; j++) printf(" ");
        for(int j = 1; j <= k; j++) {
            if(i%2) printf("#");
            else printf("-");
        }
        if(i < n) {
            s--;
            k += 2;
        }
        else {
            s++;
            k -= 2;
        }
        printf("\n");
    }

    return 0;
}*/