#include <stdio.h>

int main(void)
{
    int n, i, mishka = 0, chris = 0, m, c;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &m, &c);

        if(m > c)
            mishka++;
        else if(m < c)
            chris++;
    }

    if(mishka > chris)
        printf("Mishka\n");
    else if(mishka < chris)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");

    return 0;
}
