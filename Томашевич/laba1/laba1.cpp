#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите первое число: ";  cin >> a;
	cout << "Введите второе число: ";  cin >> b;

	cout << "Сумма: " << (a + b) << "\n";
	cout << "Разность a - b: " << (a - b) << "\n";
	cout << "Разность b - a: " << (b - a) << "\n";
	cout << "Произведение: " << (a * b) << "\n";
	cout << "Частное a / b: " << (a / b) << "\n";
	cout << "Частное b / a: " << (b / a) << "\n";

	return 0;
}