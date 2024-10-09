#include <stdio.h>

int main() {
    // 영문 대문자를 입력받아

    // 'S'이면 Superior,

    // 'A'이면 Excellent,

    // 'B'이면 Good,

    // 'C'이면 Usually,

    // 'D'이면 Effort,

    // 그 외 문자이면 Failure 라고 출력하는 프로그램을 작성해주세요.
    char s;
    scanf("%c", &s);

    if(s == 'S'){
        printf("Superior");
    } else if(s == 'A'){
        printf("Excellent");
    } else if(s == 'B'){
        printf("Good");
    } else if(s == 'C'){
        printf("Usually");
    } else if(s == 'D'){
        printf("Effort");
    } else {
        printf("Failure");
    }
    
    return 0;
}