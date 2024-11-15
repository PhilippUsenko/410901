#include <iostream>
#include <iomanip>
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
	float endnum = 0;
	int x = 1;
	while (x <= n) {
		endnum += pow(-1, x) * ( 2 * x + 1)  /(2 * pow(x,2));
		x = x + 1;
	}
	cout << "Сумма ряда: " << fixed << setprecision(3) << endnum;
	return 0;
}
