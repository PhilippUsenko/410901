#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const float P = 3.14;
	float S;
	float R;
	float C;
	cout << "���� ������� �����: S = ";
	cin >> S;
		R = sqrt(S/P);
	C = 2*P*R;
	cout << "�����: C = " << C;
		system("pause>nul");
	return 0;
}