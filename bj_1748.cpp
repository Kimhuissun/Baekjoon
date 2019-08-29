#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
int main() {


	int N;
	cin >> N;
	string s;
	s = to_string(N);
	int curzari = 1;
	int ans = 0;
	int nextmax = 10;//1 ~9 --> 10
	while (true) {

		if (nextmax >N) {
			//남은 범위 만큼 더해주고 끝
			ans += (curzari)*(N- pow(10, curzari - 1)+1);
			break;
		}
		else {
			ans += curzari * (pow(10, curzari)-pow(10,curzari-1));
		}
		curzari++;
		nextmax = pow(10, curzari);
	//	cout << nextmax << endl;
	}
	cout << ans << endl;
	return 0;
}