#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    //두 정수 a와 b가 주어질 때, 합 (a+b)를 차 (a−b)로 나눈 값을 반올림하여
    //소수점 둘째 자리까지 출력하는 프로그램을 작성해보세요.

    float a,b;
    scanf("%d %d", &a, &b);
    printf("%.2lf", (a+b)/(a-b));
    return 0;
}