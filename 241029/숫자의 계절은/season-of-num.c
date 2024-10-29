#include <stdio.h>

int main() {
    // 몇 월인지를 입력받아, 어떤 계절인지를 출력하는 프로그램을 작성해보세요.

    // 3~5월이 봄, 6~8월이 여름, 9~11월이 가을, 12~2월이 겨울이라 가정합니다.
    int m;
    scanf("%d", &m);
    if(m<=2){
        printf("Winter");
    } else if(m<=5) {
        printf("Spring");
    } else if(m<=8) {
        printf("Summer");
    } else if(m<= 11) {
        printf("Fall");
    } else {
        printf("Winter");
    }
    return 0;
}