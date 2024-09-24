#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 두 정수 a, b를 입력받아 두 정수의 합과 평균을 구해 출력하는 프로그램을 작성해보세요
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d %.1lf", num1+num2, (double)(num1+num2)/2);

    return 0;
}