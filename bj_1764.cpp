#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

//#define MAX_NUM 500000
//string input[MAX_NUM];
vector<string> input;
int idx;
void quickSort(int first, int last)
{
	int pivot;
	int i;
	int j;
	string temp;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;

		while (i < j)
		{
			while (input[i] <= input[pivot] && i < last)
			{
				i++;
			}
			while (input[j] > input[pivot])
			{
				j--;
			}
			if (i < j)
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}

		temp = input[pivot];
		input[pivot] = input[j];
		input[j] = temp;

		quickSort(first, j - 1);
		quickSort(j + 1, last);
	}
}
int main() {

	int N, M;
	cin >> N >> M;
	idx = 0;
	set<string> sets;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;
		sets.insert(t);
	}
	set<string>::iterator it;
	for (int i = 0; i < M; i++) {
		string t;
		cin >> t;
		it = sets.find(t);
		if (it != sets.end()) {
			input.push_back(t);
			idx++;
		}
	}
	quickSort(0, input.size()-1);
	cout << idx << endl;
	for (int i = 0; i < idx; i++) {
		cout << input[i] << endl;
	}
	return 0;
}