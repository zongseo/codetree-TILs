#include <stdio.h>

int main() {
    // 2개의 정수 a, b를 입력받아 첫 번째 수의 짝홀 여부와,
    // 두 번째 수의 짝홀 여부를 출력하는 프로그램을 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    if(a % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }

    if(b % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
    return 0;
}