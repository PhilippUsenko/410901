#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double alpha = 0.001; 
	double s = 0; 
	int n = 0; 
	double func;
	while (n < 1000) {
		func = pow(-1, n) * (n / pow(1 + pow(n, 3), 2));
		s += func;
		n++;
	}
	
	s = floor(s / alpha) * alpha;

	cout << "Сумма ряда с точностью " << alpha << " равна: " << s << endl;
	return 0;

}
