#include <stdio.h>

long int myFunction(int a);

int main(void)
{
    int w, k;
    long int n;

    scanf("%d %ld %d", &k, &n, &w);

    if(myFunction(w) * k < n)
        printf("0\n");
    else
        printf("%ld\n", myFunction(w) * k - n);

    return 0;
}

long int myFunction(int a)
{
    if(a == 1)
        return 1;
    else
        return a + myFunction(a - 1);
}
