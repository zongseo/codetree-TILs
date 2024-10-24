#include <stdio.h>

int main() {
    // 정수 a가 주어졌을 때, a가 3의 배수이거나 5의 배수인 경우에는 1을, 
    // 그렇지 않다면 0을 출력하는 프로그램을 작성해보세요.
    int a;
    scanf("%d", &a);
    (a%3==0) || (a%5==0) ? printf("1"):printf("0");
    return 0;
}