"""
1931번 : 회의실 배정
문제에서 필요한건 뒤자리 시간과 앞자리 시간이 연속적으로 배치 가능하냐를 따지게 된다
그렇다면 최대한 많은 회의를 넣으려면 어떻게 해야할까? 시작시간이 빠른 것을 고르는것도 맞지만 끝나는 시간까지 짧다면 더 좋을 것이다
그렇기에 어떻게 정렬을 해야는지를 고민하는 것이 핵심이다
조금 생각해보면 뒤에 끝나는 시간으로 정렬한다면 정렬된 첫번째를 1번 수업으로 정하면 되지만 만약 뒤에 끝나는 시간이 같은것이 있다면 시작이
더 빠른 강의를 선정하면 된다
"""
import sys
N = int(sys.stdin.readline())
time = []
for _ in range(N):
    time.append(list(map(int,sys.stdin.readline().split())))
time = sorted(time, key=lambda x: (x[1],x[0]))
pivot, cnt = 0, 0
for start, end in time:
    if pivot <= start:
        cnt += 1
        pivot = end
print(cnt)