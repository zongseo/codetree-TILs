#include <stdio.h>

int main() {
    // 정수 a를 입력받았을 때 a의 값이 5인 경우엔 A를, 2의 배수인 경우엔 B를 출력하는 프로그램을 작성해보세요. 
    // 둘 다 해당하지 않는 경우에는 아무 값도 출력하지 않습니다.
    int a;
    scanf("%d", &a);
    if(a == 5){
        printf("A");
    }
    if(a % 2 == 0){
        printf("B");
    }
    return 0;
}