#include <stdio.h>

int main() {
    // 두 개의 정수를 입력받아 큰 수에서 작은 수를 
    // 뺀 차를 출력하는 프로그램을 작성해주세요.
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a>b){
        c = a-b;
    } else {
        c = b-a;
    }
    printf("%d", c);
    return 0;
}