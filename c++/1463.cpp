/* 이미 풀었던 문제를 c++로 다시 짜보기, 기본 설명 python 폴더 참조 */
#include <iostream>
#include <vector>
using namespace std;
int main() {

	int num = 0;
	cin >> num;

	vector<int> mem(num+1);
	for (int i = 2; i < mem.size(); i++) {
		if (i % 3 == 0) {
			if (mem[int(i / 3)] + 1 > mem[i - 1] + 1)
				mem[i] = mem[i - 1] + 1;
			else
				mem[i] = mem[int(i / 3)] + 1;
		}
		else if (i % 2 == 0) {
			if (mem[int(i / 2)] + 1 > mem[i - 1] + 1)
				mem[i] = mem[i - 1] + 1;
			else
				mem[i] = mem[int(i / 2)] + 1;
		}
		else {
			mem[i] = mem[i - 1] + 1;
		}
	}
	cout << mem[num] << endl;
	return 0;
}