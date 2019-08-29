#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	// 공이 들어있는 컵의 번호 알아내기
	// X와 Y가 같을 수도 있다.
	int ans = 1;//공이 들어있는 인덱스

	int m;
	cin >> m;
	/*int vec[4] = {
		-1,1,2,3
	};*/
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		if (x == ans) {
			//y로 변함
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