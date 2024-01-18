#include <iostream>
#include <vector>

using namespace std;

int org_arr[1025][1025];
int sum_arr[1025][1025];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int map_size;
	int sum_cnt;

	cin >> map_size >> sum_cnt;

	for (int i = 1; i <= map_size; i++) {
		for (int j = 1; j <= map_size; j++) {
			cin >> org_arr[i][j];
			sum_arr[i][j] = sum_arr[i][j - 1] + sum_arr[i - 1][j] - sum_arr[i - 1][j - 1] + org_arr[i][j];	// (행 인덱스의 합) + (열 인덱스 합) - (중복부분 제거) + (현재 인덱스)
		}
	}

	for (int i = 0; i < sum_cnt; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sum_arr[x2][y2] - sum_arr[x1 - 1][y2] - sum_arr[x2][y1 - 1] + sum_arr[x1 - 1][y1 - 1] << "\n";	// (target x,y좌표까지 합) - (행 제거) - (열 제거) + (중복 제거된 원소 복구)
	}


	return 0;
}

