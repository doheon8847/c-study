#include <stdio.h>
int main()
{
	/*int i, cnt = 0;
	for (i = 1;i <= 100;i++) { //1부터 100 반복
		if (i % 3 == 0 && i % 7 == 0) { //if가 3으로도 나누어지고 7로도 나눠지면 공배수
			printf("%d*", i);


		}

	}*/

	int i;
	for (i = 0;i < 10;i++) { //0부터 9까지 반복
		if (i % 3 == 0)continue; //i가 3의 배수이면 0,3,6,9 
		if (i > 5)break;// i가 5 이상이면 (6부터)
		printf("%d", i);




	}




	return 0;
}