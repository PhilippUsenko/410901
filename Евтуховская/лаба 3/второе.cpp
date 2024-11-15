#include <iostream>
#include <math.h>
using namespace std;
int main()
	{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество итераций: ";
	int n;
	cin >> n;
	double sum = 0;
	while (n >= 1)
	{
		sum = sum + (pow(-1, n) * n / pow(7, n));
		n--;
	}
	sum = floor(sum * 10000) / 10000;
	cout << "Сумма ряда равна: " << sum << endl;
	return 0;
	}
