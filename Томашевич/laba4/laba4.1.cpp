#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int c, sum=0;
	cout << "Введите число c: "; cin >> c;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "Введите " << i + 1 << " элемент массива ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			sum += arr[i];
		}
	}
	if (sum < c) {
		cout << "Сумма отрицательных элементов массива меньше " << c << " и равна " << sum << endl;
	}
	if (sum > c) {
		cout << "Сумма отрицательных элементов массива больше " << c << " и равна " << sum << endl;
	}
	if (sum == c) {

		cout << "Сумма отрицательных элементов массива равна " << c << endl;
	}
	return 0;
}