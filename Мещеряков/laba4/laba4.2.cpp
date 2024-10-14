#include <iostream>
using namespace std;
int main() {
	int arr[5][5]{};
	int max[5]{};

	cout << "Vvedite elmenty massiva: " << endl;
	for (int i=0;i<5;i++){
		for (int j = 0; j < 5; j++) {
			cout << "[" << i + 1 << "]";
			cout << "[" << j + 1 << "]";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] > max[i]) {
				max[i] = arr[j][i];
			}
		}
	}

	int min = max[0];
	for (int i = 0; i < 5; i++) {
		if (max[i] < min) {
			min = max[i];
		}
	}
	cout << "Minimalny iz maksimalnych " << min;


	return 0;
}
