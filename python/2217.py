"""
2217번 : 로프
문제에서는 각 로프가 버틸수 있는 최대 무게를 구하라고 한다
잘 생각해보면 각 로프가 버틸수 있는 무게 중 가장 작은 값이 기준점으로 작용하여 사용될 수 있는 무게를 계산하게 된다
하지만 주의할 점이 꼭 모든 로프를 사용하지 않아도 된다라는 의미에서 가장 작은 값 * 전체로프갯수로 계산된 전체 무게보다 가장작지 않은값*일정로프갯수가 더 좋을 수 있다
따라서 무게를 정렬 후 로프의 값이 바뀌는 경우에만 해당 로프의 무게 * 남은 로프 갯수의 값을 다 계산해보고 그중에서 가장 큰 값을 찾으면 된다
"""
import sys
N = int(sys.stdin.readline())
lope = []
for _ in range(N):
    lope.append(int(sys.stdin.readline()))
lope = sorted(lope)
weight, pivot = [], 0
for i, l in enumerate(lope):
    if pivot != l:  # N개를 한번만 읽으면서 동시에 lope의 값이 바뀌면 바뀐 지점부터 끝까지 들수 있는 무게를 구함
        pivot = l
        weight.append(pivot*(N-i))
print(max(weight))  # 구한 무게중에서 최댓값을 출력