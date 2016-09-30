#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;

    if(sum == 0 || sum % 5 != 0)
        printf("-1\n");
    else
        printf("%d\n", sum / 5);

    return 0;
}
