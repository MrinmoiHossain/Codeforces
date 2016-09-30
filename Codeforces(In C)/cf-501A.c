#include <stdio.h>

int max(int m, int n);

int main(void)
{
    int a, b, c, d, mis, vas;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    mis = max((3 * a) / 10, a - (a / 250) * c);
    vas = max((3 * b) / 10, b - (b / 250) * d);

    if(mis > vas)
        printf("Misha\n");
    else if(mis < vas)
        printf("Vasya\n");
    else
        printf("Tie\n");

    return 0;
}

int max(int c, int d)
{
    return c > d ? c : d;
}
