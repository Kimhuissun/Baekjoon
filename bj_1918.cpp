#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	//항상 괄호가 끝날 때마다 계산. 없으면 짝 만들어주는 규칙
	//시작으로 (가 있어야 넣을 수 있음
	//*,/는 괄호 유무 없이 바로 계산 가능
	///+-만 괄호 중요
	//문자 무조건 스택
	//괄호도 넣어줘야함

	stack<string> st;
	for (int i = 0; i < s.size();) {

		/*if (s[i] >= 'A'&&s[i] <= 'Z') {
			
		}
		else */
		if (s[i] == ')') {

			
			vector<string> tmp;
			//(전까지 계산//중위표기식으로 계산
			while (st.top()!="(") {


				tmp.push_back(st.top());
				st.pop();

			}
			st.pop();
			vector<string> v;
			//뒤가 첫번째
			for (int j = tmp.size() - 1; j >= 0; j--) {
				if (tmp[j] == "*" || tmp[j] == "/") {
					string str = v[v.size() - 1] + tmp[j - 1] + tmp[j];
					j--;
					///cout << str << endl;
					v[v.size() - 1] = (str);
				}
				else {
					v.push_back(tmp[j]);
				}
				//cout << v[v.size() - 1] << endl;
			}
			string ans = v[0];
			//cout << ans << endl;
			/*for (int j = 0; j < v.size() - 1; j++) {
				cout << v[j] << endl;
			}*/

			//일렬연산
			for (int j = 0; j < v.size() - 1; j++) {
				if (v[j] == "-" || v[j] == "+") {
					ans = ans + v[j + 1] + v[j];
					//cout << v[j + 1] << endl;
				}
				else {

				}
			}

			st.push(ans);


		}
		else {
			st.push(string(1,s[i]));
			//cout << string(1, s[i]) << endl;
		}
		i++;
	}
	if (st.size()==1) {
		cout << st.top() << endl;

		return 0;
	}
	vector<string> tmp;
	//(전까지 계산//중위표기식으로 계산
	while (!st.empty()) {


		tmp.push_back(st.top());
		st.pop();

	}

	vector<string> v;
	//뒤가 첫번째
	for (int j = tmp.size() - 1; j >= 0; j--) {
		if (tmp[j] == "*" || tmp[j] == "/") {
			string str = v[v.size() - 1] + tmp[j - 1] + tmp[j];
			j--;
			///cout << str << endl;
			v[v.size() - 1]=(str);
		}
		else {
			v.push_back(tmp[j]);
		}
		//cout << v[v.size() - 1] << endl;
	}
	string ans = v[0];
	//cout << ans << endl;
	/*for (int j = 0; j < v.size() - 1; j++) {
		cout << v[j] << endl;
	}*/

	//일렬연산
	for (int j = 0; j < v.size() - 1; j++) {
		if (v[j] == "-" || v[j] == "+") {
			ans = ans + v[j + 1] + v[j];
			//cout << v[j + 1] << endl;
		}
		else {

		}
	}
	st.push(ans);

	
	cout << st.top() << endl;
	//cout <<"df"<< endl;

	return 0;
}