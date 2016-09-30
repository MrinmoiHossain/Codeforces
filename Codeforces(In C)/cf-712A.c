#include <stdio.h>

int main(void)
{
    int n, i, j;

    scanf("%d", &n);
    int arr[n], avg[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(j = 0; j < n; j++){
        if(j == n - 1)
            printf("%d ", arr[j]);
        else
            printf("%d ", arr[j] + arr[j + 1]);
    }
    printf("\n");

    return 0;
}
