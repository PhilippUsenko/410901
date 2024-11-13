	#include <iostream>

	using namespace std;

	int main()
	{

		setlocale(LC_ALL, "");

		float x, y;

		cout << "Введите первое число: " << endl;

		cin >> x;

		cout << "Введите второе число: " << endl;

		cin >> y;

			if (x<=y)
			{

				cout << "Число X=" << x << endl;

				cout << "Число Y=" << y << endl;

			}
	else
	{

	cout << "Число X=" << y << endl;

	cout << "Число Y=" << x << endl;

	}

	return 0;

	}
