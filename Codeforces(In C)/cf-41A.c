#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101], t[101];
    int i, j, count = 0;

    gets(s);
    gets(t);

    if(strlen(s) != strlen(t))
        printf("NO\n");
    else{
        for(i = 0; i < strlen(t); i++){
            if(t[i] == s[strlen(s) - i - 1])
                count++;
        }
        if(count == strlen(t))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
// !strcmp(t[i], s[strlen(s) - i - 1])
