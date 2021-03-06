#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int size;

	scanf("%d", &size);

	vector<int> P(size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &P[i]);
	}

	vector<int> B(size, 0);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i != j && P[i] < P[j]) {
				B[j]++;
			}
			else if (P[i] == P[j]) {
				if (i < j) {
					B[j]++;
				}
			}
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	return 0;
}