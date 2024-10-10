#include <stdio.h>

int main() {
    // 두 개의 정수를 입력 받아 첫 번째 수가 더 작으면 1을, 아니면 0을 출력하고, 
    // 두 개의 수가 같으면 1을, 아니면 0을 출력하는 프로그램을 작성하세요.
    int a, b;
    scanf("%d %d", &a ,&b);
    a < b ? printf("1 ") : printf("0 ");

    a == b ? printf("1") : printf("0");
    return 0;
}