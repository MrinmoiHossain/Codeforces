#include <stdio.h>

int main(void)
{
    int n, x, sumX = 0, y, sumY = 0, z, sumZ = 0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d %d", &x, &y, &z);
        sumX += x, sumY += y, sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
