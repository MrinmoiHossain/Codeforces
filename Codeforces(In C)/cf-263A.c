#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, j, row, column, arr[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == 1){
                row = i + 1;
                column = j + 1;
            }
        }
    }

    printf("%d\n", abs(3 - row) + abs(3 - column));

    return 0;
}
