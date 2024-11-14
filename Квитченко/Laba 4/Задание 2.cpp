#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 4;
	const int k = 4;
	int numbers[n][k];
	int sum = 0, diog = 1, kek, i=0, b=0;
	bool t;
	for (i = 0; i < n; i++) {
		for ( b = 0; b < k; b++) {
			cin >> numbers[i][b];
		}
	}
	cout << "--------------------" << endl;
	for ( i = 0; i < n; i++) {
		for ( b = 0; b < k; b++) {
			cout << numbers[i][b] << " ";
		}
		cout << endl << "--------------------" << endl;
	}

	for ( i=0; i < n; i++) {
		for ( b=0; b < k; b++) {
			sum +=numbers[i][b];
			if (b == i) {
				diog = diog * numbers[i][b];
			};
		}
	}
		kek = sum / ((n - 1) * (k - 1));
		if (kek > diog) {
		t = true;	
		}
		else {
			t = false;
		};
		cout << "Если значение t равняется 0(ложь), 1(правда) :" << t << endl;
		
	return 0;
}