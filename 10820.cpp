#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	string s;
	while (getline(cin, s)) {
		int split[4] = { 0 };
		for (int i = 0; s[i]; i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				split[0]++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				split[1]++;
			}
			else if (s[i] >= '0' && s[i] <= '9') {
				split[2]++;
			}
			else if (s[i] == ' ') {
				split[3]++;
			}
		}
		for (int i = 0; i < 4; i++) {
			cout << split[i] << " ";
		}
		cout << endl;
	}
	return 0;
}