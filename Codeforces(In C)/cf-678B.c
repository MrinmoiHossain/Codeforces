#include <stdio.h>

int main(void)
{
    int y, d = 0, is_leap;

    scanf("%d", &y);

    is_leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);

    do{
        d++;
        if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            d++;
        y++;
        d %= 7;
    }while(d || (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0) != is_leap);

    printf("%d\n", y);

    return 0;
}
// Not solved
