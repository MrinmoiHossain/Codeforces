#include <stdio.h>

int main(void)
{
    int x;
    char month[15];

    scanf("%d", &x);
    scanf("%s", month);
    scanf("%s", month);

    if(month[0] == 'w'){
        if(x == 5 || x == 6)
            printf("53\n");
        else
            printf("52\n");
        return 0;
    }
    if(x <= 29)
        printf("12\n");
    else if(x <= 30)
        printf("11\n");
    else
        printf("7\n");

    return 0;
}
