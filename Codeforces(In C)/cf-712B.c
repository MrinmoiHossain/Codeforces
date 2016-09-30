#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char ch[100000];
	int i, x = 0, y = 0;

	gets(ch);

	if(strlen(ch) % 2 == 1)
		printf("%d\n", -1);

	else{
		for(i = 0; i < strlen(ch); i++){
			if(ch[i] == 'U')
				y++;
			else if(ch[i] == 'D')
				y--;
			else if(ch[i] == 'R')
				x++;
			else
				x--;
		}
		printf("%d\n", (abs(x) + abs(y)) / 2);
	}



	return 0;
}
