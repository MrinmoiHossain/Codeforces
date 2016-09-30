#include <stdio.h>

int main(void)
{
    int n1, n2, k1, k2;

    scanf("%d %d %d %d", &n1, &n2, &k1, &k2);

    printf("%s\n", n1 > n2 ? "First" : "Second");

    return 0;
}
