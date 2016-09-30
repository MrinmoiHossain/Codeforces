#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[50];
    int i, count = 0;

    gets(num);

    for(i = 0; i < strlen(num); i++)
        if(num[i] == '4' || num[i] == '7')
            count++;

    if(count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
