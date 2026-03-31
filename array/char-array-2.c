#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void) {


    int i;
    char fruits[3][20]; {//5행 10열(0~4행 0~9열)

        for (i = 0; i < 3; i++) {
            printf("과일 이름을 입력하시오: ");
            scanf("%s", &fruits[i]);
            printf("%d 번째 과일은 : %s \n", i, fruits[i]);
        }

        return 0;
    }