#include <stdio.h>

int main() {
    // 물의 온도를 정수로 입력받아 0℃ 미만일경우엔 ice, 100℃ 이상일때는vapor,
    // 그 사이일때는 water 라고 출력하는 프로그램을 작성해주세요.
    int water;
    scanf("%d", &water);
    if(water < 0){
        printf("ice");
    } else if(water >= 100){
        printf("vapor");
    } else {
        printf("water");
    }
    return 0;
}