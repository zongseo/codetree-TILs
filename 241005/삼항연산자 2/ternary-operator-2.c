#include <stdio.h>

int main() {
    // 정수 a가 주어졌을 때, a가 1이라면 t 를 출력하고, 
    // 1이 아니라면 f 를 출력하는 프로그램 삼항연산자를 사용하여 작성해보세요.
    int a;
    scanf("%d", &a);
    char c = (a==1) ? 't' : 'f';
    printf("%c", c);
    return 0;
}