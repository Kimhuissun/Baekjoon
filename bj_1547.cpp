#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	// ���� ����ִ� ���� ��ȣ �˾Ƴ���
	// X�� Y�� ���� ���� �ִ�.
	int ans = 1;//���� ����ִ� �ε���

	int m;
	cin >> m;
	/*int vec[4] = {
		-1,1,2,3
	};*/
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		if (x == ans) {
			//y�� ����
			ans = y;
		}
		else if (y == ans) {
			ans = x;
		}
		else {

		}
	}
	cout << ans << endl;
	return 0;
}