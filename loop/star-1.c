#include <stdio.h>

int main() {

    for (int i = 5; i >= 1; i--) // 5부터 1까지 감소
    {
        for (int j = 1; j <= i; j++) // i만큼 출력
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



//for (int i = 5; i >= 1; i--) // 5부터 1까지 감소
//{
//    for (int j = 1; j <= i; j++) // i만큼 출력
//    {
//        printf("*");
//    }
//    printf("\n");
//}


//for (int i = 1; i <= 5; i++)//행 줄
//{
//	for (int j = 1; j <= i; j++)//열(칸)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//return 0;