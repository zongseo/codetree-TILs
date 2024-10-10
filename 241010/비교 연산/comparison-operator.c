#include <stdio.h>

int main() {
    // 두 정수 a, b를 입력받아 다음 조건들이 각각 참인지 거짓인지를 판단하는 프로그램을 작성해보세요.

    // a가 b보다 같거나 큰가?
    // a가 b보다 큰가?
    // b가 a보다 같거나 큰가?
    // b가 a보다 큰가?
    // a와 b가 같은가?
    // a와 b가 다른가?
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a >= b);
    printf("%d\n", a > b);
    printf("%d\n", a <= b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);

    return 0;
}