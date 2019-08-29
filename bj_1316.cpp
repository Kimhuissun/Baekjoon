#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int main() {


	/*
	 aabbbccb: b�� ������ ����
	 N�� 100���� �۰ų� ���� �ڿ���
	 ���� �ִ� 100
	*/
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		set<char> sets;
		set<char>::iterator it;
		vector<int> idx(100, 0);//�� ���ĺ��� �����ϴ� ����
		int isgroup = 1;
		for (int j = 0; j < s.size();) {
			char cur = s[j];
			it = sets.find(cur);
			if (it == sets.end()) {
				//���ӵȰ� �� ��������
				while (s[j] == cur) {
					j++;
				}
				sets.insert(cur);
			}
			else {
				isgroup = 0;
				break;
			}

		}
		cnt += isgroup;

	}
	cout << cnt << endl;
	return 0;
}