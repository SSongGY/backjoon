#include <iostream>
#include <string>
using namespace std;
int main() {
	string arr;
	getline(cin, arr);
	for (int i = 0; arr[i]; i++) {
		if (arr[i] <= 'm' && arr[i] >= 'a') {
			arr[i] += 13;
		}
		else if (arr[i] <= 'z' && arr[i] >= 'n') {
			arr[i] -= 13;
		}
		else if (arr[i] <= 'M' && arr[i] >= 'A') {
			arr[i] += 13;
		}
		else if (arr[i] <= 'Z' && arr[i] >= 'N') {
			arr[i] -= 13;
		}
	}
	cout << arr;
	return 0;
}