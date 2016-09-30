#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101], temp;
    int i, j;

    gets(word);

    for(i = 0; i < strlen(word); i += 2){
        for(j = i + 2; j < strlen(word); j += 2){
            if(word[i] > word[j]){
                temp = word[j];
                word[j] = word[i];
                word[i] = temp;
            }
        }
    }

    puts(word);

    return 0;
}
