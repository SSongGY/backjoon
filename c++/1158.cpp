#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;
int main() {
	int N, K;
	queue<int> q;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	printf("<");
	while (q.size() != 1) {
		for (int i = 0; i < K-1; i++) {
			if (q.empty()) {
				break;
			}
			q.push(q.front());
			q.pop();
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>", q.front());
	q.pop();
	return 0;
}