#include <stdio.h>

int main(void)
{
    char a, n;

    scanf("%c%c", &a, &n);

    if(a == 'a' || a == 'h'){
        if(n == '1' || n == '8')
            printf("3\n");
        else
            printf("5\n");
    }
    else if(a >= 'b' || a <= 'g'){
        if(n == '1' || n == '8')
            printf("5\n");
        else
            printf("8\n");
    }


    return 0;
}
