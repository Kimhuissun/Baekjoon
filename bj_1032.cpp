#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int main() {

	//���Ͽ� ���ĺ��� "." �׸��� "?"�� ���� �� �ִ�. �����ϸ� ?�� ���� ��� �Ѵ�
	//���� �̸��� ���̴� ��� ����(Ȯ���� ����)�ִ� 50
	//�����̸��� ���ĺ��� "." �׸��� "?"�θ� �̷���� �ִ�.
	//�� ���丮���� �˻� ����� ���� ���ϸ� �ִٰ� ����

	//���ĺ� �ٸ��� ?
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