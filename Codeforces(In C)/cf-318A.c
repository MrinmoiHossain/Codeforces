#include <stdio.h>

int main(void)
{
    long long int n, k;

    scanf("%lld %lld", &n, &k);

    if(n % 2 != 0){
        if(k <= n / 2 + 1)
            printf("%lld\n", 2 * k - 1);
        else
            printf("%lld\n", 2 * (k - n / 2 - 1));
    }
    else{
        if(k <= n / 2)
            printf("%lld\n", 2 * k - 1);
        else
            printf("%lld\n", 2 * (k - n / 2));
    }

    return 0;
}
