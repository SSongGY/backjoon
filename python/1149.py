"""
1149번 : RGB 거리
문제를 읽어보면 주어진 rgb거리의 최소 색칠 비용을 묻는다
우선 확인할건 1000개의 집이 max값이라서 행렬상 1000x3이 최대이며 주어진 n에 따라 생성해주면 된다
비용을 구하면 되는데 주어진 문제에서 저 색칠 조건들을 살펴보면 기본적으로 비용 = 이전 색칠 비용의 합 + 현재 선택 비용정도가 된다
rgb행렬이 존재하고 dp인 mem라는 공간이 존재 했을 때, 기본적인 비용(mem) = 이전까지 비용(mem) + 현재의 최소(rgb) 정도로 적어볼 수 있지만
문제에서 언급하는 조건에 따라 예외가 발생하게 된다. 쉽게 말하면 무조건 최솟값만을 더해도 될것 같지만 index 조건에 의해 시작에 따라 최솟값이 달라진다
그래서 처음 집을 r,g,b 각각의 색으로 칠했을 경우에 대해 다 고려해봐야 한다
따라서 변형된 식은 r,g,b를 각각 0,1,2로 매칭 하였을 때,
mem[i][0] = min(mem[i - 1][1], mem[i - 1][2]) + rgb[i][0]
mem[i][1] = min(mem[i - 1][0], mem[i - 1][2]) + rgb[i][1]
mem[i][2] = min(mem[i - 1][0], mem[i - 1][1]) + rgb[i][2]
식으로 적을 수 있으며 저 식을 N까지 돌려주고 나서의 min을 구해주면 된다.
"""
rot = int(input())
mem, rgb = [[0,0,0] for _ in range(rot)], []    # 각 메모리 선언
for _ in range(rot):    # rgb 행렬 만들기
    num = input().split(' ')
    num = [int(x) for x in num]
    rgb.append(num)
for i in range(rot):    # 주어진 조건에 따라 동적계획법 구현
    mem[i][0] = min(mem[i - 1][1], mem[i - 1][2]) + rgb[i][0]
    mem[i][1] = min(mem[i - 1][0], mem[i - 1][2]) + rgb[i][1]
    mem[i][2] = min(mem[i - 1][0], mem[i - 1][1]) + rgb[i][2]
print(min(mem[rot-1][0],mem[rot-1][1],mem[rot-1][2]))   # 결과 출력