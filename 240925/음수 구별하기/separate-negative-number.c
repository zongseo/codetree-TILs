#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 정수를 입력받아 출력하고 음수를 구별하는 프로그램을 작성해보세요.
    int a;
    scanf("%d", &a);
    if(a < 0){
        printf("%d\nminus", a);
    }
    else{
        printf("%d", a);
    }
    return 0;
}