#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[101], word[101];
    int i;

    gets(name);
    gets(word);

    for(i = 0; i < strlen(name); i++){
        if(tolower(name[i]) < tolower(word[i])){
            printf("-1\n");
            break;
        }
        else if(tolower(name[i]) > tolower(word[i])){
            printf("1\n");
            break;
        }

    }
    if(i == strlen(word)){
        printf("0\n");
    }

    return 0;
}
