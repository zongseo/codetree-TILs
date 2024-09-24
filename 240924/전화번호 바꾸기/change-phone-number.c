#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 010-xxxx-yyyy 형태의 전화번호를 입력받아 
    // 앞 4자리와 뒤 4자리를 바꾸어 출력하는 프로그램을 작성해보세요.
    int f, m, b;
    scanf("%d-%d-%d", &f, &m, &b);
    printf("010-%d-%d", b, m);
    return 0;
}