#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string num1 = a + b;
	string num2 = c + d;
	cout << stoll(num1) + stoll(num2) << '\n';
	return 0;
}