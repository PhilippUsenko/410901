#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "������� ������ �����: ";  cin >> a;
	cout << "������� ������ �����: ";  cin >> b;

	cout << "�����: " << (a + b) << "\n";
	cout << "�������� a - b: " << (a - b) << "\n";
	cout << "�������� b - a: " << (b - a) << "\n";
	cout << "������������: " << (a * b) << "\n";
	cout << "������� a / b: " << (a / b) << "\n";
	cout << "������� b / a: " << (b / a) << "\n";

	return 0;
}