#include <stdio.h>

int main(void)
{
    int n, a, b, i, count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);

        if(b - a >= 2)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
