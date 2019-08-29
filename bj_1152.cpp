#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int main() {

	//문자열의 앞과 뒤에는 공백이 있을 수도 있다.
	string s;
	getline(cin, s);
	int lastidx = -1;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			if (lastidx >= 0) {
				//그 전에 문자가 있었음 갯수 새주니까 lastidx=-1로 초기화
				lastidx = -1;
				cnt++;
			}
			else {
				//cout << "불가" << endl;
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