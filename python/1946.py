"""
1946번 : 신입사원
결국 문제에서 원하는 건 내가 서류나 면접 접수 중에 1개라도 높은것이 있다면 난 통과라는 점에 착안해서 문제를 풀면된다
앞에 라인을 정렬하면 적어도 나보다 같거나 등수가 낮은 지원자들이 내 뒤에 존재하며 이 때 2번째 면접 점수를 비교하여 나보다 등수가 높은것이 있다면 그 지원자를 결과에 추가하면 된다
당연히 정렬한 첫번째 지원자도 결과에 넣어줘야 한다
"""
import sys
t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())
    scores = [] # 점수 받아요
    for _ in range(n):
        scores.append(list(map(int,sys.stdin.readline().split())))
    scores = sorted(scores)
    pivot, result = None, []
    for score in scores:    # 이미 1번째 라인은 정렬되어있어서 무조건 내가 가장 높음, 그래서 뒤에만 봐주면 된다
        if pivot is None:
            pivot = score
            result.append(pivot)
        elif pivot[1] > score[1]:
            result.append(score)
            pivot = score
        else:
            pass
    print(len(result))