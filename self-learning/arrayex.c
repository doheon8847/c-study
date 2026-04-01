#include <stdio.h>

// 정수 n의 각 자리 숫자의 합을 구하는 함수 (재귀 사용)
int digit(int n) {
    // n이 한 자리 수라면 그대로 반환 (재귀 종료 조건)
    if (n < 10) return n;

    // 마지막 자리(n % 10)를 더하고,
    // 나머지 자리(n / 10)에 대해 재귀 호출
    return (n % 10) + digit(n / 10);
}

int main() {
    // 235의 각 자리 합: 2 + 3 + 5 = 10
    printf("%d", digit(235));

    return 0;
}
//10 