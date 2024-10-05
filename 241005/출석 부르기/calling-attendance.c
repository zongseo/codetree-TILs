#include <stdio.h>

int main() {
    // A반의 출석번호 1번은 John, 2번은 Tom, 3번은 Paul입니다.
    // 번호를 입력하면 해당하는 학생의 이름을 출력하는 프로그램을 작성하세요.
    int num;
    scanf("%d", &num);

    if(num == 1){
        printf("John");
    } else if(num == 2){
        printf("Tom");
    } else if(num == 3){
        printf("Paul");
    } else {
        printf("Vacancy");
    }

    return 0;
}