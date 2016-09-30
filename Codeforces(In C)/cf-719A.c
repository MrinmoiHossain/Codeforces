#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(arr[n - 1] == 15)
        printf("DOWN\n");
    else if(arr[n - 1] == 0)
        printf("UP\n");
    else if(n == 1)
        printf("%d\n", -1);
    else if(arr[n - 2] > arr[n - 1])
        printf("DOWN\n");
    else
        printf("UP\n");

    return 0;
}
