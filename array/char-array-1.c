* 문자열 ppt -> 5번 7번 9번 슬라이드
// 문자열의 길이를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[30] = "C language"; //문자배열 30자
    int i = 0;//0부터 시작

    while (str[i] != '\0') //만족할 때 반복
                           // i = 다르다 \0은 null 값을 의미
                            // 문자열 내용 끝나는시전 반드시 null이 들어감
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}