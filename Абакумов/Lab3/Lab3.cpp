#include <iostream>
#include <cmath>

using namespace std;


double series_value(int n) {
	return pow(-1, n) * n / pow((1 + pow(n, 3)), 2);
}

int main() {
	int degree; 

	cout << "Enter exponent: " << endl;
	cin >> degree;

	double answer = 3;
	for (double i = 2; i <= degree; i++) {
		answer *= 2 + (1 / i);
	}

	if (degree > 0) cout << "Answer: " << answer << endl;
	else cout << "Incorrect input";


	//Вычислить сумму ряда с заданной степенью точности а
	float a = 0.001f;
	int n = 0;
	double sum = 0;
	double current, previous;

	current = series_value(n);
	sum += current;
	n++;
	do {
		previous = current;
		current = series_value(n);
		sum += current;
		n++;
	} while (abs(current - previous) > a);

	cout << "\n\n\n" << "Sum of series: " << sum;
	

	system("pause>nul");
	return 0;
}