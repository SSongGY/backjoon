"""
11047번 : 동전 0
주어진는 순서대로 입력을 받고 잔액이 0이 될때까지 순차적으로 가능한 만큼 차감해주면서 갯수를 세면 된다
하지만 1개씩 다 세면 시간초과가 되니까 최대한 한번에 계산하기 위해서 나눠서 진행한다
"""
nk = input().split(' ')
n, k = int(nk[0]), int(nk[1])
coin, cnt = [], 0
for _ in range(n):
    c = int(input())
    coin.append(c)
i = len(coin)-1
while k != 0:
    num = int(k/coin[i])
    if num > 0:
        cnt += num
        k -= num*coin[i]
    else:
        i -= 1
print(cnt)