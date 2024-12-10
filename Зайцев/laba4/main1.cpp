#include <iostream>
using namespace std;
int main() {
	int arr[4][4], m;
	for (int i = 0; i < 4; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		for (int j = 0; j < 4; j++) {
			cout << "[" << j + 1 << "]" << ": ";
			cin >> arr[i][j];

		}
	}
	m = arr[0][0];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] < m) {
				  m = arr[i][j];
			}
		}
	}
	cout << "New array";
	for (int i = 0; i < 4; i++) {
		cout << endl;
		for (int j = 0; j < 4; j++) {
			cout <<  double(arr[i][j]) / m << " ";
		}
	}
	cout << m;
	return 0;
}
