#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	//�׻� ��ȣ�� ���� ������ ���. ������ ¦ ������ִ� ��Ģ
	//�������� (�� �־�� ���� �� ����
	//*,/�� ��ȣ ���� ���� �ٷ� ��� ����
	///+-�� ��ȣ �߿�
	//���� ������ ����
	//��ȣ�� �־������

	stack<string> st;
	for (int i = 0; i < s.size();) {

		/*if (s[i] >= 'A'&&s[i] <= 'Z') {
			
		}
		else */
		if (s[i] == ')') {

			
			vector<string> tmp;
			//(������ ���//����ǥ������� ���
			while (st.top()!="(") {


				tmp.push_back(st.top());
				st.pop();

			}
			st.pop();
			vector<string> v;
			//�ڰ� ù��°
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

			//�ϷĿ���
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
	//(������ ���//����ǥ������� ���
	while (!st.empty()) {


		tmp.push_back(st.top());
		st.pop();

	}

	vector<string> v;
	//�ڰ� ù��°
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

	//�ϷĿ���
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