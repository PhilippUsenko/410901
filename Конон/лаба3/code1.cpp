#include <iostream>
using namespace std;
int n;
float R;
float fl = 1;

int main() {
	setlocale(LC_ALL, "RU");
	cout << "Введите число n:";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		R = R + (i*fl + 1) / i;
	}
	cout << "Результат вычисления равен:" << R;
}
