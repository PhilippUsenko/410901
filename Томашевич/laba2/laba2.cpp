#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;

	cout << "¬ведите первое число: ";  cin >> a;
	cout << "¬ведите второе число: ";  cin >> b;
	cout << "¬ведите третье число: ";  cin >> c;

	if (a < 0) {
		a = a * a;
	}
	else if (a > 0) {
		a = a * a * a;
	}

	if (b < 0) {
		b = b * b;
	}
	else if (b > 0) {
		b = b * b * b;
	}

	if (c < 0) {
		c = c * c;
	}
	else if (c > 0) {
		c = c * c * c;
	}

	cout << "–езультаты: " << a << " " << b << " " << c;

	return 0;
}