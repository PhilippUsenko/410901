#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "Индивидуальное задание №4: Из трех заданных разных  чисел выбрать наименьшее и наибольшее." << endl;
	cout << "введите три разных числа" << endl;
	cout << "первое число="; cin >> a;
	cout << "второе число="; cin >> b;
	cout << "третье число="; cin >> c;
	if (a > c && a > b) {
		cout << "большее число=" << a << endl;
		if (b > c) {
			cout << "меньшее число=" << c;
		}
		else 
			cout << "меньшее число = " << b;
		}
	else if (b > c && b > a) {
		cout << "большее число=" << b << endl;
		if (a > c) {
			cout << "меньшее число=" << c;
		}
		else
			cout << "меньшее число = " << a;
		}
	else {
			cout << "большее число=" << c << endl;
			if (a > b) {
				cout << "меньшее число=" << b;
			}
			else
				cout << "меньшее число = " << a;
			}
	return 0;
		}
