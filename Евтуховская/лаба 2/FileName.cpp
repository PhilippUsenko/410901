#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� ���������� �����" << endl;
	cout << "������� ���������� � ����� "; cin >> x;
	cout << "������� ���������� y ����� "; cin >> y;

	if (x != 0 && y != 0) {
		cout << " 0";
	}
	else if (x == 0 && y == 0) {
		cout << " 1";
	}
	else if (x != 0 && y == 0) {
		cout << " 2";
	}
	else if (x == 0 && y != 0) {
		cout << " 3";
	}
	return 0;
}

