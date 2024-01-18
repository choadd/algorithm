#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr_cnt = 0;
	int query = 0;

	cin >> arr_cnt >> query;

	int S[100001] = {};

	for (int i = 1; i <= arr_cnt; i++) {
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}

	for (int i = 0; i < query; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";
	}

	return 0;
}
