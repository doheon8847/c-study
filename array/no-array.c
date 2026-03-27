#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;      
    int sum;          
    double avg;       

    printf("점수를 입력하세요: ");
    scanf("%d", &a);
  
    printf("점수를 입력하세요: ");
    scanf("%d", &b);

    printf("점수를 입력하세요: ");
    scanf("%d", &c);

    sum = a + b + c;
    avg = sum / 3.0;   

    printf("합계: %d\n", sum);
    printf("평균: %.2f\n", avg);  

    return 0;
}