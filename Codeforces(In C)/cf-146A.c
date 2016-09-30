#include <stdio.h>

int main(void)
{
    int n, sum = 0, i, sum1 = 0, cont = 0;

    scanf("%d", &n);
    getchar();

    char arr[n];

    for(i = 0; i < n; i++){
        scanf("%c", &arr[i]);

        if(arr[i] == '4' || arr[i] == '7')
            cont++;
        if(i < n / 2)
            sum += (arr[i] - '0');
        if(i >= n / 2)
            sum1 += (arr[i] - '0');
    }


    if((sum == sum1) && (cont == n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
