#include <stdio.h>

int main() {
    // 첫 번째 줄에 a에 대한 정보를 출력합니다. 
    // a가 10보다 작거나 20 보다 크다면 yes를, 아니라면 no를 출력합니다.
    int a;
    scanf("%d", &a);
    (a<10 || a>20)?printf("yes"):printf("no");
    return 0;
}