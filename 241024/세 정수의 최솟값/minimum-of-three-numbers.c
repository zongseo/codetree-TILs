#include <stdio.h>

int main() {
    // 3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수 중 최솟값을 출력하는 프로그램을 작성해주세요.
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c){min = a;}
    else if(b<=c && b<=a){min = b;}
    else{min=c;}

    printf("%d", min);
    return 0;
}