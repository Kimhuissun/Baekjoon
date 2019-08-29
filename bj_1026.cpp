#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
vector<int> A;
vector<int> B;
int N;
int ans = 1000000;

int _check() {
	int x = 0;
	for (int i = 0; i < N; i++) {
		x += A[i] * B[i];
	}
	return x;
}
//가장 작은 수를 만들기 위해서는 가장 작은 수와 가장 큰수를 곱해야 한다.(수학적)
int main() {

	/*
	 N은 50보다 작거나 같은 자연수
	 A와 B의 각 원소는 100보다 작거나 같은 음이 아닌 정수
	*/
	
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		A.push_back(b);
	}
	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		B.push_back(b);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),greater<int>());
	
	
	cout << _check()<< endl;
	return 0;
}