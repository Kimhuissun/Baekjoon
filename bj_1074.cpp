#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int N, r, c;
int dr[4] = { 0,0,1,1 };
int dc[4] = { 0,1,0,1 };
int ans = -1;
bool dfs(int depth,int curr,int curc ) {
	if (depth == 0) {//�̹����� �ִٴ� ��?
		for (int i = 0; i < 4; i++) {
			ans++;
			if (curr + dr[i] == r && curc + dc[i] == c)
				break;
		}
		
		return true;

	}
	if (r >= curr && r < curr + pow(2, depth)
		&& c >= curc && c < curc + pow(2, depth)) {
		//cout << depth << " " << curr + pow(2, depth) << curc + pow(2, depth) << endl;
		
		//�̹����� 
		if (dfs(depth - 1, curr, curc)) {
			//cout << "ret1" << endl;
			return true;
		}
		if (dfs(depth - 1, curr, curc + pow(2, depth - 1))) {
			//cout << "ret2" << endl;

			return true;
		}
		if (dfs(depth - 1, curr + pow(2, depth - 1), curc )) {
			//cout << "ret3" << endl;

			return true;
		}
		if (dfs(depth - 1, curr + pow(2, depth - 1), curc+pow(2, depth - 1))) {
			//cout << "ret4" << endl;

			return true;
		}
		//���� �����ϳ�?
		//cout << "����" << endl;
	}
	else {
		//�� depth�� ������ �ѹ��� ����ϱ�
		//int tmp = 
		ans += pow(4, depth);
		//cout << "�ѹ���" << endl;

		return false;
	}
	
}
int main() {

	//2^N * 2^N ũ��
	//N�� 15���� �۰ų� ���� �ڿ���
	//��� z������� �鸥��.
	cin >> N >> r >> c;
	dfs(N, 0, 0)
		;

	cout << ans << endl;
	return 0;
}