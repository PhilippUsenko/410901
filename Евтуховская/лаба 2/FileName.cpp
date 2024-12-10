#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "¬ведите координаты точки" << endl;
	cout << "¬ведите координату х точки "; cin >> x;
	cout << "¬ведите координату y точки "; cin >> y;

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

