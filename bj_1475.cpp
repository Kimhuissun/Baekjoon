#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
	//6�� 9�� ����� �̿��� �� �ְ�, 9�� 6�� ����� �̿��� �� �ִ�
	//0~9

	int n;
	cin >> n;
	string s = to_string(n);
	int map[10] = { 0, };//9�� 6���� ����
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '6' || s[i] == '9') {
			map[6]++;
		}
		else
			map[s[i] - '0']++;
	}
	if (map[6] % 2 == 1)
		map[6] = map[6] / 2 + 1;
	else
		map[6] = map[6] / 2;
	
	int cnt = map[0];
	for (int i = 0; i < 9; i++) {
		if (cnt < map[i])
			cnt = map[i];
	}
	cout << cnt << endl;
	return 0;
}