#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
	//6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다
	//0~9

	int n;
	cin >> n;
	string s = to_string(n);
	int map[10] = { 0, };//9는 6에서 샌다
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