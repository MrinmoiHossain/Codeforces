#include <stdio.h>

int main(void)
{
    char p[101];
    int i, count = 0;

    gets(p);

    for(i = 0; p[i]; i++)
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
            count++;

    if(count)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
