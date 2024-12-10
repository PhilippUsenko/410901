#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int A, B;
	cout << "Введите число А=";
	cin >> A;

	cout << "Введите число B=";
	cin >> B;

	if (A!= B)
	{
		if (A > B) B = A;
		else A = B;
	}
	else
	{
		A = 0; B = 0;
	}
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	return 0;
}
