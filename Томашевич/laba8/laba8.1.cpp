#include<iostream>
using namespace std;
bool troika(int n) {
	for (int i = 1; i * (i + 1) * (i + 2) <= n; i++) {
		if (i * (i + 1) * (i + 2) == n) {
			return true;
		}
	}
	return false;
}
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите натуральное число: ";
	cin >> n;
	if (n <= 0) {
		cout << "Вы ввели не натуральное число";
		return 1;
	}
	if (troika(n)) {
		cout << "Число " << n << " можно представить в виде суммы трёх последовательных натуральных чисел";
	}
	else {
		cout << "Число " << n << " нельзя представить в виде суммы трёх последовательных натуральных чисел";
	}
}