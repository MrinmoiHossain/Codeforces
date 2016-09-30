#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i, one = 0, two = 0, taxi = 0;

    scanf("%d", &n);
    int s[n];

    for(i = 0; i < n; i++){
        scanf("%d", &s[i]);

        if(s[i] == 1)
            one++;
        else if(s[i] == 2)
            two++;
        else{
            taxi++;
            if(s[i] == 3)
                one--;
        }
    }
    if(two % 2 == 0){
        two /= 2;
        taxi += two;
    }
    else{
        two /= 2;
        taxi += two + 1;
        one -= 2;
    }
    if(one > 0){
        if(one <= 4)
            taxi++;
        else if(one % 4 == 0){
            one /= 4;
            taxi += one;
        }
        else{
            one /= 4;
            taxi += one + 1;
        }
    }

    printf("%d\n", taxi);

    return 0;
}
