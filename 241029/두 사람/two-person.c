#include <stdio.h>

int main() {
    // 두 사람에 대한 정보로 나이와 성별이 주어집니다. 
    // 두 사람 중 한 사람이라도 19세이상이면서 남자라면 1을 출력하는 프로그램을 작성해보세요.
    int age_a, age_b;
    char sex_a, sex_b;
    scanf("%d %c %d %c", &age_a, &sex_a, &age_b, &sex_b);
    if(sex_a == 'M' && age_a >= 19){
        printf("1");
    }else if(sex_b == 'M' && age_b >= 19){
        printf("1");
    }else {
        printf("0");
    }
    return 0;
}