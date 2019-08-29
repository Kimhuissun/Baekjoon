#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define P pair<int,int>
using namespace std;

int main() {

	//1¡ÂN¡Â100,000
	int N, M;
	scanf_s("%d", &N);
	set<int> sets;
	for (int i = 0; i < N; i++) {
		int x;
		scanf_s("%d", &x);
		sets.insert(x);
	}
		
	scanf_s("%d", &M);
	set<int>::iterator it;
	for (int i = 0; i < M; i++) {
		int x;
		scanf_s("%d", &x);
		it = sets.find(x);
		if (it!=sets.end()) {
			printf("1\n");
		}else
			printf("0\n");

	}
	
	return 0;
}