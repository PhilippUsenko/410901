#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n; cout << "������� ����������� �����: "; cin >> n;
	double r = 1;

	for (int i = 1; i <= n; i++) {
		r = (2 + 1 / i);
	}

	cout << "���������: " << r << endl;
	return 0;
}

