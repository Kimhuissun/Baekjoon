#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main() {

	int n;
	cin >> n;
	vector<int> v(n, -1);
	for (int i = 0; i < n; i++) {
		cin >> v[i];//i�� �θ�
	}
	int x;
	cin >> x;//x�� �θ��� �� ã��
	queue<int> q;
	q.push(x);
	v[x] = -2;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 0; i < n; i++) {
			if (v[i] == a) {
				v[i] = -2;//���ŵ� ����
				q.push(i);
				//cout << "push" << i << endl;
			}
			else {

			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == -2) continue;
		bool isparant = false;
		//cout << v[i] << endl;
		for (int j = 0; j < n; j++) {
			if (v[j] == i) {
				//i�� ������尡 �ƴ϶� �θ���
				isparant = true;
				//cout <<"isparant"<< i << endl;
			}
		}
		if (!isparant)
			ans++;
	}

	cout << ans << endl;
	return  0;
}