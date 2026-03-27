#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	do {
		printf("입력(1. 새로 만들기 2.파일열기 3.파일 담기");
		scanf("%d", &i);

	} while (i > 1) || (i < 3);

	printf("선택한 메뉴는? : %d", i);

	return 0;

}