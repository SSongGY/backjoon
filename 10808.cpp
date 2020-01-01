#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int arr[26] = { 0, };
	string s;
	cin >> s;
	for (int i = 0; s[i]; i++) {
		int index = s[i] - 'a';
		arr[index]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}