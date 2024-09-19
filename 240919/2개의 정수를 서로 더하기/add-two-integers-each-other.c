#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 2개의 정수 a, b를 입력받아 b를 a에 더한 후, 다시 a를 b에 더한 뒤의 결과를 출력하는 프로그램을 작성해보세요.

    // 예를 들어 a = 1, b = 3이었다면

    // b를 a에 더하게 되어 a = 4, b = 3 이 되고
    // 그 이후 a를 b에 더하게 되어 a = 4, b = 7이 됩니다.
    int a, b;
    scanf("%d %d", &a, &b);
    a += b;
    b += a;
    printf("%d %d", a, b);
    return 0;
}