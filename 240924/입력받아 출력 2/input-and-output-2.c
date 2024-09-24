#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // OOOOOO-OOOOOOO 형식으로 이루어져 있는 주민번호를 입력받아,
    // -를 제외하여 출력하는 프로그램을 작성해보세요.
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%d%d", a, b);

    return 0;
}