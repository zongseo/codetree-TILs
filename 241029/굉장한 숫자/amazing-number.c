#include <stdio.h>

int main() {
    // 자연수 n을 입력받아 n이 굉장한 숫자인지 판단하는 프로그램을 작성해보세요.

    // 굉장한 숫자이기 위해서는 다음 두 조건 중 하나를 만족해야 합니다.

    // 홀수이면서 3의 배수인 수
    // 짝수이면서 5의 배수인 수

    int n;
    scanf("%d", &n);
    if(n%2!=0 && n%3==0){
        printf("true");
    }else if(n%2==0 && n%5==0){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}