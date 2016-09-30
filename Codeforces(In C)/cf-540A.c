#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i, ans = 0;

    scanf("%d", &n);
    char first[n+1], second[n+1];

    scanf("%s %s", first, second);

    for(i = 0; i < n + 1; i++)
        ans += abs((first[i] - '0') - (second[i] - '0')) > 5 ? 10 - abs((first[i] - '0') - (second[i] - '0')) : abs((first[i] - '0') - (second[i] - '0'));

    printf("%d\n", ans);

    return 0;
}
