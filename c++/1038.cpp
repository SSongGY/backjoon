#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	vector<long long> arr;
	int N;
	
	scanf("%d", &N);

	for (int i = 0; i < 10; i++) {
		arr.push_back(i);
	}

	int index = 0;
	while (1) {
		if (arr.size() == index) {
			break;
		}
		for (int i = 0; i < (arr[index] % 10); i++) {
			arr.push_back(arr[index] * 10 + i);
		}
		index++;
	}
	if (arr.size() <= N) {
		printf("-1");
	}
	else
		printf("%lld", arr[N]);
	return 0;
}