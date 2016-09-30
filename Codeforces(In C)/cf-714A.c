#include <stdio.h>
#include <math.h>

long long int max(long long int a, long long int b);
long long int min(long long int c, long long int d);

int main(void)
{
    long long int l1, r1, l2, r2, k, l, r;

    scanf("%lld %lld %lld %lld %lld", &l1, &r1, &l2, &r2, &k);

    l = max(l1, l2);
    r = min(r1, r2);


    if(l > r)
        printf("0\n");
    else if((l <= r) &&(r >= k && k >= l))
        printf("%lld\n", r - l);
    else
        printf("%lld\n", r - l + 1);

    return 0;
}

long long int max(long long int a, long long int b)
{
    if(a > b)
        return a;
    else
        return b;
}

long long int min(long long int c, long long int d)
{
    if(c > d)
        return d;
    else
        return c;
}
