#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 3; i++) {
        if (i == 2)
            continue;
        sum += i;
    }
    printf("continue 결과는 %d\n", sum);
    printf("\n\n");

    int num = 1;
    for (int i = 1; ; i++) { //조건식이 없음
        num = num * i;
        if (i > 3)
            break;
    }
    printf("break문제 결과는 %d\n", num);
    return 0;
}