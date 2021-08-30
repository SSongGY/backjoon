"""
11399번 : ATM
문제를 읽어보면 결국 전체 인원이 돈을 다 뽑는 시간의 합에 대한 최솟값을 묻는 문제가 된다.
그렇다면 생각해 볼 수 있는게 당연히 가장 적게 걸리는 친구들 순서대로 나열하고 다 더했을 때가 가장 적게 걸린다는 것을 알 수 있다.
"""
rot = int(input())
time = input().split(' ')
time = [int(x) for x in time]
atm_line, result = sorted(time), 0
for i, x in enumerate(atm_line):
    result += sum(atm_line[:i+1])   # i번째 사람까지의 시간들을 결과에 더해주기
print(result)