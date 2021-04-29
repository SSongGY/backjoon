#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int arr[26];
	for (int i = 0; i < 26; i++){
		arr[i] = -1;
	}
	string s;
	cin >> s;
	for (int i = 0; s[i]; i++) {
		int index = s[i] - 'a';
		if (arr[index] == -1) {
			arr[index] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}