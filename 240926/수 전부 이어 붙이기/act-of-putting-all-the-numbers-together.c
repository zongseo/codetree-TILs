#include <stdio.h>
#include <string.h>

int main() {
    // n개의 수가 주어지면, 모든 수를 이어붙이고 5개 숫자씩 나누어 출력하는 프로그램을 작성해보세요.
    int n;
    scanf("%d", &n);
    int number[n], len;
    
    // 숫자를 저장할 문자열
    char result[1000*30]; // 결과를 저장할 문자열 배열, 적절한 크기 할당
    char buffer[1000]; // 각 숫자를 문자열로 변환할 때 사용할 임시 버퍼

    // 빈 문자열로 초기화
    result[0] = '\0';
    
    for(int index=0; index<n; index++){
        scanf("%d", &number[index]);
    }
    for(int index=0; index<n; index++){
        sprintf(buffer, "%d", number[index]);
        strcat(result, buffer); // "10"을 result에 붙임
    }
    
    len = strlen(result);
    for(int index=0; index<len; index+=5){
        // 5개씩 출력 (i부터 시작해서 5개 출력, 남은 부분이 5개 미만일 때 대비)
        printf("%.5s\n", &result[index]);
    }
    
    return 0;
}