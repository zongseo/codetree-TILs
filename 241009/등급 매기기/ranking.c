#include <stdio.h>

int main() {
    // 시험점수에 따라 등급을

    // 90점 이상을 A,

    // 80점 이상을 B,

    // 70점 이상을 C,

    // 60점 이상을 D,

    // 60점 미만을 F 라고 합니다.

    // 점수를 입력받아 등급을 출력하는 프로그램을 작성해주세요.

    int n;
    scanf("%d", &n);

    if(n >= 90){
        printf("A");
    } else if(n >= 80){
        printf("B");
    } else if(n >= 70){
        printf("C");
    } else if(n >= 60){
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}