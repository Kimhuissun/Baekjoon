#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//int ans = 10000000;
int map[1000001];// = { 0, };
int N;
int ans= 1000001;
void dfs(int n,int cnt) {
	
	if (cnt > ans)
		return;
	if (n > N)
		return;
	if ( map[n]!= 1000001)
		return;
	map[n] = cnt;
	dfs(n * 3, map[n] + 1);
	dfs(n * 2, map[n] + 1);
	dfs(n +1, map[n] + 1);
}
int main() {
	int n;
	cin >> n;
	N = n;
	for (int i = 0; i <= N; i++)
		map[i] = 1000001;

	//map[1] = 1;
	queue<int> q;
	q.push(1);
	int cnt = 0;
	bool cango = false;
	while (!q.empty()) {
		
		int sz = q.size();
		while (sz--) {
			int p = q.front();
			q.pop();
			if (p > n) continue;
			if (p == n) {
				map[n] = cnt;
				cango = true;
				break;
			}
			if (map[p] == 1000001)
				map[p] = cnt;
			else continue;

			q.push(2 * p);
			q.push(3 * p);
			q.push(p + 1);
			
		}
		cnt++;
		if (cango)
			break;
	}
	
	cout << map[n] << endl;
	return 0;
}