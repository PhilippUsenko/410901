#include <iostream>

using namespace std;

int main()
{
	int a,b;
	bool c = false;
	setlocale(LC_ALL, "RU");

	cout << "Введите натуральное число а"<<endl;
	cin >> a;

	cout << "Введите натуральное число b" << endl;
	cin >> b;

	if (a == b)
	{
		if (a % 3 == 0 && a % 4 == 0 && a % 5 ==0)
		{
			cout << "Числo кратнoе 3,4,5 из заданого промежутка:" << endl;
			cout << a;
		}
	}

	if (b >a)
	{
		for (a; a <= b; a++)
		{
			if (a % 3 == 0 && a % 4 == 0 && a % 5 == 0)
			{
				cout << "Числo кратнoе 3,4,5 из заданого промежутка: ";
				cout << a << endl;
				c = true;
			}
		}
	}
	else if (a>b)
		for (b; b <= a; b++)
		{
			if (b % 3 == 0 && b % 4 == 0 && b % 5 == 0)
			{
				cout <<"Числo кратнoе 3, 4, 5 из заданого промежутка: ";
				cout << b << endl;
				c = true;
			}
		}
	if (!c)
		cout << "Нет чисел кратных 3,4,5" << endl;
	return 0;
}
