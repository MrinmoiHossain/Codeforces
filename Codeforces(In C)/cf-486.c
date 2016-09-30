#include <stdio.h>

int main(void)
{
    long long int n, a;

    scanf("%lld", &n);

    if(n % 2 == 0){
        a = n / 2;
        printf("%lld\n", (a * (a + 1)) - (a * a));
    }
    else{
        a = n / 2;
        printf("%lld\n", (a * (a + 1)) - ((a + 1) * (a + 1)));
    }

    return 0;
}
