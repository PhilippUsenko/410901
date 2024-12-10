#include <iostream>
using namespace std;
int main() {
	const int ms = 100;
	int nn = 0, pn = 0;
	int n;
	int pm[ms];
	int nm[ms];
	int m[ms];
	cout << "введите кол-во элементов массива\n";
	cin >> n;
	if (n >100) {
		cout << "размерность должна быть меньше 100";
		return 0;
	}
	cout << "введите элементы массива\n";
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < n; i++) {
		if (m[i] >= 0) {
			pm[pn] = m[i];
			pn++;
		}
		else {
			nm[nn] = m[i];
			nn++;
		}
	}
	cout << "положительные\n";
	for (int i = 0; i < pn; i++) {
		cout << pm[i] << " ";
	}
	cout << endl;
	cout << "отрицательные\n";
	for (int i = 0; i < nn; i++) {
		cout << nm[i] << " ";
	}
	return 0;
}
