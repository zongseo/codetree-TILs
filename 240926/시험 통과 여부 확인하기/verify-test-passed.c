#include <stdio.h>

int main() {
    // 점수를 입력받아 통과인지, 
    // 통과를 못 했다면 몇 점이 더 필요한지 출력하는 프로그램을 작성해주세요.
    int n;
    scanf("%d", &n);
    if(n >= 80){
        printf("pass");
    } else {
        printf("%d more score", 80-n);
    }
    return 0;
}