#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int num, i;
	int sum = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	for (i = 1;i <= num;i++)
	{

		sum = sum + i;
	}
	printf("합계:%d", sum);*/

	//int i, j; // i : 구구단의 숫자 , j : 반복문에서 곱할 숫자 
	//printf("원하는 단을 입력하세요: "); // 단 입력 
	//scanf("%d", &i); // 정수를 입력받고 i에 저장
	//printf("< %d 단 >\n", i); // 입력받은 단을 출력
	//for (j = 1; j <= 9;j++) // 1부터 9까지 반복하면서 구구단 출력
	//{
	//	printf("%d * %d = %d\n", i, j, i * j); // i * j의 결과에 맞게 출력 


	//}

	int i, j;


	for (i = 2; i <= 9; i++) {
		for (j = 1;j <= 9;j++)
		{
			printf("%d * %d = %-3d\n", i, j, i * j);
			//3d -> 3자리
			//원래는 오른쪽 정렬
			//- 붙이면 왼쪽 정렬

		} // j for 끝
	}// i for 끝

	return 0;
} // main 끝