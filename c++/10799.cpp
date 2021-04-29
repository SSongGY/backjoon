#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
	char ps[100000];
	stack<int> st;
	int count = 0;
	scanf("%s", ps);
	for (int i = 0; ps[i] != NULL; i++) {
		if (ps[i] == '(') {
			st.push(i);
		}
		if (ps[i] == ')') {
			if (i - st.top() == 1) { 
				st.pop();
				count += st.size();
			}
			else {
				st.pop();
				count += 1;
			}
		}
	}
	printf("%d", count);
	return 0;
}
