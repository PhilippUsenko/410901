#include <iostream>
#include <math.h>
using namespace std;
int main()
	{
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� ��������: ";
	int n;
	cin >> n;
	double sum = 0;
	while (n >= 1)
	{
		sum = sum + (pow(-1, n) * n / pow(7, n));
		n--;
	}
	sum = floor(sum * 10000) / 10000;
	cout << "����� ���� �����: " << sum << endl;
	return 0;
	}
