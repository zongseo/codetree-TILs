#include <stdio.h>

int main() {
    // n만큼의 돈으로 살 수 있는 물건 중 가장 비싼 물건을 출력하는 프로그램을 작성해보세요.
    // 물건   가격

    // book  3000
    // mask  1000
    int finance, book=3000, mask=1000;
    scanf("%d", &finance);

    if(finance >= book){
        printf("book");
    } else if(finance >= mask){
        printf("mask");
    } else {
        printf("no");
    }
    return 0;
}