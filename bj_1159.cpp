#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
	//첫 글자가 같은 선수 5명을 선발
	//없으면 기권
	// 가능한 성의 첫 글자를 사전순으로 공백없이 모두 출력

	int n;
	cin >> n;
	int g['z' - 'a' + 1] = { 0, };
	
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		int z = s[0] - 'a';
		g[z]++;
	}
	string ans;
	for (int i = 0; i < 26; i++) {
		if (g[i] >= 5)
			ans += ('a' + i);

	}
	if (ans == "") {
		ans = "PREDAJA";
	}
	cout <<ans<< endl;
	return 0;
}