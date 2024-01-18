#include <iostream>

using namespace std;

int main() {
	int count;
	int subject[1000];
	long sum = 0;

	cin >> count;
	
	for (int i = 0; i < count; i++) {
		cin >> subject[i];
	}

	long max = 0;

	for (int i = 0; i < count; i++) {
		if (max < subject[i]) {
			max = subject[i];
		}
	}

	for (int i = 0; i < count; i++) {
		sum += subject[i] * 100.0 / max;
	}

	cout << sum / count;

	return 0;
}