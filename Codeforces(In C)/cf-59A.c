#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    int i, upper = 0, lower = 0;

    gets(word);

    for(i = 0; i < strlen(word); i++){
        if(isupper(word[i]))
            upper++;
        else
            lower++;
    }

    if(upper > lower)
        puts(strupr(word));
    else
        puts(strlwr(word));

    return 0;
}
