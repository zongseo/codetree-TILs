#include <stdio.h>

int main() {
    // 정수 2개를 입력받아 두 값중 최댓값을 출력하는 프로그램을 작성해보세요.
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = a>b ? a : b;
    printf("%d", max);
    return 0;
}