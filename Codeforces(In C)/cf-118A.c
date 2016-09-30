#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[101], word[101];
    int i, k, j = 0;

    gets(word);

    for(i = 0; i < strlen(word); i++){
        if(word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' || word[i] == 'Y' || word[i] == 'y')
            continue;
        name[j] = word[i];
        j++;
    }
    name[j] = '\0';
    strcpy(name, strlwr(name));
    printf(".");

    for(k = 0; k < strlen(name); k++){
        printf("%c", name[k]);
        if(k < strlen(name) - 1)
            printf(".");
    }
    printf("\n");

    return 0;
}
