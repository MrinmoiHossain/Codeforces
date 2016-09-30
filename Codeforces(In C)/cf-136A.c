#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);
    int arr[n], arr1[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        arr1[arr[i] - 1] = i + 1;

    for(i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    return 0;
}
