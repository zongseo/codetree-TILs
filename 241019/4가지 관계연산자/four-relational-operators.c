#include <stdio.h>

int main() {
    // 두 개의 정수를 입력받아서 4가지 관계연산자의 결과를 출력하는 프로그램을 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a>=b);
    printf("%d\n", a>b);
    printf("%d\n", a<=b);
    printf("%d", a<b);

    return 0;
}