#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, coun = 0, i;
    char name[11], inc[] = "++X", dec[] = "--X", afin[] = "X++", afde[] = "X--";

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        gets(name);

        if(strcmp(name, inc) == 0)
            coun++;
        else if(strcmp(name, dec) == 0)
            coun--;
        else if((strcmp(name, afin) == 0) && (i < n))
            coun++;
        else if((strcmp(name, afde) == 0) && (i < n))
            coun--;
    }

    printf("%d\n", coun);

    return 0;
}
