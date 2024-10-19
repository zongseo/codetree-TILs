#include <stdio.h>

int main() {
    // 정수 a의 값과 정수 b, c, d, e의 값이 주어질 때, 
    // 정수 a가 나머지정수와 비교해서 크기가 크다면 1을, 
    // 크지 않다면 0을 출력하는 프로그램을 작성해보세요.
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d \n%d \n%d \n%d", a>b, a>c, a>d, a>e);
    return 0;
}