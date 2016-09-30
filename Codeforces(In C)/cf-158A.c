#include <stdio.h>

int main(void)
{
    int n, k, i, count = 0, num;

    scanf("%d %d", &n, &k);
    int arr[n];

    for(i = 0; i < n;  i++){
        scanf("%d", &arr[i]);
        if(i + 1 == k)
            num = arr[i];
    }
    for(i = 0; i < n; i++)
        if(arr[i] >= num && arr[i] > 0)
            count++;

    printf("%d\n", count);

    return 0;
}
