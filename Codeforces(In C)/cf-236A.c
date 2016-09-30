#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[101];
    int cont = 0, i, j;

    gets(name);

    for(i =  0; i < strlen(name); i++){
        for(j = i + 1; j < strlen(name); j++){
            if(name[i] == name[j]){
                cont++;
                break;
            }
        }
    }

    if((strlen(name) - cont) % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");


    return 0;
}
