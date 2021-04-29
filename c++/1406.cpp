#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char> left, right;
	char arr[100000];
	string op;
	int num;
	scanf("%s", arr);
	for (int i = 0; arr[i] != NULL; i++) {
		left.push(arr[i]);
	}
	scanf("%d",&num);
	getchar();
	for(int i=0; i<num; i++) {
		getline(cin, op);
		if (op[0] == 'L') {
			if(!left.empty()){
				right.push(left.top());
				left.pop();
			}
		}
		else if (op[0] == 'D') {
			left.push(right.top());
			right.pop();
		}
		else if (op[0] == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (op[0] == 'P') {
			left.push(op[2]);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		printf("%c",right.top());
		right.pop();
	}
	return 0;
}