#include <stdio.h>

int main() {
    // 정수 a를 입력 받아 a가 10이상 20 이하인 수인지를 판단하는 프로그램을 작성해보세요.
    int a;
    scanf("%d", &a);
    if(a>=10 && a<=20){
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}