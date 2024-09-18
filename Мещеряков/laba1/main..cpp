#include <iostream>
using namespace std;
int main() {
	int a;
	double z1, z2, z3, pi = 3.1415926535;

	cout << "Enter angle in degrees:";
	cin >> a;
  
	if ((a / 90) % 2 > 0) {
		cout << "Error" << endl;
		return 0;
	}

	if ((-a / 90) % 2 > 0) {
		cout << "Error" << endl;
		return 0;
	}

	double a1 = a * pi / 180;
	z1 = 2 * tan(a1 / 2) / (1 - pow(tan(a1 / 2), 2));
	z2 = sin(a1) / sqrt(1 - pow(sin(a1), 2));
	z3 = sin(a1) / -sqrt(1 - pow(sin(a1), 2));

	cout << "Z1 = " << z1 << endl;
	cout << "Z2 (positive) = " << z2 << endl;
	cout << "Z2 (negative) = " << z3;
	return 0;
}
