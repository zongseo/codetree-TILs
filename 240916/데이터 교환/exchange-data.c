#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;
    int temp, temp2;
    temp = b;
    b = a;
    temp2 = c;
    c = temp;
    a = temp2;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}