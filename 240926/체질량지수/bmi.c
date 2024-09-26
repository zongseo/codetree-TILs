#include <stdio.h>

int main() {
    // 키 h와 몸무게 w가 주어졌을 때, 
    // 체질량지수 b를 계산하고 비만인지 판정하는 프로그램을 작성해주세요.
    int h, w, b;
    scanf("%d %d", &h, &w);
    b = (10000*w)/(h*h);
    if(b >= 25){
        printf("%d\nObesity", b);
    } else {
        printf("%d", b);
    }
    return 0;
}