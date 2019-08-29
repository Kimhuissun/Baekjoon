#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int g[41][2] = { 0, };
int ans1, ans2;
int* fibonacci(int n) {
	if (g[n][0] != -1) {
		return g[n];
	}
	else {
	int* a=fibonacci(n - 1);
	int* b=fibonacci(n - 2);
	g[n][0] = a[0] + b[0];
	g[n][1] = a[1] + b[1];

		return g[n];
	}
}
int main() {

	int tc;
	cin >> tc;
	for (int i = 0; i <= 40; i++) {
		g[i][0] = -1;		g[i][1] = -1;

	}
	g[0][0] = 1;
	g[0][1] = 0;
	g[1][0] = 0;
	g[1][1] = 1;

	for (int i = 0; i < tc; i++) {
		int x;
		cin >> x;
		ans1 = 0, ans2 = 0;

		int* a=fibonacci(x);
		cout << a[0] << " " << a[1] << endl;
	}
	
	return 0;
}