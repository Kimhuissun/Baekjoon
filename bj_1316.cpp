#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int main() {


	/*
	 aabbbccb: b가 떨어져 있음
	 N은 100보다 작거나 같은 자연수
	 길이 최대 100
	*/
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		set<char> sets;
		set<char>::iterator it;
		vector<int> idx(100, 0);//각 알파벳이 존재하는 갯수
		int isgroup = 1;
		for (int j = 0; j < s.size();) {
			char cur = s[j];
			it = sets.find(cur);
			if (it == sets.end()) {
				//연속된거 다 가져오기
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