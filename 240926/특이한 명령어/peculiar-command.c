#include <stdio.h>

int main() {
    // n개의 명령어가 주어집니다. 
    // 한개의 명령어에는 정수 2개와 소문자 알파벳이 주어집니다. 
    // 명령어에 주어지는 알파벳이 s인 경우에는 앞서 주어진 2개의 정수가 사각형의 가로변 세로변으로 취급하며 사각형의 넓이를 출력하고,
    // 주어지는 알파벳이 t인 경우에는 앞서 주어진 2개의 정수가 삼각형의 밑변과 높이로 취급하며 삼각형의 넓이를 출력합니다. 그 이외의 알파벳이 주어지는 경우에는 아무런 출력값을 내놓지 않습니다.
    // 위 명령어의 조건을 만족하는 프로그램을 작성해보세요.
    int n;
    scanf("%d", &n);
    
    int s[n], t[n];
    float result[n];
    char c[n];
    for(int index=0; index<n; index++){
        scanf("%d %d %c", &s[index], &t[index], &c[index]);
    }

    for(int index=0; index<n; index++){
        if(c[index] == 's'){
            result[index] = s[index] * t[index];
        } else if(c[index] == 't'){
            result[index] = (float)(s[index] * t[index])/2;
        } else {
            result[index] = 0;
        }
    }

    for(int index=0; index < n; index++){
        if(result[index] == (int)result[index] && result[index]){
            printf("%d\n", (int)result[index]);
        } else if(result[index] == (float)result[index] && result[index]){
            printf("%.1lf\n", result[index]);
        }
    }
    return 0;
}