#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // mm-dd-yyyy 모양의 날짜 정보를 입력받아 yyyy.mm.dd 형식으로 출력하는 프로그램을 작성해보세요.
    int y, m, d;
    scanf("%d-%d-%d", &m, &d, &y);
    printf("%d.%d.%d", y, m, d);

    return 0;
}