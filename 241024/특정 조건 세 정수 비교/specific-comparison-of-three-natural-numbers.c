#include <stdio.h>

int main() {
    // 3개의 정수를 입력 받아 첫 번째 수가 세 정수의 최솟값과 일치한다면 1 아니면 0을 출력하고, 
    // 세 개의 수가 모두 같으면 1 아니면 0 을 출력하는 프로그램을 작성해주세요.
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && a < c){min = a;}
    else if(b < a && b < c){min = b;}
    else if(c < a && c < b){min = c;}

    if(min == a){printf("1 ");}
    else {printf("0 ");}

    if(a == b && b == c){printf("1");}
    else{printf("0");}
    return 0;
}