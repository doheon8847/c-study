#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1() //함수 f1 생성
{
	int a[2][3] = { {4,5,6},{7,8,9} };
	/*a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;*/
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("==================\n");
}
void f2() {
	int b[2][3];
	int totalsize = sizeof(b);
	printf("%d\n", totalsize);
	int bsize = sizeof(b[0]);
	printf("%d\n", bsize);
	printf("%d\n", sizeof(b[0][0]));
	printf("%d\n", sizeof(b) / sizeof(b[0]));
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0]));
	printf("====================\n");
}
void arrPrint(int k[2][3])
{
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%2d", k[i][j]);



		}
		printf("\n");
	}
}
void f3() {
	int a[2][3] = { {1,2,3},{4,5,6} };
	arrPrint(a);
	int b[2][3] = { {1},{4} };
	arrPrint(b);
	int c[2][3] = { {1,2} };
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 };
	arrPrint(d);
	int e[2][3] = { 1,2,3,4 };
	arrPrint(e);
	int f[2][3] = { 1,2 };
	arrPrint(f);
	int g[2][3] = { 0 };
	arrPrint(g);
}





int main(void) {
	//f1();
	//f2();
	f3();


	return 0;
}
