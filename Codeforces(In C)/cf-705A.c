#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 != 0)
            printf("I hate ");
        if(i % 2 == 0)
            printf("I love ");
        if(i == n)
            printf("it\n");
        if(i < n)
            printf("that ");
    }

    return 0;
}
