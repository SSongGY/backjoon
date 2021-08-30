/* 이미 풀었던 문제를 c++로 다시 짜보기, 기본 설명 python 파일 참조 */
#include <iostream>
#include <vector>
using namespace std;
int main() {

	vector<int> mem(12);
	mem[1] = 1; mem[2] = 2; mem[3] = 4;
	for (int i = 4; i < mem.size(); i++)
		mem[i] = mem[i - 1] + mem[i - 2] + mem[i - 3];

	int num = 0, rotate = 0;
	cin >> rotate;
	for (int i = 0; i < rotate; i++) {
		cin >> num;
		cout << mem[num] << endl;
	}
	return 0;
}