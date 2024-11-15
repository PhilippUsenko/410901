#include <iostream>
#include <locale.h>
using namespace std;
int  main() {
	setlocale(LC_ALL, "Russian");
	float a, b, s, p;
	cout << "Введите длину а: ";
	while (!(cin >> a)) {
		cout << "Ошибка!";
		return 0;
	}
	cout << "Введите длину b: ";
	while (!(cin >> b)) {
		cout << "Ошибка!";
		return 0;
	}
	s = a * b / 2;
	p = 4 * sqrt(pow(a/2, 2)+pow(b/2, 2));
	cout << "Площадь : " << s << std::endl;
	cout << "Периметр : " << p;
	return 0;
}
