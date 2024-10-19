#include <stdio.h>

int main() {
    // A와 B의 수학과 영어의 점수를 입력받아 누가 더 높은지 비교하는 프로그램을 작성해주세요.
    int math_a, eng_a, math_b, eng_b;
    scanf("%d %d %d %d", &math_a, &eng_a, &math_b, &eng_b);
    if(math_a > math_b && eng_a > eng_b){
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}