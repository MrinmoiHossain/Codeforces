#include <stdio.h>

int main(void)
{
    int n, i, a, b, rank = 0;

    scanf("%d", &n);
    int arr[n - 1];

    for(i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &a, &b);

    for(i = a; i < b; i++)
        rank += arr[i - 1];

    printf("%d\n", rank);

    return 0;
}
