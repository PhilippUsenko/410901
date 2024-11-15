#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите значение n: ";
	cin >> n;
	if (n <= 0) {
		cout << "Ошибка!";
		return 1;
	}
	double endnum = 0;
	for (int x = 1; x <= n; ++x) {
		endnum += (x + 2) * pow(-1, x + 1) / x;
	}
	cout<< "Результат суммы: " << endnum;
	return 0;
}
