#include <iostream>
using namespace std;
int sum(int a, int b) {
	return a + b;
}
void sum(double real1, double mnim1, double real2, double mnim2, double& resultreal, double& resultmnim) {
	resultreal = real1 + real2;
	resultmnim = mnim1 + mnim2;
}
void printcomplex(double real, double mnim) {
	if (mnim >= 0) {
		cout << real << " + " << mnim << "i";
	}
	else {
		cout << real << " - " << -mnim << "i";
	}
}
int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	cout << "������� ��� ����� �����: ";
	cin >> a >> b;
	cout << "����� ����� �����: " << sum(a, b) << endl;

	double real1, mnim1, real2, mnim2;
	cout << "������� �������������� � ������ ����� ������� ������������ �����: ";
	cin >> real1 >> mnim1;
	cout << "������� �������������� � ������ ����� ������� ������������ �����: ";
	cin >> real2 >> mnim2;

	double resultmnim, resultreal;
	sum(real1, mnim1, real2, mnim2, resultreal, resultmnim);
	cout << "����� ����������� �����: ";
	printcomplex(resultreal, resultmnim);
	cout << endl;
	return 0;
}