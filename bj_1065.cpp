#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check(int n) {
	string s = to_string(n);

	if (s.size() == 1)
		return true;
	else {
		bool cango = true;
		int d = s[1] - s[0];
		for (int i = 2; i < s.size(); i++) {
			if (d != s[i] - s[i - 1]) {
				cango = false;
				break;
			}
		}
		return cango;
	}

}
int main() {

	//자리수 파악 후 1,2,3
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		if (check(i))
			ans++;
	}
	cout << ans << endl;
	return 0;

}