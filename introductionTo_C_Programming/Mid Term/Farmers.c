#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        int m1, m2, d1, d2, r;
        scanf("%d %d %d", &m1, &m2, &d1);

        r = (m1*d1) / (m1+m2);
        d2 = d1 - r;

        printf("%d\n", d2);
    }

    return 0;
}