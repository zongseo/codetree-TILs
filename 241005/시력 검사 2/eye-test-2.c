#include <stdio.h>

int main() {
    // 양쪽 눈 시력의 평균값을 실수(real number)로 입력받아 1.0 이상이면 High, 
    // 0.5 이상이면 Middle, 
    // 아니면 Low라고 출력하는 프로그램을 작성해주세요.
    float rn;
    scanf("%f", &rn);
    
    if(rn >= 1.0){
        printf("High");
    } else if(rn >= 0.5){
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}