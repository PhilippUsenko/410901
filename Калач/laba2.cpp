#include <iostream>
#include <locale.h>
int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите год: ";
	cin >> x;
	if (x < 0) {
		cout << "Ошибка!";
		return 2;
	}
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
		cout << "В году " << x << " 366 дней";
	}
	else {
		cout << "В году " << x << " 365 дней";
		return 1; 
	}
	return 0;
}
