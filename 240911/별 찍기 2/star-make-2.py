user_input1, user_input2 = map(int, input().split(' '))
max_star = int(user_input1 / 2)

match user_input2:
    case 1:
        # 첫 번째 삼각형 (증가하는 부분)
        for i in range(1, max_star+2):  # 1부터 3까지 반복
            for j in range(i):  # i만큼 반복
                print('*', end='')  # end=''로 줄바꿈 없이 출력
            print()  # 줄바꿈

        # 두 번째 삼각형 (감소하는 부분)
        for i in range(max_star, 0, -1):  # 2부터 1까지 역순으로 반복
            for j in range(i):  # i만큼 반복
                print('*', end='')  # end=''로 줄바꿈 없이 출력
            print()  # 줄바꿈

    case 2:
        # 첫 번째 삼각형 (증가하는 부분)
        for i in range(1, max_star+2):  # 1부터 3까지 반복
            for j in range(max_star-i+1, 0, -1):
                print(' ', end='')
            for j in range(i):  # i만큼 반복
                print('*', end='')  # end=''로 줄바꿈 없이 출력
            print()  # 줄바꿈

        # 두 번째 삼각형 (감소하는 부분)
        for i in range(max_star, 0, -1):  # 2부터 1까지 역순으로 반복
            for j in range(max_star-i+1):  # i만큼 반복
                print(' ', end='')
            for j in range(i):
                print('*', end='')  # end=''로 줄바꿈 없이 출력
            print()  # 줄바꿈

    case 3:
        # 첫 번째 삼각형 (증가하는 부분)
        for i in range(max_star+1, 0, -1):  # 1부터 3까지 반복
            for j in range(max_star+1-i):  # i만큼 반복
                print(' ', end='')  # end=''로 줄바꿈 없이 출력
            for j in range(i+i-1):
                print('*', end='')
            print()  # 줄바꿈
        
        for i in range(max_star):
            for j in range(1, max_star-i):
                print(' ',end='')
            for j in range((i+1)*2+1):
                print('*', end='')

            print()

    case 4:
        for i in range(max_star+1):
            for j in range(i):
                print(' ', end='')
            for j in range(max_star+1-i):
                print('*', end='')
            print()

        for i in range(max_star):
            for j in range(max_star):
                print(' ', end='')
            for j in range(i+2):
                print('*', end='')
            print()