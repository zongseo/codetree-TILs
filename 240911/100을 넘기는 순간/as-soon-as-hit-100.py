total_sum = 0  # 누적 합
count = 0  # 입력된 숫자의 개수
n = int(input())

while True:
    user_input = input().split()  # 입력값을 띄어쓰기로 구분하여 받음
    numbers = list(map(int, user_input))  # 입력값을 정수로 변환

    for num in numbers:
        total_sum += num  # 누적 합 계산
        count += 1  # 숫자 개수 증가

        if num >= 100:  # 100 이상의 값이 나오면 종료
            average = total_sum / count  # 평균 계산
            print(total_sum)
            print(f"{average:.1f}")
            break

        if count == n:
            average = total_sum / count  # 평균 계산
            print(total_sum)
            print(f"{average:.1f}")
            break

    else:
        continue  # for 루프가 정상적으로 끝났을 때는 while을 계속 수행
    break  # 100 이상의 값이 나왔을 때 종료