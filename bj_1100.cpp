#include <iostream>
#include <string>
using namespace std;
int main() {

	//���� ���� ��ĭ (0,0)�� �Ͼ��
	int ans = 0;
	bool iswhite = true;
	for (int i = 0; i < 8; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < 8; j++) {
			char c = s[j];
			if (c == 'F') {
				if (iswhite) {
					ans++;

				}
			}
			iswhite = !iswhite;
		}
		iswhite = !iswhite;

	}
	cout << ans << endl;
	return 0;
}