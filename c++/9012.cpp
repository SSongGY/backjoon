#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;
string VPS(char ps[]) {
	stack<char> st;
	for (int i = 0; ps[i] != NULL; i++) {
		if (ps[i] == '(') {
			st.push(ps[i]);
		}
		else if (ps[i] == ')') {
			if (st.empty()) {
				return "NO";
			}
			st.pop();
		}
	}
	if (st.size() != 0) {
		return "NO";
	}
	else {
		return "YES";
	}
}
int main() {
	char ps[50];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", ps);
		printf("%s\n", VPS(ps).c_str());
	}
	return 0;
}