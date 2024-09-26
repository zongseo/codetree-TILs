#include <stdio.h>

int main() {
    // 정수 n이 주어지면, 
    // 10부터 정수 n까지의 합을 출력하는 프로그램을 함수를 이용하여 작성해보세요.
    int n, result;
    scanf("%d", &n);
    result = (10+n)*(n-10+1)/2;
    printf("%d", result);
    return 0;
}