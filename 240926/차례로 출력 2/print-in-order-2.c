#include <stdio.h>

int main() {
    // 1235부터 1245까지 출력하는 프로그램을 작성해보세요.
    int a=1235, b=1245;
    for(int index=0; index<=(b-a); index++){
        printf("%d ", a+index);
    }
    return 0;
}