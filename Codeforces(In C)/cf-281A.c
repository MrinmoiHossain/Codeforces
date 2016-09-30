#include <stdio.h>

int main(void)
{
    char name[1001], ne;
    int i;

    gets(name);

    if(name[0] >= 97 && name[0] <= 122){
        printf("%c", name[0] - 32);
        for(i = 1; i < strlen(name); i++){
            printf("%c", name[i]);
        }
        printf("\n");
    }
    else{
        printf("%s\n", name);
    }

    return 0;
}
