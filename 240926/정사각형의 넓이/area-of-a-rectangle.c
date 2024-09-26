#include <stdio.h>

int main() {
    // 한 변의 길이가 n인 정사각형의 넓이를 구하는 프로그램을 작성해보세요.
    // 단, n이 5보다 작다면 tiny 를 출력합니다.
    int n;
    scanf("%d", &n);

    if(n < 5){
        printf("%d\ntiny", n*n);
    } else {
        printf("%d", n*n);
    }
    return 0;
}