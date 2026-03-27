#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 1;i <= 3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d %d\n", i, j);
		}

	}
	/*int u = 1;
	int w = 1;
	
	while (u <= 3) {
		while (w <= 3)
		{
			printf("%d %d\n", u, w);
			w++;
		}
		u++;
		w = 1;*/
	


	return 0;
}
