#include <stdio.h>

int main()
{
    long long int eyes, mouths, body, min, div;

    scanf("%lld %lld %lld", &eyes, &mouths, &body);

    if(eyes <= 0 || body <= 0) printf("0\n");
    else {
        min = eyes < mouths ? (eyes < body ? eyes : body) : (mouths < body ? mouths : body);

        eyes -= min;
        mouths -= min;
        body -= min;

        if(eyes != 0 || body != 0) {
            div = eyes / 2;
            if(div <= body) {
                min += div;
                printf("%lld\n", min); 
            }
            else {
                min += body;
                printf("%lld\n", min); 
            } 
        }
        else printf("%lld\n", min);     
    }

    return 0;
}