#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	double n = 1;
	double s = 0, b = 1;
	while ((abs(s - b)) > 0.001)
	{
		b = s;
		s = s + pow(-1, n) * (n / (pow(2*n-1, 2)* pow(2*n+1, 3)));
		n = n + 1;
	}
	cout << "Результат вычислений: " << s;
return 0;
}
