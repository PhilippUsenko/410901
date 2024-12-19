#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int k;
	cout << "Введите количество строк : ";
	cin >> n;
	cout << "Введите количество столцов : ";
	cin >> k;
	int **arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[k];
	}
	int sum = 0, dio = 1, kek, i = 0, b = 0;
	bool t;
	for (i = 0; i < n; i++) {
		for (b = 0; b < k; b++) {
			cin >> arr[i][b];
		}
	}
	cout << "--------------------" << endl;
	for (i = 0; i < n; i++) {
		for (b = 0; b < k; b++) {
			cout << arr[i][b] << " ";
		}
		cout << endl << "--------------------" << endl;
	}

	for (i = 0; i < n; i++) {
		for (b = 0; b < k; b++) {
			sum += arr[i][b];
			if (b == i) {
				dio = dio * arr[i][b];
			};
		}
	}
	kek = sum / ((n - 1) * (k - 1));
	if (kek > dio) {
		t = true;
	}
	else {
		t = false;
	};
	cout << "Если значение t равняется 0(ложь), 1(правда) :" << t << endl;

	delete[] arr;

	return 0;
}