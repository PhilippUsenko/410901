//лаба 8 перегрузка методов
#include <iostream>

using namespace std;

double answ;
int a; 
			
double calculate(double answ) {
	return log(answ);
}

double calculate(double answ, int a) {
	return log10(answ);
}

int main() {
	cout << "Enter value to calculate log : ";
	cin >> answ;
	cout << endl << "Choose what you need: natural or decimal logarithm" << endl << "1 - natural" << endl << "2 - decimal" << endl;
	cin >> a;
	if (a == 1) {
		cout << calculate(answ);
	}
	else if (a == 2) {
		cout << calculate(answ, 10);
	}
	else {
		cout << "Error";
	}
	return 0;
}


