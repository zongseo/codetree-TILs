#include <stdio.h>

int main() {
    // 시험 결과가 100점일 경우에만 0등급을, 그 외엔 점수에 따른 등급 1~9를 부여하기로 했다.
    // 오로지 등급 0 만 pass고, 나머지 등급을 받은 사람들의 점수를 failure라고 
    // 출력하는 프로그램을 삼항연산자를 사용하여 작성해보세요.
    int score, grade;

    scanf("%d", &score);
    grade = (score==100) ? 0 : 1;
    printf(grade == 0 ? "pass\n" : "failure\n");
    return 0;
}