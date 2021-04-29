#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.size();
	vector<string> v(len);
	for (int i = 0; i < len; i++) {
		v[i] = s.substr(i);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < len; i++) {
		cout << v[i] << '\n';
	}
	return 0;
}