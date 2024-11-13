#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float n = 1, a = 0;
	while (n != 1000)
	{
		a = a + pow(-1, n) * 1 / (n * (2 * n + 1));
		n++;
	}
	a = round(a * 1000) / 1000;
	cout << a;
	return 0;
}
