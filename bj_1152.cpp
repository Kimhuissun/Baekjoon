#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int main() {

	//���ڿ��� �հ� �ڿ��� ������ ���� ���� �ִ�.
	string s;
	getline(cin, s);
	int lastidx = -1;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			if (lastidx >= 0) {
				//�� ���� ���ڰ� �־��� ���� ���ִϱ� lastidx=-1�� �ʱ�ȭ
				lastidx = -1;
				cnt++;
			}
			else {
				//cout << "�Ұ�" << endl;
			}


		}
		else {
			lastidx = i;
			//cout << i << endl;
		}
	}
	if (lastidx != -1)
		cnt++;
	cout << cnt << endl;
	return 0;
}