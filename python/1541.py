"""
1541번 : 잃어버린괄호
결국 문제에서 원하는 건 - 마다 분류를 하여 괄호로 묶어 계산을 하면 최솟값이 나올 수 있다
'-'문자로 나눈후 각각의 리스트 원소들을 합친 후 가장 처음 값에서 처음을 제외한 나머지 합을 다 뺴주면 된다.
"""
import sys
susik = sys.stdin.readline().split('-')
result = 0
for i, num in enumerate(susik):
    temp = list(map(int,num.split('+')))
    if i != 0:
        result -= sum(temp)
    else:
        result += sum(temp)
print(result)