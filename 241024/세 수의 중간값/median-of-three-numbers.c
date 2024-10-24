#include <stdio.h>

int main() {
    // 세 수 a, b, c의 값이 주어졌을 때, 
    // b가 a보다 크고 c보다 작다면 1을, 그렇지 않다면 0을 출력하는 프로그램을 작성해보세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (b>a && b<c) ? printf("1") : printf("0");
    return 0;
}