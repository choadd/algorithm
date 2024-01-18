#include <iostream>

using namespace std;

int main() {

	string num;
	int sum = 0;

	cin >> num;

	for (int i = 0; i < num.length(); i++) {
		sum += num[i] - '0';
	}

	cout << sum << endl;

	return 0;
}