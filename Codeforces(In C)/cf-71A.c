#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i, len;
    char name[101];

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        gets(name);

        len = strlen(name);

        if(len < 11)
            printf("%s\n", name);
        else
            printf("%c%d%c\n", name[0], len - 2, name[len - 1]);
    }

    return 0;
}
