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
//���� ���� ���� ����� ���ؼ��� ���� ���� ���� ���� ū���� ���ؾ� �Ѵ�.(������)
int main() {

	/*
	 N�� 50���� �۰ų� ���� �ڿ���
	 A�� B�� �� ���Ҵ� 100���� �۰ų� ���� ���� �ƴ� ����
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