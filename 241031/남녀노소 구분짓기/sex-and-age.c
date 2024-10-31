#include <stdio.h>

int main() {
    // 성별에 대해 남자는 숫자 0, 여자는 숫자 1로 나타내기로 하고, 19세 이상을 성인이라고 합시다.
    // 성별(숫자 0 또는 1)과 나이를 입력받아 MAN(성인남자), WOMAN(성인여자), BOY(미성년남자), 
    // GIRL(미성년여자)을 구분하여 출력하는 프로그램을 작성해주세요.

    int sex, age;
    scanf("%d %d", &sex, &age);
    
    if(age >= 19){
        if(sex == 0){
            printf("MAN");
        } else {
            printf("WOMAN");
        }
    } else {
        if(sex == 0){
            printf("BOY");
        } else {
            printf("GIRL");
        }
    }


    return 0;
}