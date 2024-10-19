#include <stdio.h>

int main() {
    // 양쪽눈의 시력을 실수(real number)로 입력받아 모두 1.0 이상이면 High, 
    // 모두 0.5 이상이면 Middle, 아니면 Low라고 출력하는 프로그램을 작성해주세요.
    float a, b;
    scanf("%f %f", &a, &b);
    if(a >= 1.0 && b >= 1.0){
        printf("High");
    } else if(a >= 0.5 && b >= 0.5){
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}