#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int graph[1001][1001] = { 0, };
class node {
public:
	int depth; int idx;
	node() {

	}
	node(int d, int i) {
		depth = d, idx = i;
	}
	
};

struct com1{
	bool operator()(const node a, const node b) {//기본
		if (a.idx > b.idx) {
			if (a.depth < b.depth)
				return true;
			else if (a.depth > b.depth)
				return false;
			else
				return true;
		}
		else if(a.idx == b.idx){
			if (b.depth > a.depth)
				return true;
			else return false;

			//depth가 같을 수는 없음
		}
		else {//a idx<b idx
			if (b.depth > a.depth)
				return true;
			else if (b.depth == a.depth)
				return false;
			else
				return false;
		}
		
	}
};
struct com2 {
	bool operator()(const node a, const node b) {
		if (b.depth < a.depth) {
			if (b.idx > a.idx) return true;
			else if (b.idx == a.idx) return true;
			else return true;
		}
		else if(b.depth == a.depth){
			if (b.idx > a.idx)return false;
			else if (b.idx < a.idx)return true;
			else return false;
		}
		else {
			//if (b.idx == a.idx)
				return false;
			
		}
		
	}
};
//bool operator>(const node a, const node b) {
//	if (a.depth > b.depth) {
//
//	}
//}
int main() {
	/*
	여러개의 정점에 동시에 갈때는 작은 수부터
	*/

	int N, M, V;
	cin >> N >> M >> V;
	priority_queue < node,vector<node>, com1> pq;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1; graph[b][a ] = 1;
		
	}
	bool visited[1001] = { false, };
	pq.push(node(0, V));
	bool first = true;
	while (!pq.empty()) {
		
		node nd=pq.top();
		pq.pop();
		if (visited[nd.idx]) continue;
		if (first) {
			cout << nd.idx;
			first = false;
		}
		else
			cout << " "<<nd.idx;
		visited[nd.idx] = true;
		
		

		for (int i = 1; i <= N; i++) {
			if (graph[nd.idx][i] == 1&&!visited[i]) {
				pq.push(node(nd.depth + 1, i));
			}
		}
		
		
	}
	cout << endl;
	bool visited2[1001] = { false, };
	first = true;
	priority_queue < node, vector<node>, com2> pq2;
	pq2.push(node(0, V));

	


		while (!pq2.empty()) {
			node nd = pq2.top();
			pq2.pop();
			if (visited2[nd.idx]) continue;
			if (first) {
				cout << nd.idx;
				first = false;
			}
			else
				cout << " " << nd.idx;

			visited2[nd.idx] = true;


			for (int i = 1; i <= N; i++) {
				if (graph[nd.idx][i] == 1 && !visited2[i]) {
					pq2.push(node(nd.depth + 1, i));
				}
			}


		}
	
		cout << endl;
	return 0;
}