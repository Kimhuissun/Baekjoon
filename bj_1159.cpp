#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
	//ù ���ڰ� ���� ���� 5���� ����
	//������ ���
	// ������ ���� ù ���ڸ� ���������� ������� ��� ���

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