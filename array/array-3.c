#include <stdio.h>

void main() {
	int a[4][3] = { {100,200,300},{10,0,0},{50,100,150},{30,40,0 } };
	int i, j;
	int sum = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		sum = sum + a[i][j];
	}
		printf("\n");




	}
	printf("합계는 :%d ", sum);





	return 0;
}