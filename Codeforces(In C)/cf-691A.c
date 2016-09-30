#include <stdio.h>

int main(void)
{
    int n, i, count = 0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] == 0)
            count++;
    }
    if(n == 1){
        if(arr[0] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else{
        if(count == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
