#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while(tc--) {
        long long int m, a, b, c, mul, div, r;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if(m == 0) printf("0\n");
        else {
            mul = a * b * c;
            div = m / mul;
            r = mul * div;
            if(m == r) printf("%lld\n", div);
            else printf("-1\n");
        }     
    }

    return 0;
}