#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ar[10];
	int res;

	printf("숫자 10개 입력: ");
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &ar[i]);
	}
  res = count_even(ar);
  print_cnt(res);
	return 0;
}

int count_even(int ar[10])
{
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 == 0)
			cnt = cnt + 1;
	}

	return cnt;

}

//함수 정의
void print_cnt(int r) { //매개변수 정수형 res > r

	printf("개수는: %d", r);


}