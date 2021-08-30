"""
5585번 : 거스름돈
문제를 보면 주어진 숫자 1000미만의 수가 주어지면 1000에서 그 돈을 뺀 나머지를
500,100,50,10,5,1 순으로 적은 동전의 갯수로 출력해줘야 한다
쉽게 생각해보면 500에서 1까지 순차적으로 뺼수 있는 만큼 제거하면서 동전 갯수를 세면된다
"""
import sys
N = int(sys.stdin.readline())
receive = 1000 - N
cnt, coin = 0, [500,100,50,10,5,1]
for c in coin:
    cnt += receive // c
    receive = receive % c
print(cnt)