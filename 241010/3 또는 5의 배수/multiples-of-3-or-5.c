#include <stdio.h>

int main() {
    // 정수 a가 3의 배수라면 YES를, 아니라면 NO를 출력하고, 
    // 또 5의 배수라면 YES를, 아니라면 NO 출력하는 프로그램을 작성해보세요.
    int a;
    scanf("%d", &a);
    (a%3) == 0 ? printf("YES\n") : printf("NO\n");
    (a%5) == 0 ? printf("YES") : printf("NO");
    return 0;
}