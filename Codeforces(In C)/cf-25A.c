#include <stdio.h>

int main(void)
{
    int n, i, even = 0, odd = 0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(even == 1){
        for(i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    else if(odd == 1){
        for(i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}
