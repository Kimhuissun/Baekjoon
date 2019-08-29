#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int main() {

	//패턴에 알파벳과 "." 그리고 "?"만 넣을 수 있다. 가능하면 ?을 적게 써야 한다
	//파일 이름의 길이는 모두 같고(확장자 포함)최대 50
	//파일이름은 알파벳과 "." 그리고 "?"로만 이루어져 있다.
	//그 디렉토리에는 검색 결과에 나온 파일만 있다고 가정

	//알파벳 다르면 ?
	int N;
	cin >> N;
	vector<string > v(N);
	string ans;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	int m = v[0].size();
	for (int i = 0; i < m; i++) {
		bool same = true;
		char basic = v[0][i];
		for (int j = 0; j < N; j++) {
			if (basic != v[j][i]) {
				same = false;
			}
		}
		if (!same) {
			ans += '?';

		}
		else
			ans += basic;
	}
	cout << ans << endl;
	return 0;
}